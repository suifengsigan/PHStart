#ifndef NXOpen_CAM_BLADESTARTPOINT_HXX_INCLUDED
#define NXOpen_CAM_BLADESTARTPOINT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_BladeStartPoint.ja
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
#include <NXOpen/CAM_BladeStartPoint.hxx>
#include <NXOpen/TaggedObject.hxx>
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
        class BladeStartPoint;
    }
    namespace CAM
    {
        class _BladeStartPointBuilder;
        class BladeStartPointImpl;
        /** Represents BladeStartPoint Builder 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  BladeStartPoint : public TaggedObject
        {
            /** Available types for Blade Start Point  
             <br>  @deprecated Deprecated in NX7.5.0.  <br>  
            */
            public:  NX_DEPRECATED("Deprecated in NX7.5.0") enum Types
            {
                TypesLeadingEdge/**Leading Edge*/,
                TypesTrailingEdge/**Trailing Edge*/
            };

            private: BladeStartPointImpl * m_bladestartpoint_impl;
            private: friend class  _BladeStartPointBuilder;
            protected: BladeStartPoint();
            public: ~BladeStartPoint();
            /**Returns  the Type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::BladeStartPoint::Types Type
            (
            );
            /**Sets  the Type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetType
            (
                NXOpen::CAM::BladeStartPoint::Types type /** the Start Point Type */
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
