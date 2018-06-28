' GroupByMaterial.vb - Group elements (meshes) by Physical Property
'
' 
'
'------------------------------------------------------------
Option Strict Off
Imports System
Imports NXOpen
Imports NXOpen.UF
Imports NXOpen.CAE
Imports NXOpen.NXMessageBox
Imports NXOpen.Utilities
Imports NXOpen.UF.UFObj


Module GroupByPhysical
    Dim theSession As Session = Session.GetSession()
    Dim theUfSession As UFSession = UFSession.GetUFSession()
    Dim theLW As NXOpen.ListingWindow = theSession.ListingWindow()


    '  Explicit Activation
    '      This entry point is used to activate the application explicitly
    Sub Main()

        theLW.Open()

        'Create/initialize object references
        Dim basePart As BasePart = theSession.Parts.BaseWork
        Dim baseFEMPart As CAE.BaseFemPart = CType(basePart, CAE.BaseFemPart)
        Dim baseFEModel As CAE.BaseFEModel = CType(baseFEMPart.BaseFEModel, CAE.BaseFEModel)

        If basePart Is Nothing Then
            Exit Sub
        End If

        'Create/initialize variables
        Dim NULLTAG As Tag = NXOpen.Tag.Null
        Dim objectTag As Tag = NXOpen.Tag.Null

        theUfSession.Obj.CycleObjsInPart(basePart.Tag, NXOpen.UF.UFConstants.UF_sfem_mesh_type, objectTag)

        Do
            'Initialize Loop Variables
            Dim myMesh As CAE.Mesh = Nothing
            Dim myMeshCollector As MeshCollector = Nothing
            Dim myObject As NXObject = Nothing
            Dim objType As Integer = 0
            Dim objSubtype As Integer = 0
            Dim myMaterial As String = Nothing
            Dim GroupObjects() As NXOpen.TaggedObject = Nothing

            theUfSession.Obj.AskTypeAndSubtype(objectTag, objType, objSubtype)

            If objSubtype = NXOpen.UF.UFConstants.UF_sfem_generic_mesh_subtype Then
                myObject = NXObjectManager.Get(objectTag)
                myMesh = CType(myObject, CAE.Mesh)
                myMeshCollector = GetMeshCollector(myMesh)

                Dim myPhysical As CAE.NamedPropertyTable = Nothing
                Dim myType As String = Nothing

                GetMeshCollectorPhysical(myMeshCollector, myPhysical)

                If TypeOf myMesh Is Mesh2d Then

                    GroupMesh2D(baseFEMPart, myMesh, myPhysical)

                Else 'Catches remining mesh types....3D and 1D

                    Group1D3D(baseFEMPart, myMesh, myPhysical)

                End If

            End If

            theUfSession.Obj.CycleObjsInPart(basePart.Tag, NXOpen.UF.UFConstants.UF_sfem_mesh_type, objectTag)

        Loop While objectTag <> NULLTAG

    End Sub

    Public Sub GroupMesh2D(ByVal part As CAE.BaseFemPart, ByVal mesh As CAE.Mesh, ByVal physical As CAE.NamedPropertyTable)
        Dim GroupObjects() As NXOpen.TaggedObject
        Dim myPhysicalName As String = Nothing
        Dim myFEModel As FEModel = part.BaseFEModel

        If physical IsNot Nothing Then
            myPhysicalName = "PHYS_" & physical.Name
        Else
            'invalid name for physical
            Exit Sub
        End If

        ReDim GroupObjects(0)
        GroupObjects(0) = mesh

        Dim myManager As MeshManager = myFEModel.MeshManager
        Dim myBuilder As Mesh2dBuilder = myManager.CreateMesh2dBuilder(mesh)
        Dim ExportMesh As Boolean = myBuilder.PropertyTable.GetBooleanPropertyValue("mesh format to solver bool")

        If Not ExportMesh Then
            'mesh is a Seed Mesh, group accordingly
            myPhysicalName = "Phys_Seed Mesh"
            GroupObjects(0) = mesh
            CAEGroupObjects(part, GroupObjects, myPhysicalName)
            Exit Sub
        End If

        If myPhysicalName IsNot Nothing Then
            CAEGroupObjects(part, GroupObjects, myPhysicalName)
        End If

    End Sub

    Public Sub Group1D3D(ByVal part As CAE.BaseFemPart, ByVal mesh As CAE.Mesh, ByVal physical As CAE.NamedPropertyTable)
        Dim GroupObjects() As NXOpen.TaggedObject = Nothing
        Dim myBodies() As CAE.CAEBody = Nothing
        Dim myPhysicalName As String = Nothing

        ReDim GroupObjects(0)
        GroupObjects(0) = mesh

        If physical IsNot Nothing Then
            myPhysicalName = "PHYS_" & physical.Name
        Else
            'invalid name for physical
            Exit Sub
        End If

        If myPhysicalName IsNot Nothing Then
            CAEGroupObjects(part, GroupObjects, myPhysicalName)
        End If

    End Sub

    Public Function GetMeshCollector(ByRef mesh As CAE.Mesh) As CAE.MeshCollector

        Dim meshCollector As CAE.MeshCollector = Nothing
        Dim basePart As BasePart = mesh.OwningPart

        Dim elementTypeBuilder As CAE.ElementTypeBuilder = Nothing
        Dim builder As Builder = Nothing

        If TypeOf basePart Is CAE.BaseFemPart Then
            'theLW.WriteLine("basePart is CAE.FemPart")
            Dim femPart As CAE.FemPart = CType(basePart, CAE.FemPart)
            Dim fEModel As CAE.FEModel = CType(femPart.BaseFEModel(), CAE.FEModel)
            Dim meshManager As CAE.MeshManager = CType(fEModel.Find("MeshManager"), CAE.MeshManager)

            If TypeOf mesh Is CAE.Mesh0d Then

                'theLW.WriteLine("Type is Mesh0d ")

                Dim mesh0dBuilder As CAE.Mesh0dBuilder = meshManager.CreateMesh0dBuilder(CType(mesh, CAE.Mesh0d))
                elementTypeBuilder = mesh0dBuilder.ElementType()
                builder = mesh0dBuilder

            ElseIf TypeOf mesh Is CAE.Mesh1d Then

                'theLW.WriteLine("Type is Mesh1d ")
                Dim mesh1dBuilder As CAE.Mesh1dBuilder = meshManager.CreateMesh1dBuilder(CType(mesh, CAE.Mesh1d))
                elementTypeBuilder = mesh1dBuilder.ElementType()
                builder = mesh1dBuilder

            ElseIf TypeOf mesh Is CAE.Mesh2d Then


                'theLW.WriteLine("Type is Mesh2d ")
                Dim mesh2dBuilder As CAE.Mesh2dBuilder = meshManager.CreateMesh2dBuilder(CType(mesh, CAE.Mesh2d))
                elementTypeBuilder = mesh2dBuilder.ElementType()
                builder = mesh2dBuilder

            ElseIf TypeOf mesh Is CAE.Mesh3d Then


                'theLW.WriteLine("Type is Mesh3d ")
                Dim mesh3dBuilder As CAE.Mesh3dTetBuilder = meshManager.CreateMesh3dTetBuilder(CType(mesh, CAE.Mesh3d))
                elementTypeBuilder = mesh3dBuilder.ElementType()
                builder = mesh3dBuilder

            ElseIf TypeOf mesh Is CAE.Mesh2dFree Then

                'theLW.WriteLine("Type is Mesh2dFree ")
                Dim mesh2dBuilder As CAE.Mesh2dBuilder = meshManager.CreateMesh2dBuilder(CType(mesh, CAE.Mesh2d))
                elementTypeBuilder = mesh2dBuilder.ElementType()
                builder = mesh2dBuilder

            ElseIf TypeOf mesh Is CAE.SweptMesh Then

                'theLW.WriteLine("Type is SweptMesh ")
                Dim mesh3dHexBuilder As CAE.Mesh3dHexBuilder = meshManager.CreateMesh3dHexBuilder(CType(mesh, CAE.SweptMesh))
                elementTypeBuilder = mesh3dHexBuilder.ElementType()
                builder = mesh3dHexBuilder
            End If


            If elementTypeBuilder IsNot Nothing Then
                meshCollector = elementTypeBuilder.DestinationCollector.ElementContainer
            End If

            If builder IsNot Nothing Then
                builder.Destroy()
            End If
        End If

        Return meshCollector

    End Function

    Public Sub GetMeshCollectorPhysical(ByRef meshCollector As CAE.MeshCollector, ByRef physical As CAE.NamedPropertyTable)

        physical = Nothing

        If meshCollector Is Nothing Then
            'theLW.WriteLine("No mesh collector")
            Return
        End If

        Dim baseFemPart As CAE.BaseFemPart = Nothing
        Dim iFEModel As CAE.IFEModel = Nothing


        Dim basePart As BasePart = meshCollector.OwningPart()

        If TypeOf basePart Is CAE.BaseFemPart Then baseFemPart = CType(basePart, CAE.BaseFemPart)

        Dim baseFEModel As CAE.BaseFEModel = baseFemPart.BaseFEModel()

        Dim meshManager As CAE.MeshManager = CType(baseFEModel.MeshManager(), CAE.MeshManager)
        Dim meshCollectorBuilder As CAE.MeshCollectorBuilder = meshManager.CreateCollectorBuilder(meshCollector, "")

        Dim propTable As CAE.PropertyTable = meshCollectorBuilder.PropertyTable()

        If propTable IsNot Nothing Then
            Dim propCnt As Integer = propTable.GetPropertyCount
            Dim propIdx As Integer = 0
            'Dim propName As String = Nothing

            Do While propIdx < propCnt


                Dim propName As String = propTable.GetPropertyNameByIndex(propIdx)
                Dim propType As String = TestPropType(propTable, propName)
                'theLW.WriteLine("propName is " & propName)
                'theLW.WriteLine("propType is " & propType)
                If (String.Compare(propType, "NamedPropertyTable") = 0) Then
                    physical = propTable.GetNamedPropertyTablePropertyValue(propName)
                    'theLW.WriteLine("type = " & type)
                    propIdx = propCnt

                End If
                propIdx = propIdx + 1

            Loop

            'Try
            '    propName = "Solid Property"
            '    physical = propTable.GetNamedPropertyTablePropertyValue(propName)
            'Catch ex As Exception
            'End Try

            'Try
            '    propName = "Shell Property"
            '    physical = propTable.GetNamedPropertyTablePropertyValue(propName)
            '    meshCollectorBuilder.Destroy()
            '    Exit Sub
            'Catch ex As Exception
            'End Try

            'Try
            '    propName = "Beam Property"
            '    physical = propTable.GetNamedPropertyTablePropertyValue(propName)
            '    meshCollectorBuilder.Destroy()
            '    Exit Sub
            'Catch ex As Exception
            'End Try

            'Try
            '    propName = "Bar Property"
            '    physical = propTable.GetNamedPropertyTablePropertyValue(propName)
            '    meshCollectorBuilder.Destroy()
            '    Exit Sub
            'Catch ex As Exception
            'End Try

        End If

        meshCollectorBuilder.Destroy()
    End Sub

    Public Sub CAEGroupObjects(ByVal part As CAE.BaseFemPart, ByVal objects() As TaggedObject, ByVal GroupName As String)

        Try
            Dim myGroupCollection As CaeGroupCollection
            myGroupCollection = part.CaeGroups

            Try
                Dim myGroup As CaeGroup
                myGroup = myGroupCollection.FindObject(GroupName)
                myGroup.AddEntities(objects)
            Catch ex As Exception
                myGroupCollection.CreateGroup(GroupName, objects)
            End Try
        Catch ex As Exception
            Dim msgBox As NXMessageBox = Nothing
            msgBox.Show("No Part", NXMessageBox.DialogType.Error, "There is no Part associated with the FEM")
            Exit Sub
        End Try

    End Sub

    Function TestPropType(ByRef pt As CAE.PropertyTable, ByRef p As String) As String
        Try
            pt.GetAxisPropertyValue(p)

            Return "Axis"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetBooleanPropertyValue(p)
            Return "Boolean"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetCaeSectionPropertyValue(p)
            Return "CaeSection"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetCoordinateSystemPropertyValue(p)
            Return "CoordinateSystem"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetCoordinateSystemPropertyValue(p)
            Return "CoordinateSystem"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetDoublePropertyValue(p)
            Return "Double"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try

            pt.GetFieldWrapperPropertyValue(p)
            Return "FieldWrapper"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetIntegerArrayPropertyValue(p)
            Return "IntegerArray"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetIntegerPropertyValue(p)
            Return "Integer"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetMatrixPropertyValue(p)
            Return "Matrix"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetNamedPropertyTableArrayPropertyValue(p)
            Return "NamedPropertyTableArray"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetNamedPropertyTablePropertyValue(p)
            Return "NamedPropertyTable"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetPhysicalMaterialPropertyValue(p)
            Return "PhysicalMaterial"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetPointPropertyValue(p)
            Return "Point"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetReferencePropertyValue(p)
            Return "Reference"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try

            pt.GetScalarArrayPropertyValue(p)
            Return "ScalarArray"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            'pt.GetScalarFieldPropertyValue(p)
            '  Return "ScalarField"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetScalarFieldWrapperPropertyValue(p)
            Return "ScalarFieldWrapper"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try

            pt.GetScalarPropertyValue(p)
            Return "Scalar"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetScalarTablePropertyValue(p)
            Return "ScalarTable"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetStringPropertyValue(p)
            Return "String"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetTextPropertyValue(p)
            Return "Text"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetVectorFieldWrapperPropertyValue(p)
            Return "VectorFieldWrapper"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try
        Try
            pt.GetVectorPropertyValue(p)
            Return "Vector"

        Catch ex As ApplicationException
            ' Ignore failures 
        End Try

        Return Nothing

    End Function

    Public Function GetUnloadOption(ByVal dummy As String) As Integer

        'Unloads the image immediately after execution within NX
        GetUnloadOption = NXOpen.Session.LibraryUnloadOption.Immediately

        '----Other unload options-------
        'Unloads the image when the NX session terminates
        'GetUnloadOption = NXOpen.Session.LibraryUnloadOption.AtTermination

        'Unloads the image explicitly, via an unload dialog
        'GetUnloadOption = NXOpen.Session.LibraryUnloadOption.Explicitly
        '-------------------------------

    End Function

End Module

