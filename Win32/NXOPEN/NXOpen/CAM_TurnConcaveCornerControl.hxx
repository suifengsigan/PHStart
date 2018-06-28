#ifndef NXOpen_CAM_TURNCONCAVECORNERCONTROL_HXX_INCLUDED
#define NXOpen_CAM_TURNCONCAVECORNERCONTROL_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_TurnConcaveCornerControl.ja
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
#include <NXOpen/CAM_TurnConcaveCornerControl.hxx>
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
        class TurnConcaveCornerControl;
    }
    namespace CAM
    {
        class _TurnConcaveCornerControlBuilder;
        class TurnConcaveCornerControlImpl;
        /** Represents a concave corner ja 
         <br>  Created in NX6.0.2.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  TurnConcaveCornerControl : public TaggedObject
        {
            /** the Concave Corner Control types 
             <br>  Created in NX6.0.2.  <br>  
            */
            public: enum Types
            {
                TypesExtendTangents/** Concave Corner Control Type is Extend. */,
                TypesRound/** Concave Corner Control Type is Round. */
            };

            /** the Concave Corner Control radius options 
             <br>  Created in NX6.0.2.  <br>  
            */
            public: enum RadiusOptions
            {
                RadiusOptionsSpecify/** Concave Corner Control radius option is Specify. */,
                RadiusOptionsToolRadius/** Concave Corner Control radius option is Tool Radius. */,
                RadiusOptionsAddToToolRadius/** Concave Corner Control radius option is Add to Tool Radius. */
            };

            private: TurnConcaveCornerControlImpl * m_turnconcavecornercontrol_impl;
            private: friend class  _TurnConcaveCornerControlBuilder;
            protected: TurnConcaveCornerControl();
            public: ~TurnConcaveCornerControl();
            /**Returns  the Concave Corner Control type 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::TurnConcaveCornerControl::Types Type
            (
            );
            /**Sets  the Concave Corner Control type 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetType
            (
                NXOpen::CAM::TurnConcaveCornerControl::Types cornerType /** the Concave Corner Control type */
            );
            /**Returns  the Concave Corner Control radius option 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::TurnConcaveCornerControl::RadiusOptions RadiusOption
            (
            );
            /**Sets  the Concave Corner Control radius option 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetRadiusOption
            (
                NXOpen::CAM::TurnConcaveCornerControl::RadiusOptions radiusOption /** the Concave Corner Control radius option */
            );
            /**Returns  the Concave Corner Control radius 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : None */
            public: double Radius
            (
            );
            /**Sets  the Concave Corner Control radius 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetRadius
            (
                double radius /** the Concave Corner Control radius */
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
