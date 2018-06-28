#ifndef NXOpen_CAM_THREADEDHOLESET_HXX_INCLUDED
#define NXOpen_CAM_THREADEDHOLESET_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_ThreadedHoleSet.ja
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
#include <NXOpen/CAM_HoleBossSet.hxx>
#include <NXOpen/CAM_ThreadedHoleSet.hxx>
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
        class ThreadedHoleSet;
    }
    namespace CAM
    {
        class HoleBossSet;
    }
    namespace CAM
    {
        class InferredDouble;
    }
    namespace CAM
    {
        class _ThreadedHoleSetBuilder;
        class ThreadedHoleSetImpl;
        /** Represents a Cut Area Geometry builder  <br> To create a new instance of this class, use @link CAM::HoleBossGeom::CreateThreadedHoleBuilder CAM::HoleBossGeom::CreateThreadedHoleBuilder@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  ThreadedHoleSet : public CAM::HoleBossSet
        {
            private: ThreadedHoleSetImpl * m_threadedholeset_impl;
            private: friend class  _ThreadedHoleSetBuilder;
            protected: ThreadedHoleSet();
            public: ~ThreadedHoleSet();
            /**Returns  the Tap Drill Size 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double TapDrillSize
            (
            );
            /**Sets  the Tap Drill Size 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetTapDrillSize
            (
                double doubleValue /** doublevalue */ 
            );
            /**Returns  the Radial Engage 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString RadialEngage
            (
            );
            /**Sets  the Radial Engage 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetRadialEngage
            (
                const NXString & threadHoleValue /** the Radial Engage */
            );
            /**Sets  the Radial Engage 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            void SetRadialEngage
            (
                const char * threadHoleValue /** the Radial Engage */
            );
            /** The Standard  @return  the Standard 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString GetStandard
            (
            );
            /** The Standard 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetStandard
            (
                const NXString & standard /** the Standard   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** The Standard 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            void SetStandard
            (
                const char * standard /** the Standard   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /**Returns  the Tap Drill Size builder 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InferredDouble * TapDrillSizeBuilder
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
