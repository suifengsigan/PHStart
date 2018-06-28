#ifndef NXOpen_ASSEMBLIES_DESIGNELEMENTBUILDER_HXX_INCLUDED
#define NXOpen_ASSEMBLIES_DESIGNELEMENTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Assemblies_DesignElementBuilder.ja
//
//  Generated by:
//     apiwrap
//
//  WARNING:
//    This file is automatically generated - do not edit by hand
//
#ifdef _MSC_VER
#pragma once
#endif

#include <NXOpen/NXDeprecation.hxx>
#include <vector>
#include <NXOpen/NXString.hxx>
#include <NXOpen/Callback.hxx>
#include <NXOpen/Assemblies_DesignElementBuilder.hxx>
#include <NXOpen/Assemblies_Partition.hxx>
#include <NXOpen/Assemblies_Subset.hxx>
#include <NXOpen/BasicEffectivityBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/ErrorList.hxx>
#include <NXOpen/FileNew.hxx>
#include <NXOpen/IAttributeSourceObjectBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_assemblies_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Assemblies
    {
        class DesignElementBuilder;
    }
    namespace Assemblies
    {
        class Partition;
    }
    namespace Assemblies
    {
        class Subset;
    }
    class BasePart;
    class BasicEffectivityBuilder;
    class Builder;
    class ErrorList;
    class FileNew;
    class IAttributeSourceObjectBuilder;
    class NXObject;
    namespace PDM
    {
        class LogicalObject;
    }
    class SelectDisplayableObjectList;
    namespace Assemblies
    {
        class _DesignElementBuilderBuilder;
        class DesignElementBuilderImpl;
        /** Represents a builder class that performs various design element operations. 
                The operation can be one of @link Assemblies::DesignElementBuilder::OperationType Assemblies::DesignElementBuilder::OperationType@endlink   <br> To create a new instance of this class, use @link CollaborativeContentManager::CreateDesignElementBuilder CollaborativeContentManager::CreateDesignElementBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        EditAction </td> <td> 
         
        Partitions </td> </tr> 

        <tr><td> 
         
        KeepOriginalDesignElement </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        LayerOption </td> <td> 
         
        Original </td> </tr> 

        <tr><td> 
         
        ReferenceSet </td> <td> 
         
        EntirePart </td> </tr> 

        <tr><td> 
         
        SaveAsAction </td> <td> 
         
        NewRevision </td> </tr> 

        </table>  

         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_ASSEMBLIESEXPORT  DesignElementBuilder : public Builder, public virtual IAttributeSourceObjectBuilder
        {
            /** Represents an operation type that can be performed on a design element */
            public: enum OperationType
            {
                OperationTypeCreate/** Creates a design element */,
                OperationTypeEdit/** Edits a design element */,
                OperationTypeSaveAs/** Save as a design element */,
                OperationTypeSave/** Saves a design element */,
                OperationTypeUndefined/** undefined */ 
            };

            /** Represents the edit action on a design element */
            public: enum EditActionType
            {
                EditActionTypeCategory/** category */ ,
                EditActionTypePartitions/** partitions */ ,
                EditActionTypeEffectivity/** effectivity */ 
            };

            /** Represents the save as action on a design element */
            public: enum SaveAsActionType
            {
                SaveAsActionTypeNewRevision/** new revision */ ,
                SaveAsActionTypeNewDesignElement/** new design element */ 
            };

            /** Represents the state of a design element */
            public: enum StateType
            {
                StateTypeShape/** Shape design element */,
                StateTypeReuse/** Reuse design element */,
                StateTypePromissory/** Promissory design element */
            };

            /** Represents the reference set of a design element */
            public: enum ReferenceSetType
            {
                ReferenceSetTypeModel/** Model */,
                ReferenceSetTypeEntirePart/** Entire part */,
                ReferenceSetTypeAsSpecified/** As specified reference set */
            };

            /** Represents the layer option of a design element */
            public: enum LayerOptionType
            {
                LayerOptionTypeOriginal/** Original layer */,
                LayerOptionTypeWork/** Work layer */,
                LayerOptionTypeAsSpecified/** As specified layer */
            };

            private: DesignElementBuilderImpl * m_designelementbuilder_impl;
            private: friend class  _DesignElementBuilderBuilder;
            protected: DesignElementBuilder();
            public: ~DesignElementBuilder();
            /**Returns  the design elements to operate upon 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectDisplayableObjectList * DesignElementsToOperate
            (
            );
            /**Returns  the file new descriptor to identify a design element 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::FileNew * FileNewDescriptor
            (
            );
            /**Returns  the state of a design element
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Assemblies::DesignElementBuilder::StateType State
            (
            );
            /**Sets  the state of a design element
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetState
            (
                NXOpen::Assemblies::DesignElementBuilder::StateType state /** state */ 
            );
            /**Returns  the number of design elements to be created. Applicable only if the operation type is set to 
                        @link DesignElementBuilder::OperationTypeCreate DesignElementBuilder::OperationTypeCreate@endlink 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: int Count
            (
            );
            /**Sets  the number of design elements to be created. Applicable only if the operation type is set to 
                        @link DesignElementBuilder::OperationTypeCreate DesignElementBuilder::OperationTypeCreate@endlink 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetCount
            (
                int count /** count */ 
            );
            /**Returns  the part to use of a reuse design element. Applicable only if the state is set to 
                        @link DesignElementBuilder::StateTypeReuse DesignElementBuilder::StateTypeReuse@endlink 
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::BasePart * PartToUse
            (
            );
            /**Sets  the part to use of a reuse design element. Applicable only if the state is set to 
                        @link DesignElementBuilder::StateTypeReuse DesignElementBuilder::StateTypeReuse@endlink 
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetPartToUse
            (
                NXOpen::BasePart * partToUse /** parttouse */ 
            );
            /**Returns  the effectivity interface of a design element 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::BasicEffectivityBuilder * Effectivity
            (
            );
            /** Gets the position of reuse design element 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void GetPosition
            (
                NXOpen::Point3d* position /** position */ ,
                NXOpen::Matrix3x3* orientation /** orientation */ 
            );
            /** Sets the position of reuse design element 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetPosition
            (
                const NXOpen::Point3d & position /** position */ ,
                const NXOpen::Matrix3x3 & orientation /** orientation */ 
            );
            /**Returns  the reference set of a design element 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Assemblies::DesignElementBuilder::ReferenceSetType ReferenceSet
            (
            );
            /**Sets  the reference set of a design element 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetReferenceSet
            (
                NXOpen::Assemblies::DesignElementBuilder::ReferenceSetType referenceSet /** referenceset */ 
            );
            /**Returns  the reference set name of a design element. Applicable only if the reference set is
                        set to @link DesignElementBuilder::ReferenceSetTypeAsSpecified DesignElementBuilder::ReferenceSetTypeAsSpecified@endlink 
                     
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString ReferenceSetName
            (
            );
            /**Sets  the reference set name of a design element. Applicable only if the reference set is
                        set to @link DesignElementBuilder::ReferenceSetTypeAsSpecified DesignElementBuilder::ReferenceSetTypeAsSpecified@endlink 
                     
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetReferenceSetName
            (
                const NXString & referenceSetName /** referencesetname */ 
            );
            /**Sets  the reference set name of a design element. Applicable only if the reference set is
                        set to @link DesignElementBuilder::ReferenceSetTypeAsSpecified DesignElementBuilder::ReferenceSetTypeAsSpecified@endlink 
                     
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            void SetReferenceSetName
            (
                const char * referenceSetName /** referencesetname */ 
            );
            /**Returns  the layer option of a design element 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Assemblies::DesignElementBuilder::LayerOptionType LayerOption
            (
            );
            /**Sets  the layer option of a design element 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetLayerOption
            (
                NXOpen::Assemblies::DesignElementBuilder::LayerOptionType layerOption /** layeroption */ 
            );
            /**Returns  the layer value of a design element. Applicable only if the layer option is set to 
                        @link DesignElementBuilder::LayerOptionTypeAsSpecified DesignElementBuilder::LayerOptionTypeAsSpecified@endlink 
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: int Layer
            (
            );
            /**Sets  the layer value of a design element. Applicable only if the layer option is set to 
                        @link DesignElementBuilder::LayerOptionTypeAsSpecified DesignElementBuilder::LayerOptionTypeAsSpecified@endlink 
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetLayer
            (
                int layer /** layer */ 
            );
            /** Get the partitions to which the design elements will be added.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void GetAddPartitions
            (
                std::vector<NXOpen::Assemblies::Partition *> & partitions /** partitions */ 
            );
            /** Specify partitions to which the design elements will be added.  The design elements
                        will remain a member of any partitions to which they already belongs. The partitions
                        to which the design elements will be added accumulate if this method is called more
                        than once.  If both @link Assemblies::DesignElementBuilder::AddToPartitions Assemblies::DesignElementBuilder::AddToPartitions@endlink 
                        and @link Assemblies::DesignElementBuilder::RemoveFromPartitions Assemblies::DesignElementBuilder::RemoveFromPartitions@endlink  are called
                        with the same partition then the design elements will be added or removed from that partition
                        depending upon which was the last method called.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void AddToPartitions
            (
                const std::vector<NXOpen::Assemblies::Partition *> & partitions /** partitions */ 
            );
            /** Get the partitions from which the design elements will be removed.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void GetRemovePartitions
            (
                std::vector<NXOpen::Assemblies::Partition *> & partitions /** partitions */ 
            );
            /** Specify partitions from which the design elements will be removed. The partitions
                        from which the design elements will be removed accumulate if this method is called more
                        than once.  If both @link Assemblies::DesignElementBuilder::AddToPartitions Assemblies::DesignElementBuilder::AddToPartitions@endlink 
                        and @link Assemblies::DesignElementBuilder::RemoveFromPartitions Assemblies::DesignElementBuilder::RemoveFromPartitions@endlink  are called
                        with the same partition then the design elements will be added or removed from that partition
                        depending upon which was the last method called.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void RemoveFromPartitions
            (
                const std::vector<NXOpen::Assemblies::Partition *> & partitions /** partitions */ 
            );
            /**Returns  the edit action type on a design element 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Assemblies::DesignElementBuilder::EditActionType EditAction
            (
            );
            /**Sets  the edit action type on a design element 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetEditAction
            (
                NXOpen::Assemblies::DesignElementBuilder::EditActionType actionType /** actiontype */ 
            );
            /**Returns  the save as action type of a design element 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Assemblies::DesignElementBuilder::SaveAsActionType SaveAsAction
            (
            );
            /**Sets  the save as action type of a design element 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetSaveAsAction
            (
                NXOpen::Assemblies::DesignElementBuilder::SaveAsActionType actionType /** actiontype */ 
            );
            /**Returns  the option determines whether to keep the original design element in the subset during save as
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool KeepOriginalDesignElement
            (
            );
            /**Sets  the option determines whether to keep the original design element in the subset during save as
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetKeepOriginalDesignElement
            (
                bool valueType /** valuetype */ 
            );
            /** Creates the pre-creation objects for the design elements 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void CreateLogicalObjects
            (
                std::vector<NXOpen::PDM::LogicalObject *> & logicalObjects /** logicalobjects */ 
            );
            /**Returns  the owning subset instance
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Assemblies::Subset * OwningSubsetInstance
            (
            );
            /**Sets  the owning subset instance
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetOwningSubsetInstance
            (
                NXOpen::Assemblies::Subset * subsetInstance /** subsetinstance */ 
            );
            /** Returns design element operation failures  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::ErrorList * GetOperationFailures
            (
            );
            /**  Auto assigns the attributes for a given array of objects and returns an array of objects that failed to auto assign.
                @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: virtual NXOpen::ErrorList * AutoAssignAttributes
            (
                const std::vector<NXOpen::NXObject *> & objects /** objects */ 
            );
        };
    }
}

#ifdef _MSC_VER
#pragma warning(pop)
#endif
#ifdef __GNUC__
#ifndef NX_NO_GCC_DEPRECATION_WARNINGS
#pragma GCC diagnostic warning "-Wdeprecated-declarations"
#endif
#endif

#undef EXPORTLIBRARY
#endif
