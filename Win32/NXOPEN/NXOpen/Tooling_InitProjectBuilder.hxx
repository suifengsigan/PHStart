#ifndef NXOpen_TOOLING_INITPROJECTBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_INITPROJECTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_InitProjectBuilder.ja
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
#include <NXOpen/Tooling_InitProjectBuilder.hxx>
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
        class InitProjectBuilder;
    }
    class Builder;
    class SelectBodyList;
    namespace Tooling
    {
        class _InitProjectBuilderBuilder;
        class InitProjectBuilderImpl;
        /** Mold Wizard initialize project builder  <br> To create a new instance of this class, use @link Tooling::InitProjectCollection::CreateBuilder Tooling::InitProjectCollection::CreateBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Configuration </td> <td> 
         
        Default </td> </tr> 

        <tr><td> 
         
        Material </td> <td> 
         
        None </td> </tr> 

        <tr><td> 
         
        Rename </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        Unit </td> <td> 
         
        Millimeter </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  InitProjectBuilder : public Builder
        {
            /** the material type includes None and Nylon */
            public: enum MaterialId
            {
                MaterialIdNone/** None material is set */,
                MaterialIdNylon/** Nylon material type */
            };

            /** the configuration type includes default and orig */
            public: enum ConfigurationId
            {
                ConfigurationIdDefault/** Default configuration */,
                ConfigurationIdOrig/** Original configuration */
            };

            /** the unit type includes metric and inch project type */
            public: enum UnitId
            {
                UnitIdMillimeter/** metric project */,
                UnitIdInch/** english project */
            };

            private: InitProjectBuilderImpl * m_initprojectbuilder_impl;
            private: friend class  _InitProjectBuilderBuilder;
            protected: InitProjectBuilder();
            public: ~InitProjectBuilder();
            /**Returns  the body will be used as product to create Mold Wizard project 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectBodyList * BodySelect
            (
            );
            /**Returns  the project path access functions 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString PathName
            (
            );
            /**Sets  the project path access functions 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetPathName
            (
                const NXString & pathName /** pathname */ 
            );
            /**Sets  the project path access functions 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetPathName
            (
                const char * pathName /** pathname */ 
            );
            /**Returns  the project name access functions 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString ProjectName
            (
            );
            /**Sets  the project name access functions 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetProjectName
            (
                const NXString & projectName /** projectname */ 
            );
            /**Sets  the project name access functions 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetProjectName
            (
                const char * projectName /** projectname */ 
            );
            /**Returns  the material access functions 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::InitProjectBuilder::MaterialId Material
            (
            );
            /**Sets  the material access functions 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetMaterial
            (
                NXOpen::Tooling::InitProjectBuilder::MaterialId material /** material */ 
            );
            /**Returns  the shrinkage access functions
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Shrinkage
            (
            );
            /**Sets  the shrinkage access functions
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetShrinkage
            (
                const NXString & shrinkage /** shrinkage */ 
            );
            /**Sets  the shrinkage access functions
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetShrinkage
            (
                const char * shrinkage /** shrinkage */ 
            );
            /**Returns  the configuration access functions
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::InitProjectBuilder::ConfigurationId Configuration
            (
            );
            /**Sets  the configuration access functions
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetConfiguration
            (
                NXOpen::Tooling::InitProjectBuilder::ConfigurationId configuration /** configuration */ 
            );
            /**Returns  the project unit access functions 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::InitProjectBuilder::UnitId Unit
            (
            );
            /**Sets  the project unit access functions 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetUnit
            (
                NXOpen::Tooling::InitProjectBuilder::UnitId unit /** unit */ 
            );
            /**Returns  the rename dialog allows users to define rename rules 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool Rename
            (
            );
            /**Sets  the rename dialog allows users to define rename rules 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetRename
            (
                bool rename /** rename */ 
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
