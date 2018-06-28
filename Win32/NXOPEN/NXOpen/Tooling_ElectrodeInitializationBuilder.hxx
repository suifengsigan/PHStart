#ifndef NXOpen_TOOLING_ELECTRODEINITIALIZATIONBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_ELECTRODEINITIALIZATIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_ElectrodeInitializationBuilder.ja
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
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/Tooling_ElectrodeInitializationBuilder.hxx>
#include <NXOpen/ugmath.hxx>
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
        class ElectrodeInitializationBuilder;
    }
    class Builder;
    class SelectBody;
    class SelectFace;
    class TaggedObject;
    namespace Tooling
    {
        class _ElectrodeInitializationBuilderBuilder;
        class ElectrodeInitializationBuilderImpl;
        /** Electrode initialize project builder to creates an electrode design assembly.  <br> To create a new instance of this class, use @link Tooling::ElectrodeDesignCollection::CreateProjectBuilder Tooling::ElectrodeDesignCollection::CreateProjectBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Rename </td> <td> 
         
        0 </td> </tr> 

        </table>  

         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  ElectrodeInitializationBuilder : public Builder
        {
            private: ElectrodeInitializationBuilderImpl * m_electrodeinitializationbuilder_impl;
            private: friend class  _ElectrodeInitializationBuilderBuilder;
            protected: ElectrodeInitializationBuilder();
            public: ~ElectrodeInitializationBuilder();
            /**Returns  the utility to get the workpiece to create an electrode design project. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_electrode_wizard ("NX Electrode Wizard") */
            public: NXOpen::SelectBody * Workpiece
            (
            );
            /**Returns  the path browser. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_electrode_wizard ("NX Electrode Wizard") */
            public: NXString PathBrowser
            (
            );
            /**Sets  the path browser. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_electrode_wizard ("NX Electrode Wizard") */
            public: void SetPathBrowser
            (
                const NXString & foldername /** foldername */ 
            );
            /**Sets  the path browser. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_electrode_wizard ("NX Electrode Wizard") */
            void SetPathBrowser
            (
                const char * foldername /** foldername */ 
            );
            /**Returns  the input name as project name. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_electrode_wizard ("NX Electrode Wizard") */
            public: NXString InputName
            (
            );
            /**Sets  the input name as project name. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_electrode_wizard ("NX Electrode Wizard") */
            public: void SetInputName
            (
                const NXString & inputName /** inputname */ 
            );
            /**Sets  the input name as project name. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_electrode_wizard ("NX Electrode Wizard") */
            void SetInputName
            (
                const char * inputName /** inputname */ 
            );
            /**Returns  the face whose center will be the origin of the machine set csys. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_electrode_wizard ("NX Electrode Wizard") */
            public: NXOpen::SelectFace * Face
            (
            );
            /**Returns  the component name can be defined in the part name management. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_electrode_wizard ("NX Electrode Wizard") */
            public: bool Rename
            (
            );
            /**Sets  the component name can be defined in the part name management. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_electrode_wizard ("NX Electrode Wizard") */
            public: void SetRename
            (
                bool rename /** rename */ 
            );
            /**Returns  the machine set part which is the working part. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_electrode_wizard ("NX Electrode Wizard") */
            public: NXOpen::TaggedObject * CurrentMset
            (
            );
            /**Sets  the machine set part which is the working part. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_electrode_wizard ("NX Electrode Wizard") */
            public: void SetCurrentMset
            (
                NXOpen::TaggedObject * mset /** machine set part */
            );
            /** Sets csys matrix and origin. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_electrode_wizard ("NX Electrode Wizard") */
            public: void SetMsetCsysMatrixOrigin
            (
                const NXOpen::Matrix3x3 & matrix /** csys matrix */,
                const NXOpen::Point3d & origin /** csys origin */
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
