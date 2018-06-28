#ifndef NXOpen_CAM_LEADANGLES_HXX_INCLUDED
#define NXOpen_CAM_LEADANGLES_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_LeadAngles.ja
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
#include <NXOpen/CAM_LeadAngles.hxx>
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
        class LeadAngles;
    }
    namespace CAM
    {
        class _LeadAnglesBuilder;
        class LeadAnglesImpl;
        /** Represents a lead angles 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  LeadAngles : public TaggedObject
        {
            /** Available types for lead angle control type*/
            public: enum ControlTypes
            {
                ControlTypesSameAsLeadingToTrailing/** same as leading to trailing */,
                ControlTypesSpecify/**specify*/
            };

            private: LeadAnglesImpl * m_leadangles_impl;
            private: friend class  _LeadAnglesBuilder;
            protected: LeadAngles();
            public: ~LeadAngles();
            /**Returns  the lead angle control type 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::LeadAngles::ControlTypes ControlType
            (
            );
            /**Sets  the lead angle control type 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetControlType
            (
                NXOpen::CAM::LeadAngles::ControlTypes leadAngleType /** the lead angle control type */
            );
            /**Returns  the lead angle at leading edge 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double AtLeadingEdge
            (
            );
            /**Sets  the lead angle at leading edge 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetAtLeadingEdge
            (
                double leadAngle /** the lead angle at leading edge */
            );
            /**Returns  the lead angle at trailing edge 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double AtTrailingEdge
            (
            );
            /**Sets  the lead angle at trailing edge 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetAtTrailingEdge
            (
                double leadAngle /** the lead angle at trailing edge */
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
