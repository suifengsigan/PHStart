#ifndef NXOpen_ANNOTATIONS_CIRCLECENTERLINESETTINGSBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_CIRCLECENTERLINESETTINGSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_CircleCenterlineSettingsBuilder.ja
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
#include <NXOpen/Annotations_CenterlineSettingsBuilder.hxx>
#include <NXOpen/Annotations_CircleCenterlineSettingsBuilder.hxx>
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
        class CircleCenterlineSettingsBuilder;
    }
    namespace Annotations
    {
        class CenterlineSettingsBuilder;
    }
    namespace Annotations
    {
        class _CircleCenterlineSettingsBuilderBuilder;
        class CircleCenterlineSettingsBuilderImpl;
        /** Represents a Builder for Circle Centerline Settings 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  CircleCenterlineSettingsBuilder : public Annotations::CenterlineSettingsBuilder
        {
            private: CircleCenterlineSettingsBuilderImpl * m_circlecenterlinesettingsbuilder_impl;
            private: friend class  _CircleCenterlineSettingsBuilderBuilder;
            protected: CircleCenterlineSettingsBuilder();
            public: ~CircleCenterlineSettingsBuilder();
            /**Returns  the Center Cross Size parameter 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double Size
            (
            );
            /**Sets  the Center Cross Size parameter 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSize
            (
                double size /** size */ 
            );
            /**Returns  the extension parameter 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double Extension
            (
            );
            /**Sets  the extension parameter 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetExtension
            (
                double extension /** extension */ 
            );
            /**Returns  the individual extension distance On/Off parameter 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool IndividualDistance
            (
            );
            /**Sets  the individual extension distance On/Off parameter 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetIndividualDistance
            (
                bool individualDistance /** individualdistance */ 
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
