#ifndef NXOpen_MOTION_VECTORFORCEBUILDER_HXX_INCLUDED
#define NXOpen_MOTION_VECTORFORCEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Motion_VectorForceBuilder.ja
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
#include <NXOpen/Motion_MotionBuilder.hxx>
#include <NXOpen/Motion_VObject.hxx>
#include <NXOpen/Motion_VectorForceBuilder.hxx>
#include <NXOpen/libnxopencpp_motion_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Motion
    {
        class VectorForceBuilder;
    }
    namespace Motion
    {
        class MotionBuilder;
    }
    namespace Motion
    {
        class VObject;
    }
    namespace Motion
    {
        class _VectorForceBuilderBuilder;
        class VectorForceBuilderImpl;
        /**
            Represents a @link Motion::VectorForceBuilder Motion::VectorForceBuilder@endlink 
             <br> To create a new instance of this class, use @link Motion::VectorForceCollection::CreateVectorForceBuilder Motion::VectorForceCollection::CreateVectorForceBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_MOTIONEXPORT  VectorForceBuilder : public Motion::MotionBuilder
        {
            private: VectorForceBuilderImpl * m_vectorforcebuilder_impl;
            private: friend class  _VectorForceBuilderBuilder;
            protected: VectorForceBuilder();
            public: ~VectorForceBuilder();
            /**Returns  the vobject data 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Motion::VObject * VObject
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
