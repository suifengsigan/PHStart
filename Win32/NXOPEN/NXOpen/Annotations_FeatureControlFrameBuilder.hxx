#ifndef NXOpen_ANNOTATIONS_FEATURECONTROLFRAMEBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_FEATURECONTROLFRAMEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_FeatureControlFrameBuilder.ja
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
#include <NXOpen/Annotations_FeatureControlFrameBuilder.hxx>
#include <NXOpen/Annotations_FeatureControlFrameDataBuilder.hxx>
#include <NXOpen/Annotations_LeaderBuilder.hxx>
#include <NXOpen/Annotations_OriginBuilder.hxx>
#include <NXOpen/Annotations_StyleBuilder.hxx>
#include <NXOpen/Annotations_TextWithSymbolsBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/ObjectList.hxx>
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
        class FeatureControlFrameBuilder;
    }
    namespace Annotations
    {
        class BaseFcf;
    }
    namespace Annotations
    {
        class FeatureControlFrameDataBuilder;
    }
    namespace Annotations
    {
        class FeatureControlFrameDataBuilderList;
    }
    namespace Annotations
    {
        class LeaderBuilder;
    }
    namespace Annotations
    {
        class OriginBuilder;
    }
    namespace Annotations
    {
        class StyleBuilder;
    }
    namespace Annotations
    {
        class TextWithSymbolsBuilder;
    }
    class Builder;
    namespace Annotations
    {
        class _FeatureControlFrameBuilderBuilder;
        class FeatureControlFrameBuilderImpl;
        /**
            Represents a @link Annotations::FeatureControlFrameBuilder Annotations::FeatureControlFrameBuilder@endlink 
             <br> This is an abstract class, and cannot be instantiated. <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Text.CustomSymbolScale </td> <td> 
         
        1.0 </td> </tr> 

        <tr><td> 
         
        Text.SymbolAspectRatio </td> <td> 
         
        1.0 </td> </tr> 

        <tr><td> 
         
        Text.SymbolHeight </td> <td> 
         
        25.4 (millimeters part), 1.0 (inches part) </td> </tr> 

        <tr><td> 
         
        Text.SymbolLength </td> <td> 
         
        25.4 (millimeters part), 1.0 (inches part) </td> </tr> 

        <tr><td> 
         
        Text.SymbolPreferences </td> <td> 
         
        UseCurrent </td> </tr> 

        <tr><td> 
         
        Text.SymbolScale </td> <td> 
         
        1.0 </td> </tr> 

        <tr><td> 
         
        Text.SymbolSizeMethod </td> <td> 
         
        ScaleAndAspectRatio </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  FeatureControlFrameBuilder : public Builder
        {
            /** Specifies the characteristitic of the feature control frame */
            public: enum FcfCharacteristic
            {
                FcfCharacteristicStraightness/** straightness */,
                FcfCharacteristicFlatness/** flatness */,
                FcfCharacteristicCircularity/** circularity */,
                FcfCharacteristicCylindricity/** cylindricity */,
                FcfCharacteristicProfileOfALine/** profile of a line */,
                FcfCharacteristicProfileOfASurface/** profile of a sufrace */,
                FcfCharacteristicAngularity/** angularity */,
                FcfCharacteristicPerpendicularity/** perpendicularity */,
                FcfCharacteristicParallelism/** parallelism */,
                FcfCharacteristicPosition/** position */,
                FcfCharacteristicConcentricity/** concentricity */,
                FcfCharacteristicSymmetry/** symmetry */,
                FcfCharacteristicCircularRunout/** circular runout */,
                FcfCharacteristicTotalRunout/** total runout */
            };

            /** Specifies whether the feature control frame is a single frame or composite */
            public: enum FcfFrameStyle
            {
                FcfFrameStyleSingleFrame/** single frame */,
                FcfFrameStyleCompositeFrame/** composite frame */
            };

            private: FeatureControlFrameBuilderImpl * m_featurecontrolframebuilder_impl;
            private: friend class  _FeatureControlFrameBuilderBuilder;
            protected: FeatureControlFrameBuilder();
            public: ~FeatureControlFrameBuilder();
            /**Returns  the @link Annotations::OriginBuilder Annotations::OriginBuilder@endlink  for the annotation 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::OriginBuilder * Origin
            (
            );
            /**Returns  the @link Annotations::LeaderBuilder Annotations::LeaderBuilder@endlink  for the annotation 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::LeaderBuilder * Leader
            (
            );
            /**Returns  the characteristic 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::FeatureControlFrameBuilder::FcfCharacteristic Characteristic
            (
            );
            /**Sets  the characteristic 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") OR geometric_tol ("GDT") */
            public: void SetCharacteristic
            (
                NXOpen::Annotations::FeatureControlFrameBuilder::FcfCharacteristic characteristic /** characteristic */ 
            );
            /**Returns  the frame style 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::FeatureControlFrameBuilder::FcfFrameStyle FrameStyle
            (
            );
            /**Sets  the frame style 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") OR geometric_tol ("GDT") */
            public: void SetFrameStyle
            (
                NXOpen::Annotations::FeatureControlFrameBuilder::FcfFrameStyle frameStyle /** framestyle */ 
            );
            /**Returns  the feature control frame data list 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::FeatureControlFrameDataBuilderList * FeatureControlFrameDataList
            (
            );
            /** The feature control frame data list 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void FeatureControlFrameData
            (
                std::vector<NXOpen::Annotations::FeatureControlFrameDataBuilder *> & featureControlFrameDataBuilders /** feature control frame data builders */
            );
            /**Returns  the style 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::StyleBuilder * Style
            (
            );
            /**Returns  the text 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::TextWithSymbolsBuilder * Text
            (
            );
            /** The feature control frame is inherited form existing feature control frame. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void InheritFrom
            (
                NXOpen::Annotations::BaseFcf * inheritTag /** inherittag */ 
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
