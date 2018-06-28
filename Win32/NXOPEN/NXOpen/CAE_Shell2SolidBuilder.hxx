#ifndef NXOpen_CAE_SHELL2SOLIDBUILDER_HXX_INCLUDED
#define NXOpen_CAE_SHELL2SOLIDBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_Shell2SolidBuilder.ja
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
#include <NXOpen/CAE_ElementTypeBuilder.hxx>
#include <NXOpen/CAE_Shell2SolidBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/libnxopencpp_cae_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAE
    {
        class Shell2SolidBuilder;
    }
    class Builder;
    namespace CAE
    {
        class ElementTypeBuilder;
    }
    class SelectTaggedObjectList;
    namespace CAE
    {
        class _Shell2SolidBuilderBuilder;
        class Shell2SolidBuilderImpl;
        /** Represents 3D Tet Mesh
             *  Used to create a @link CAE::Mesh3d CAE::Mesh3d@endlink 
             <br> To create a new instance of this class, use @link CAE::MeshManager::CreateShell2solidBuilder CAE::MeshManager::CreateShell2solidBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  Shell2SolidBuilder : public Builder
        {
            private: Shell2SolidBuilderImpl * m_shell2solidbuilder_impl;
            private: friend class  _Shell2SolidBuilderBuilder;
            protected: Shell2SolidBuilder();
            public: ~Shell2SolidBuilder();
            /**Returns  the selection objects 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::SelectTaggedObjectList * SelectionList
            (
            );
            /**Returns  the element type builder.  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ElementTypeBuilder * ElementType
            (
            );
            /**Returns  the mesh size variation 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: double MeshSizeVariation
            (
            );
            /**Sets  the mesh size variation 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetMeshSizeVariation
            (
                double dSizeVaration /** dsizevaration */ 
            );
            /**Returns  the mesh size variation 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: bool FillHolesOption
            (
            );
            /**Sets  the mesh size variation 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetFillHolesOption
            (
                bool fFillHoles /** ffillholes */ 
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
