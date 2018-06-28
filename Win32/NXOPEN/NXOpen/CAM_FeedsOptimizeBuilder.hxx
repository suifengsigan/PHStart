#ifndef NXOpen_CAM_FEEDSOPTIMIZEBUILDER_HXX_INCLUDED
#define NXOpen_CAM_FEEDSOPTIMIZEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_FeedsOptimizeBuilder.ja
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
#include <NXOpen/libnxopencpp_cam_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAM
    {
        class FeedsOptimizeBuilder;
    }
    class Builder;
    namespace CAM
    {
        class FeedsOptimizationData;
    }
    namespace CAM
    {
        class _FeedsOptimizeBuilderBuilder;
        class FeedsOptimizeBuilderImpl;
        /**
            Represents a @link CAM::FeedsOptimizeBuilder CAM::FeedsOptimizeBuilder@endlink 
            a "commit" of this object will perform the Feed Rate Optimization.
             <br> To create a new instance of this class, use @link CAM::CAMSetup::CreateFeedsOptimizeBuilder CAM::CAMSetup::CreateFeedsOptimizeBuilder@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  FeedsOptimizeBuilder : public Builder
        {
            private: FeedsOptimizeBuilderImpl * m_feedsoptimizebuilder_impl;
            private: friend class  _FeedsOptimizeBuilderBuilder;
            protected: FeedsOptimizeBuilder();
            public: ~FeedsOptimizeBuilder();
            /**Returns  the feeds optimization data 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::FeedsOptimizationData * FeedsOptimizationData
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
