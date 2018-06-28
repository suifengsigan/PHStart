#ifndef NXOpen_PREFERENCES_VIEWVISUALIZATIONSPECIALEFFECTS_HXX_INCLUDED
#define NXOpen_PREFERENCES_VIEWVISUALIZATIONSPECIALEFFECTS_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Preferences_ViewVisualizationSpecialEffects.ja
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
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_preferences_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Preferences
    {
        class ViewVisualizationSpecialEffects;
    }
    class View;
    namespace Preferences
    {
        class ViewVisualizationSpecialEffectsImpl;
        /** Represents the set of visualization special effect preferences applicable to entire session. 
        Mainly sets fog preferences. Fog is the ability to display close objects in shades that are different 
        than those of distant objects resulting in a display that shows which geometry is closest to the 
        viewer and which is furthest.
         <br> To obtain an instance of this class, refer to @link View View@endlink  <br> 
         <br>  Created in NX3.0.0.  <br>  
        */
        class NXOPENCPP_PREFERENCESEXPORT  ViewVisualizationSpecialEffects
        {
            /** Describes whether the fog type is selected as linear or light or heavy. */
            public: enum FogType
            {
                FogTypeLinear/** Linear Fog  */,
                FogTypeLight/** Non linear Fog. Light fog produces a fog effect less pervasive than Heavy fog */,
                FogTypeHeavy/** Non linear Fog */
            };

             /** Represents three constituents of a RGB color pattern */
            public:
            struct  ColorRGB
            {
                public: /** Red in RGB pattern */double RedColor;
                public: /** Green in RGB pattern */double GreenColor;
                public: /** Blue in RGB pattern */double BlueColor;
                public: ColorRGB() :
                    RedColor(),
                    GreenColor(),
                    BlueColor()
                {
                }
                /** Constructor for the ColorRGB struct. */ 
                public: ColorRGB(double redColorInitial /** Red in RGB pattern */, 
                        double greenColorInitial /** Green in RGB pattern */, 
                        double blueColorInitial /** Blue in RGB pattern */) :
                    RedColor(redColorInitial),
                    GreenColor(greenColorInitial),
                    BlueColor(blueColorInitial)
                {
                }
            };

             /** Represents the constituents of fog data */
            public:
            struct  FogData
            {
                public: /** Fog mode  */int FogMode;
                public: /** If true fog color is applied to the view */bool FogColorFlag;
                public: /** Fog Color  */NXOpen::Preferences::ViewVisualizationSpecialEffects::ColorRGB FogColor;
                public: /** Start of fog  */double FogStart;
                public: /** End of fog  */double FogEnd;
                public: /** Density of fog  */double FogDensity;
                public: FogData() :
                    FogMode(),
                    FogColorFlag(),
                    FogColor(),
                    FogStart(),
                    FogEnd(),
                    FogDensity()
                {
                }
                /** Constructor for the FogData struct. */ 
                public: FogData(int fogModeInitial /** Fog mode  */, 
                        bool fogColorFlagInitial /** If true fog color is applied to the view */, 
                        const NXOpen::Preferences::ViewVisualizationSpecialEffects::ColorRGB &fogColorInitial /** Fog Color  */, 
                        double fogStartInitial /** Start of fog  */, 
                        double fogEndInitial /** End of fog  */, 
                        double fogDensityInitial /** Density of fog  */) :
                    FogMode(fogModeInitial),
                    FogColorFlag(fogColorFlagInitial),
                    FogColor(fogColorInitial),
                    FogStart(fogStartInitial),
                    FogEnd(fogEndInitial),
                    FogDensity(fogDensityInitial)
                {
                }
            };

             /** Represents three constituents of a HSV color pattern */
            public:
            struct  ColorHSV
            {
                public: /** Hue in HSV pattern is the color  type (such as red, blue, or yellow) Ranges from 0-360  */double Hue;
                public: /** Saturation in HSV pattern is the "vibrancy" of the color Ranges from 0-255 */double Saturation;
                public: /** Value in HSV pattern is the brightness of the color Ranges from 0-255 */double Value;
                public: ColorHSV() :
                    Hue(),
                    Saturation(),
                    Value()
                {
                }
                /** Constructor for the ColorHSV struct. */ 
                public: ColorHSV(double hueInitial /** Hue in HSV pattern is the color  type (such as red, blue, or yellow) Ranges from 0-360  */, 
                        double saturationInitial /** Saturation in HSV pattern is the "vibrancy" of the color Ranges from 0-255 */, 
                        double valueInitial /** Value in HSV pattern is the brightness of the color Ranges from 0-255 */) :
                    Hue(hueInitial),
                    Saturation(saturationInitial),
                    Value(valueInitial)
                {
                }
            };

             /** Represents three constituents of a HLS color pattern */
            public:
            struct  ColorHLS
            {
                public: /** Hue in HSV pattern is the color type (such as red, blue, or yellow) Ranges from 0-360 */double Hue;
                public: /** Lightness in HLS pattern Ranges from 0-255 */double Lightness;
                public: /** Saturation in HSV pattern is the "vibrancy" of the color Ranges from 0-255 */double Saturation;
                public: ColorHLS() :
                    Hue(),
                    Lightness(),
                    Saturation()
                {
                }
                /** Constructor for the ColorHLS struct. */ 
                public: ColorHLS(double hueInitial /** Hue in HSV pattern is the color type (such as red, blue, or yellow) Ranges from 0-360 */, 
                        double lightnessInitial /** Lightness in HLS pattern Ranges from 0-255 */, 
                        double saturationInitial /** Saturation in HSV pattern is the "vibrancy" of the color Ranges from 0-255 */) :
                    Hue(hueInitial),
                    Lightness(lightnessInitial),
                    Saturation(saturationInitial)
                {
                }
            };

            private: ViewVisualizationSpecialEffectsImpl * m_viewvisualizationspecialeffects_impl;
            private: NXOpen::View* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit ViewVisualizationSpecialEffects(NXOpen::View *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~ViewVisualizationSpecialEffects();
            /**Returns  the fog option. If true fog settings are available and applied to display 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: bool FogSettingOption
            (
            );
            /**Sets  the fog option. If true fog settings are available and applied to display 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFogSettingOption
            (
                bool fogSettingOption /** fog setting option */ 
            );
            /**Returns  the fog setting type 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Preferences::ViewVisualizationSpecialEffects::FogType FogSetting
            (
            );
            /**Sets  the fog setting type 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFogSetting
            (
                NXOpen::Preferences::ViewVisualizationSpecialEffects::FogType fogSetting /** fog setting */ 
            );
            /**Returns  the use background color flag. If true background color is used as fog color 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: bool FogBackgroundColor
            (
            );
            /**Sets  the use background color flag. If true background color is used as fog color 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFogBackgroundColor
            (
                bool fogBackgroundColor /** fog background color */ 
            );
            /**Returns  the value of RGB color pattern
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Preferences::ViewVisualizationSpecialEffects::ColorRGB FogColorRGBValue
            (
            );
            /**Sets  the value of RGB color pattern
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFogColorRGBValue
            (
                const NXOpen::Preferences::ViewVisualizationSpecialEffects::ColorRGB & fogColorRgbValue /** fog color rgb value */ 
            );
            /**Returns  the value of HSV color pattern
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Preferences::ViewVisualizationSpecialEffects::ColorHSV FogColorHSVValue
            (
            );
            /**Sets  the value of HSV color pattern
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFogColorHSVValue
            (
                const NXOpen::Preferences::ViewVisualizationSpecialEffects::ColorHSV & fogColorHsvValue /** fog color hsv value */ 
            );
            /**Returns  the value of HLS color pattern
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Preferences::ViewVisualizationSpecialEffects::ColorHLS FogColorHLSValue
            (
            );
            /**Sets  the value of HLS color pattern
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFogColorHLSValue
            (
                const NXOpen::Preferences::ViewVisualizationSpecialEffects::ColorHLS & fogColorHlsValue /** fog color hls value */ 
            );
            /**Returns  the fog front scale value. The front scale defines the beginning of fog. 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: int FogFrontValue
            (
            );
            /**Sets  the fog front scale value. The front scale defines the beginning of fog. 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFogFrontValue
            (
                int fogFrontValue /** fog front value */ 
            );
            /**Returns  the fog back scale value. The Back scale defines the point at which fog reaches its maximum. 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: int FogBackValue
            (
            );
            /**Sets  the fog back scale value. The Back scale defines the point at which fog reaches its maximum. 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFogBackValue
            (
                int fogBackValue /** fog back value */ 
            );
            /**Returns  the fog rate value. Specifies the rate at which an object fades as the distance in the view increases. 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: int FogRateValue
            (
            );
            /**Sets  the fog rate value. Specifies the rate at which an object fades as the distance in the view increases. 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFogRateValue
            (
                int fogRateValue /** fog rate value */ 
            );
            /** Applies current fog settings to display 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void UpdateFogDisplay
            (
                const NXOpen::Preferences::ViewVisualizationSpecialEffects::FogData & fogData /** fog data */ 
            );
        }; //lint !e1712 default constructor not defined for class  

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
