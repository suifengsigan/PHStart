#ifndef NXOpen_CAE_DEPENDENTMESHLISTITEMBUILDER_HXX_INCLUDED
#define NXOpen_CAE_DEPENDENTMESHLISTITEMBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_DependentMeshListItemBuilder.ja
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
#include <NXOpen/CAE_DependentMeshListItemBuilder.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/SelectObject.hxx>
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
        class DependentMeshListItemBuilder;
    }
    class NXObject;
    class SelectObject;
    namespace CAE
    {
        class _DependentMeshListItemBuilderBuilder;
        class DependentMeshListItemBuilderImpl;
        /**
            Represents a @link CAE::DependentMeshListItemBuilder CAE::DependentMeshListItemBuilder@endlink 
             <br> To create a new instance of this class, use @link CAE::DependentMeshBuilder::CreateNewListItem CAE::DependentMeshBuilder::CreateNewListItem@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  DependentMeshListItemBuilder : public NXObject
        {
            private: DependentMeshListItemBuilderImpl * m_dependentmeshlistitembuilder_impl;
            private: friend class  _DependentMeshListItemBuilderBuilder;
            protected: DependentMeshListItemBuilder();
            public: ~DependentMeshListItemBuilder();
            /**Returns  the master edge 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::SelectObject * MasterEdge
            (
            );
            /**Returns  the target edge 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::SelectObject * TargetEdge
            (
            );
            /**Returns  the flip direction 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: bool FlipDirection
            (
            );
            /**Sets  the flip direction 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetFlipDirection
            (
                bool flipDirection /** flip direction */ 
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
