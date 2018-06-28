#ifndef NXOpen_CAM_OBJECTSFEEDSBUILDER_HXX_INCLUDED
#define NXOpen_CAM_OBJECTSFEEDSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_ObjectsFeedsBuilder.ja
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
        class ObjectsFeedsBuilder;
    }
    class Builder;
    namespace CAM
    {
        class FeedsBuilder;
    }
    namespace CAM
    {
        class _ObjectsFeedsBuilderBuilder;
        class ObjectsFeedsBuilderImpl;
        /** Represents an Object Action Feeds Builder  <br> To create a new instance of this class, use @link CAM::CAMSetup::CreateFeedsBuilder CAM::CAMSetup::CreateFeedsBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  ObjectsFeedsBuilder : public Builder
        {
            private: ObjectsFeedsBuilderImpl * m_objectsfeedsbuilder_impl;
            private: friend class  _ObjectsFeedsBuilderBuilder;
            protected: ObjectsFeedsBuilder();
            public: ~ObjectsFeedsBuilder();
            /**Returns  the feed builder 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::FeedsBuilder * FeedsBuilder
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
