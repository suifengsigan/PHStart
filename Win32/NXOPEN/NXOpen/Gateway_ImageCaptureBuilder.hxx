#ifndef NXOpen_GATEWAY_IMAGECAPTUREBUILDER_HXX_INCLUDED
#define NXOpen_GATEWAY_IMAGECAPTUREBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Gateway_ImageCaptureBuilder.ja
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
#include <NXOpen/Gateway_ImageCaptureBuilder.hxx>
#include <NXOpen/libnxopencpp_gateway_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Gateway
    {
        class ImageCaptureBuilder;
    }
    class Builder;
    namespace Gateway
    {
        class _ImageCaptureBuilderBuilder;
        class ImageCaptureBuilderImpl;
        /** Represents a @link Gateway::ImageCaptureBuilder Gateway::ImageCaptureBuilder@endlink  builder  <br> To create a new instance of this class, use @link Gateway::ImageCaptureManager::CreateImageCaptureBuilder Gateway::ImageCaptureManager::CreateImageCaptureBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        CaptureMethod </td> <td> 
         
        GraphicsArea </td> </tr> 

        <tr><td> 
         
        Format </td> <td> 
         
        Bmp </td> </tr> 

        <tr><td> 
         
        Size </td> <td> 
         
        Pixels64 </td> </tr> 

        </table>  

         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_GATEWAYEXPORT  ImageCaptureBuilder : public Builder
        {
            /** the selection method*/
            public: enum CaptureMethodType
            {
                CaptureMethodTypeGraphicsArea/** the graphics area*/,
                CaptureMethodTypeRegion/** the region area*/,
                CaptureMethodTypeFile/** the input from file*/
            };

            /** the image format*/
            public: enum ImageFormat
            {
                ImageFormatBmp/** the bmp image format*/,
                ImageFormatJpg/** the jpg image format*/,
                ImageFormatGif/** the gif image format*/,
                ImageFormatPng/** the png image format*/,
                ImageFormatTiff/** the tiff image format*/
            };

            /** the image size*/
            public: enum ImageSize
            {
                ImageSizePixels16/** the 16 pixel size*/,
                ImageSizePixels24/** the 24 pixel size*/,
                ImageSizePixels32/** the 32 pixel size*/,
                ImageSizePixels48/** the 48 pixel size*/,
                ImageSizePixels64/** the 64 pixel size*/,
                ImageSizePixels96/** the 96 pixel size*/,
                ImageSizePixels128/** the 128 pixel size*/
            };

            private: ImageCaptureBuilderImpl * m_imagecapturebuilder_impl;
            private: friend class  _ImageCaptureBuilderBuilder;
            protected: ImageCaptureBuilder();
            public: ~ImageCaptureBuilder();
            /**Returns  the capture method 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Gateway::ImageCaptureBuilder::CaptureMethodType CaptureMethod
            (
            );
            /**Sets  the capture method 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetCaptureMethod
            (
                NXOpen::Gateway::ImageCaptureBuilder::CaptureMethodType captureMethod /** capturemethod */ 
            );
            /** Returns the region 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void GetRegion
            (
                std::vector<int> & topLeftCorner /** Array of 2 integers for Top Left Corner of Region */,
                std::vector<int> & bottomRightCorner /** Array of 2 integers for Bottom Right Corner of Region */
            );
            /** Sets the region 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetRegion
            (
                const std::vector<int> & topLeftCorner /** Array of 2 integers for Top Left Corner of Region */,
                const std::vector<int> & bottomRightCorner /** Array of 2 integers for Bottom Right Corner of Region */
            );
            /**Returns  the file 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString File
            (
            );
            /**Sets  the file 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetFile
            (
                const NXString & filename /** filename */ 
            );
            /**Sets  the file 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            void SetFile
            (
                const char * filename /** filename */ 
            );
            /**Returns  the format 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Gateway::ImageCaptureBuilder::ImageFormat Format
            (
            );
            /**Sets  the format 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetFormat
            (
                NXOpen::Gateway::ImageCaptureBuilder::ImageFormat format /** format */ 
            );
            /**Returns  the size 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Gateway::ImageCaptureBuilder::ImageSize Size
            (
            );
            /**Sets  the size 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSize
            (
                NXOpen::Gateway::ImageCaptureBuilder::ImageSize size /** size */ 
            );
            /**Returns  the image file 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString ImageFile
            (
            );
            /**Sets  the image file 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetImageFile
            (
                const NXString & imageFilename /** imagefilename */ 
            );
            /**Sets  the image file 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            void SetImageFile
            (
                const char * imageFilename /** imagefilename */ 
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
