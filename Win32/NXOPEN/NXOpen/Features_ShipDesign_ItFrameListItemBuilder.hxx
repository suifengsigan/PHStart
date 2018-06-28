#ifndef NXOpen_FEATURES_SHIPDESIGN_ITFRAMELISTITEMBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_ITFRAMELISTITEMBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_ItFrameListItemBuilder.ja
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
#include <NXOpen/Features_ShipDesign_ItFrameListItemBuilder.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        namespace ShipDesign
        {
            class ItFrameListItemBuilder;
        }
    }
    class NXObject;
    namespace Features
    {
        namespace ShipDesign
        {
            class _ItFrameListItemBuilderBuilder;
            class ItFrameListItemBuilderImpl;
            /**
                    Represents a @link Features::ShipDesign::ItFrameListItemBuilder Features::ShipDesign::ItFrameListItemBuilder@endlink 
                    
             <br>  Created in NX8.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  ItFrameListItemBuilder : public NXObject
            {
                private: ItFrameListItemBuilderImpl * m_itframelistitembuilder_impl;
                private: friend class  _ItFrameListItemBuilderBuilder;
                protected: ItFrameListItemBuilder();
                public: ~ItFrameListItemBuilder();
                /**Returns  the start reference transverse frame name. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXString StartFrameName
                (
                );
                /**Sets  the start reference transverse frame name. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") OR nx_ship_basic ("Ship Basic Design") OR nx_ship_detail ("Ship Detail Design") */
                public: void SetStartFrameName
                (
                    const NXString & frameName /** framename */ 
                );
                /**Sets  the start reference transverse frame name. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") OR nx_ship_basic ("Ship Basic Design") OR nx_ship_detail ("Ship Detail Design") */
                void SetStartFrameName
                (
                    const char * frameName /** framename */ 
                );
                /**Returns  the end reference transverse frame name.
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXString EndFrameName
                (
                );
                /**Sets  the end reference transverse frame name.
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") OR nx_ship_basic ("Ship Basic Design") OR nx_ship_detail ("Ship Detail Design") */
                public: void SetEndFrameName
                (
                    const NXString & frameName /** framename */ 
                );
                /**Sets  the end reference transverse frame name.
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") OR nx_ship_basic ("Ship Basic Design") OR nx_ship_detail ("Ship Detail Design") */
                void SetEndFrameName
                (
                    const char * frameName /** framename */ 
                );
                /**Returns  the number of inter transverse frames. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: int NumberOfFrames
                (
                );
                /**Sets  the number of inter transverse frames. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") OR nx_ship_basic ("Ship Basic Design") OR nx_ship_detail ("Ship Detail Design") */
                public: void SetNumberOfFrames
                (
                    int nItFrames /** nitframes */ 
                );
            };
        }
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
