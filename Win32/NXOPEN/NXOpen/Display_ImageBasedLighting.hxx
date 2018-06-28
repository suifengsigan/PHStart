#ifndef NXOpen_DISPLAY_IMAGEBASEDLIGHTING_HXX_INCLUDED
#define NXOpen_DISPLAY_IMAGEBASEDLIGHTING_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Display_ImageBasedLighting.ja
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
#include <NXOpen/Display_Image.hxx>
#include <NXOpen/Display_ImageBasedLighting.hxx>
#include <NXOpen/libnxopencpp_display_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Display
    {
        class ImageBasedLighting;
    }
    class Builder;
    class Direction;
    namespace Display
    {
        class Image;
    }
    class View;
    namespace Display
    {
        class _ImageBasedLightingBuilder;
        class ImageBasedLightingImpl;
        /**
            Represents a @link Display::ImageBasedLighting Display::ImageBasedLighting@endlink 
            Image-based Lighting (IBL) is only performed in High Quality Image 
            renderings.  IBL replaces the Lights in a scene with lighting effects 
            derived from a given image.
             <br> This class is restricted to being called from a program running during an 
            Interactive NX session.  If run from a non-interactive session it will 
            return NULL. <br> 
             <br> To create a new instance of this class, use @link ViewCollection::CreateImageBasedLighting ViewCollection::CreateImageBasedLighting@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_DISPLAYEXPORT  ImageBasedLighting : public Builder
        {
            /** images type - environment used for generating image-based lighting */
            public: enum ImagesType
            {
                ImagesTypeBackground/** Use the background image. */,
                ImagesTypeStage/** Use the stage. */,
                ImagesTypeUserDefined/** Use the image file specified. */,
                ImagesTypeLightingOnly/** only used for IBL*/
            };

            /** shadow type */
            public: enum ShadowsType
            {
                ShadowsTypeNone/** No shadows will be produced. */,
                ShadowsTypeSoftEdged/** Soft-edged,approximated shadows will be generated using a shadow
                                                                                               mapping algorithm. */,
                ShadowsTypeHardEdged/** Hard-edged, precise shadows will be generated using a ray-tracing
                                                                                               algorithm. */,
                ShadowsTypeTranslucentHard/** Hard-edged, precise shadows will be generated using a ray-tracing
                                                                                               algorithm.  Shadows from translucent objects will also be generated
                                                                                               and their color will be determined by the transparent object's
                                                                                               color. */
            };

            /** lighting image blurr type */
            public: enum ImageBlurType
            {
                ImageBlurTypeNone/** none */ ,
                ImageBlurTypeLow/** low */ ,
                ImageBlurTypeMedium/** medium */ ,
                ImageBlurTypeHigh/** high */ 
            };

            private: ImageBasedLightingImpl * m_imagebasedlighting_impl;
            private: friend class  _ImageBasedLightingBuilder;
            protected: ImageBasedLighting();
            public: ~ImageBasedLighting();
            /**Returns  whether image-based lighting (IBL) is enabled 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool UseImageBasedLighting
            (
            );
            /**Sets  whether image-based lighting (IBL) is enabled 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetUseImageBasedLighting
            (
                bool useIBL /** useibl */ 
            );
            /**Returns  the intensity of the image-based lighting light effects 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: double Intensity
            (
            );
            /**Sets  the intensity of the image-based lighting light effects 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetIntensity
            (
                double intensity /** intensity */ 
            );
            /**Returns  the accuracy of the lighting and shadows produced from the given image 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: double Accuracy
            (
            );
            /**Sets  the accuracy of the lighting and shadows produced from the given image 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAccuracy
            (
                double accuracy /** accuracy */ 
            );
            /**Returns  the image type 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Display::ImageBasedLighting::ImagesType ImageType
            (
            );
            /**Sets  the image type 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetImageType
            (
                NXOpen::Display::ImageBasedLighting::ImagesType imageType /** image type */ 
            );
            /**Returns  the shadow type 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Display::ImageBasedLighting::ShadowsType ShadowType
            (
            );
            /**Sets  the shadow type 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetShadowType
            (
                NXOpen::Display::ImageBasedLighting::ShadowsType shadowType /** shadow type */ 
            );
            /**Returns  the image rotation angle (in degrees) 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: double ImageRotation
            (
            );
            /**Sets  the image rotation angle (in degrees) 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetImageRotation
            (
                double imageRotation /** imagerotation */ 
            );
            /**Returns  the image up vector direction, relative to the absolute coordinate system 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * ImageUpVector
            (
            );
            /**Sets  the image up vector direction, relative to the absolute coordinate system 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetImageUpVector
            (
                NXOpen::Direction * imageUpVector /** imageupvector */ 
            );
            /**Returns  the image-based lighting's image builder 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Display::Image * Image
            (
            );
            /**Sets  the image-based lighting's image builder 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetImage
            (
                NXOpen::Display::Image * imageBuilder /** image builder */ 
            );
            /**Returns  the image filename used for image-based lighting 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXString ImageFilename
            (
            );
            /**Sets  the image filename used for image-based lighting 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetImageFilename
            (
                const NXString & imageFileName /** image file name */ 
            );
            /**Sets  the image filename used for image-based lighting 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            void SetImageFilename
            (
                const char * imageFileName /** image file name */ 
            );
            /** Saves the attributes and optionally updates the display of image-based lighting 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void CommitAndDisplay
            (
                NXOpen::View * view /** View of the image-based lighting attributes */,
                bool updateDisplay /** True if the display should be updated */
            );
            /**Returns  whether image-based lighting is enabled in Advanced Studio (lwrt) display 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool UseLwrtImageBasedLighting
            (
            );
            /**Sets  whether image-based lighting is enabled in Advanced Studio (lwrt) display 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetUseLwrtImageBasedLighting
            (
                bool useLwrtIBL /** uselwrtibl */ 
            );
            /**Returns  the quality of the lwrt image-based lighting light effects 1 to 7 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double LwrtQuality
            (
            );
            /**Sets  the quality of the lwrt image-based lighting light effects 1 to 7 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetLwrtQuality
            (
                double lwrtQuality /** lwrt quality */ 
            );
            /**Returns  the angle of the lwrt image-based lighting light effects 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double LwrtAngle
            (
            );
            /**Sets  the angle of the lwrt image-based lighting light effects 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetLwrtAngle
            (
                double lwrtAngle /** lwrt angle */ 
            );
            /**Returns  the intensity of the lwrt image-based lighting light effects 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double LwrtIntensity
            (
            );
            /**Sets  the intensity of the lwrt image-based lighting light effects 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetLwrtIntensity
            (
                double lwrtIntensity /** lwrt intensity */ 
            );
            /**Returns  the blurr of the lighting image 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Display::ImageBasedLighting::ImageBlurType ImageBlur
            (
            );
            /**Sets  the blurr of the lighting image 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetImageBlur
            (
                NXOpen::Display::ImageBasedLighting::ImageBlurType imageBlurr /** image blurr */ 
            );
            /**Returns  whether high quality image generation (HQI) uses individual light sources or image-based lighting for shadow catcher 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool UseLightsForShadowCatcherInHqi
            (
            );
            /**Sets  whether high quality image generation (HQI) uses individual light sources or image-based lighting for shadow catcher 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetUseLightsForShadowCatcherInHqi
            (
                bool useLightsForShadowCatcherInHqi /** uselightsforshadowcatcherinhqi */ 
            );
            /**Returns  whether Advanced Studio display (lwrt) uses individual light sources or image-based lighting for shadow catcher 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool UseLightsForShadowCatcherInLwrt
            (
            );
            /**Sets  whether Advanced Studio display (lwrt) uses individual light sources or image-based lighting for shadow catcher 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetUseLightsForShadowCatcherInLwrt
            (
                bool useLightsForShadowCatcherInLwrt /** uselightsforshadowcatcherinlwrt */ 
            );
            /**Returns  the image-based lighting shadow softness 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double ShadowSoftness
            (
            );
            /**Sets  the image-based lighting shadow softness 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetShadowSoftness
            (
                double shadowSoftness /** shadow softness */ 
            );
            /**Returns  the image-based lighting color saturation 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double ColorSaturation
            (
            );
            /**Sets  the image-based lighting color saturation 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetColorSaturation
            (
                double colorSaturation /** color saturation */ 
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
