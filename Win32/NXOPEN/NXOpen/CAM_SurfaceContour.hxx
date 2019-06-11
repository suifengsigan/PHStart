#ifndef NXOpen_CAM_SURFACECONTOUR_HXX_INCLUDED
#define NXOpen_CAM_SURFACECONTOUR_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_SurfaceContour.ja
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
#include <NXOpen/CAM_MillOperation.hxx>
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
        class SurfaceContour;
    }
    namespace CAM
    {
        class MillOperation;
    }
    namespace CAM
    {
        class _SurfaceContourBuilder;
        class SurfaceContourImpl;
        /** Represents a Surface Contour operation  <br> To create or edit an instance of this class, use @link CAM::SurfaceContourBuilder CAM::SurfaceContourBuilder@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  SurfaceContour : public CAM::MillOperation
        {
            private: SurfaceContourImpl * m_surfacecontour_impl;
            private: friend class  _SurfaceContourBuilder;
            protected: SurfaceContour();
            public: ~SurfaceContour();
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