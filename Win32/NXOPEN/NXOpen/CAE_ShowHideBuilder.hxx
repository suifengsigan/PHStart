#ifndef NXOpen_CAE_SHOWHIDEBUILDER_HXX_INCLUDED
#define NXOpen_CAE_SHOWHIDEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ShowHideBuilder.ja
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
#include <NXOpen/CAE_ShowHideBuilder.hxx>
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
        class ShowHideBuilder;
    }
    class Builder;
    class SelectObjectList;
    namespace CAE
    {
        class _ShowHideBuilderBuilder;
        class ShowHideBuilderImpl;
        /**
            Represents a @link CAE::ShowHideBuilder CAE::ShowHideBuilder@endlink 
             <br> To create a new instance of this class, use @link CAE::ShowHideManager::CreateShowHideBuilder CAE::ShowHideManager::CreateShowHideBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  ShowHideBuilder : public Builder
        {
            private: ShowHideBuilderImpl * m_showhidebuilder_impl;
            private: friend class  _ShowHideBuilderBuilder;
            protected: ShowHideBuilder();
            public: ~ShowHideBuilder();
            /**Returns  the selection 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectObjectList * Selection
            (
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
