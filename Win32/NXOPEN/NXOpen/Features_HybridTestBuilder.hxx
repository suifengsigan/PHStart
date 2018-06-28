#ifndef NXOpen_FEATURES_HYBRIDTESTBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_HYBRIDTESTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_HybridTestBuilder.ja
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
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_HybridTestBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/libnxopendebugsessioncpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        class HybridTestBuilder;
    }
    namespace Features
    {
        class FeatureBuilder;
    }
    class SelectNXObjectList;
    namespace Features
    {
        class _HybridTestBuilderBuilder;
        class HybridTestBuilderImpl;
        /**
            Represents a Features.HybridTestBuilder builder
            
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENDEBUGSESSIONCPPEXPORT  HybridTestBuilder : public Features::FeatureBuilder
        {
            private: HybridTestBuilderImpl * m_hybridtestbuilder_impl;
            private: friend class  _HybridTestBuilderBuilder;
            protected: HybridTestBuilder();
            public: ~HybridTestBuilder();
            /**Returns  the select object 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * SelectedObjects
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
