#ifndef NXOpen_ANNOTATIONS_OFFSETCENTERPOINT_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_OFFSETCENTERPOINT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_OffsetCenterPoint.ja
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
#include <NXOpen/Annotations_DraftingAid.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class OffsetCenterPoint;
    }
    namespace Annotations
    {
        class DraftingAid;
    }
    namespace Annotations
    {
        class _OffsetCenterPointBuilder;
        class OffsetCenterPointImpl;
        /** Represents a offset center point  <br> To create or edit an instance of this class, use @link Annotations::OffsetCenterPointBuilder Annotations::OffsetCenterPointBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  OffsetCenterPoint : public Annotations::DraftingAid
        {
            private: OffsetCenterPointImpl * m_offsetcenterpoint_impl;
            private: friend class  _OffsetCenterPointBuilder;
            protected: OffsetCenterPoint();
            public: ~OffsetCenterPoint();
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
