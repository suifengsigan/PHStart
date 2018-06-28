#ifndef NXOpen_CAM_MANUALFEATUREBUILDER_HXX_INCLUDED
#define NXOpen_CAM_MANUALFEATUREBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_ManualFeatureBuilder.ja
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
#include <NXOpen/CAM_ManualFeatureBuilder.hxx>
#include <NXOpen/ScCollector.hxx>
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
        class ManualFeatureBuilder;
    }
    class Builder;
    class ScCollector;
    namespace CAM
    {
        class _ManualFeatureBuilderBuilder;
        class ManualFeatureBuilderImpl;
        /**
            Represents a @link CAM::ManualFeatureBuilder CAM::ManualFeatureBuilder@endlink 
             <br> To obtain an instance of this class use @link CAM::FeatureRecognitionBuilder CAM::FeatureRecognitionBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  ManualFeatureBuilder : public Builder
        {
            private: ManualFeatureBuilderImpl * m_manualfeaturebuilder_impl;
            private: friend class  _ManualFeatureBuilderBuilder;
            protected: ManualFeatureBuilder();
            public: ~ManualFeatureBuilder();
            /**Returns  the manual feature name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Name
            (
            );
            /**Sets  the manual feature name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetName
            (
                const NXString & name /** name */ 
            );
            /**Sets  the manual feature name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetName
            (
                const char * name /** name */ 
            );
            /**Returns  the manual feature floor faces 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::ScCollector * FloorFaces
            (
            );
            /**Sets  the manual feature floor faces 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFloorFaces
            (
                NXOpen::ScCollector * floorFaces /** floor faces */ 
            );
            /**Returns  the manual feature wall faces 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::ScCollector * WallFaces
            (
            );
            /**Sets  the manual feature wall faces 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetWallFaces
            (
                NXOpen::ScCollector * wallFaces /** wall faces */ 
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
