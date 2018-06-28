#ifndef NXOpen_TOOLING_VALIDCHECKBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_VALIDCHECKBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_ValidCheckBuilder.ja
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
#include <NXOpen/Builder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/Tooling_ValidCheckBuilder.hxx>
#include <NXOpen/libnxopencpp_tooling_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Tooling
    {
        class ValidCheckBuilder;
    }
    class Builder;
    class SelectNXObjectList;
    namespace Tooling
    {
        class _ValidCheckBuilderBuilder;
        class ValidCheckBuilderImpl;
        /** This is the JA builder for static interference check  <br> To create a new instance of this class, use @link Tooling::ValidCheckCollection::CreateValidCheckBuilder Tooling::ValidCheckCollection::CreateValidCheckBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        AnalyMode </td> <td> 
         
        SolidBased </td> </tr> 

        <tr><td> 
         
        BlankBody </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CheckType </td> <td> 
         
        TrueBody </td> </tr> 

        <tr><td> 
         
        ClrZone </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ObjSelectType </td> <td> 
         
        Component </td> </tr> 

        <tr><td> 
         
        ScrewCheck </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        SubAssembly </td> <td> 
         
        0 </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  ValidCheckBuilder : public Builder
        {
            /** the selection type, including component and solid body */
            public: enum SelMode
            {
                SelModeComponent/** Selection type will be set to component */,
                SelModeBody/** Selection type will be set to body */
            };

            /** the analysis mode, including solid-based mode and facet-based mode */
            public: enum AnalysisMode
            {
                AnalysisModeSolidBased/** Solid body will be used to do checking */,
                AnalysisModeFacetBased/** Facet body will be used to do checking */
            };

            /** the checking type, including true body, false body or both */
            public: enum CheckingType
            {
                CheckingTypeTrueBody/** True body will be used to do checking */,
                CheckingTypeFalseBody/** False body will be used to do checking */,
                CheckingTypeBoth/** Both types of body will be used to do checking */
            };

            private: ValidCheckBuilderImpl * m_validcheckbuilder_impl;
            private: friend class  _ValidCheckBuilderBuilder;
            protected: ValidCheckBuilder();
            public: ~ValidCheckBuilder();
            /**Returns  the target object selection list 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * ObjSelectTarget
            (
            );
            /**Returns  the tool object selection list 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * ObjSelectTool
            (
            );
            /**Returns  the object selection type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::ValidCheckBuilder::SelMode ObjSelectType
            (
            );
            /**Sets  the object selection type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetObjSelectType
            (
                NXOpen::Tooling::ValidCheckBuilder::SelMode objSelectType /** Indicates selection type */
            );
            /** Adds standard part into user defined set 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void StdAddUserSets
            (
            );
            /** Loads standard attribute list 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void StdLoadFile
            (
            );
            /**Returns  the analysis mode 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::ValidCheckBuilder::AnalysisMode AnalyMode
            (
            );
            /**Sets  the analysis mode 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetAnalyMode
            (
                NXOpen::Tooling::ValidCheckBuilder::AnalysisMode analyMode /** Indicates analysis mode to do checking */
            );
            /**Returns  the check type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::ValidCheckBuilder::CheckingType CheckType
            (
            );
            /**Sets  the check type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetCheckType
            (
                NXOpen::Tooling::ValidCheckBuilder::CheckingType checkType /** Indicates checking type */
            );
            /**Returns  the sub-assembly, to specify if sub-assembly needs to be searched 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool SubAssembly
            (
            );
            /**Sets  the sub-assembly, to specify if sub-assembly needs to be searched 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetSubAssembly
            (
                bool subAssembly /** Indicates if sub-assembly is included while doing checking */
            );
            /**Returns  the blank body, to specify if blanked bodies in a component needs to be searched 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool BlankBody
            (
            );
            /**Sets  the blank body, to specify if blanked bodies in a component needs to be searched 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetBlankBody
            (
                bool blankBody /** Indicates if blanked body is included while doing checking */
            );
            /**Returns  the screw check, to specify if screw check algorithm needs to be used 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool ScrewCheck
            (
            );
            /**Sets  the screw check, to specify if screw check algorithm needs to be used 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetScrewCheck
            (
                bool screwCheck /** Indicates if screw checking algorithm is used while doing checking */
            );
            /**Returns  the clearance set name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString ClrSetName
            (
            );
            /**Sets  the clearance set name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetClrSetName
            (
                const NXString & clrSetName /** Specifies a user defined clearance set name */
            );
            /**Sets  the clearance set name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            void SetClrSetName
            (
                const char * clrSetName /** Specifies a user defined clearance set name */
            );
            /**Returns  the clearance zone 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double ClrZone
            (
            );
            /**Sets  the clearance zone 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetClrZone
            (
                double clrZone /** Specifies clearance zone value */
            );
            /**Returns  the box list selected sets name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString SelectDatasetsName
            (
            );
            /**Sets  the box list selected sets name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetSelectDatasetsName
            (
                const NXString & selDataSetName /** Specifies a user selected data set name */
            );
            /**Sets  the box list selected sets name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            void SetSelectDatasetsName
            (
                const char * selDataSetName /** Specifies a user selected data set name */
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
