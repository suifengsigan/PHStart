#ifndef NXOpen_DISPLAY_DECALBUILDER_HXX_INCLUDED
#define NXOpen_DISPLAY_DECALBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Display_DecalBuilder.ja
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
#include <NXOpen/Display_DecalBuilder.hxx>
#include <NXOpen/Display_Image.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/ugmath.hxx>
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
        class DecalBuilder;
    }
    class Builder;
    class Direction;
    namespace Display
    {
        class Image;
    }
    class Point;
    class SelectNXObjectList;
    namespace Display
    {
        class _DecalBuilderBuilder;
        class DecalBuilderImpl;
        /** Represents a @link Display::DecalBuilder Display::DecalBuilder@endlink  
                 <br> This class is restricted to being called from a program running during an 
                Interactive NX session.  If run from a non-interactive session it will 
                return NULL. <br> 
             <br>  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_DISPLAYEXPORT  DecalBuilder : public Builder
        {
            /** image size type */
            public: enum ImageSize
            {
                ImageSizeTrueSize/** use true image size */,
                ImageSizeOneTwentyEight/** resize image to 128 x 128*/,
                ImageSizeTwoFiftySix/** resize iamge to 256 x 256*/,
                ImageSizeFiveTwelve/** resize image to 512 x 512*/,
                ImageSizeOneOTwoFour/** resize image to 1024 x1024*/,
                ImageSizeTwoOFourEight/** resize image to 2048x2048*/,
                ImageSizeFourONineSix/** resize image to 4096x 4096*/
            };

            /** decal illumination type */
            public: enum DecalIllumination
            {
                DecalIlluminationUseUnderlyingMaterial/** base decal reflectivity on underlying material */,
                DecalIlluminationUseDecalMaterial/** set decal's reflectivity  */
            };

            /** image anchor */
            public: enum Anchor
            {
                AnchorTopLeft/** anchor at top left corner of decal image*/,
                AnchorCenter/** anchor in the middle of decal image */,
                AnchorBottomLeft/** anchor at the bottom left corner of decal image */,
                AnchorTopMiddle/** anchor at top middle corner of decal image*/,
                AnchorTopRight/** anchor at top right corner of decal image*/,
                AnchorLeftMiddle/** anchor at left middle corner of decal image*/,
                AnchorRightMiddle/** anchor at right middle corner of decal image*/,
                AnchorBottomMiddle/** anchor at bottom middle corner of decal image*/,
                AnchorBottomRight/** anchor at bottom right corner of decal image*/
            };

            /** decal scaling type */
            public: enum Scaling
            {
                ScalingToFace/** scale the decal based on face size */,
                ScalingToImageSize/** scale the decal based on true decal image size*/,
                ScalingToUniformScale/** scale the decal based on uniform scale */,
                ScalingToNonUniformScale/** scale the decal based on both width and height scale */
            };

            private: DecalBuilderImpl * m_decalbuilder_impl;
            private: friend class  _DecalBuilderBuilder;
            protected: DecalBuilder();
            public: ~DecalBuilder();
            /**Returns  the decal name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString DecalName
            (
            );
            /**Sets  the decal name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDecalName
            (
                const NXString & decalName /** decalname */ 
            );
            /**Sets  the decal name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetDecalName
            (
                const char * decalName /** decalname */ 
            );
            /**Returns  the anchor type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Display::DecalBuilder::Anchor AnchorType
            (
            );
            /**Sets  the anchor type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAnchorType
            (
                NXOpen::Display::DecalBuilder::Anchor anchorType /** anchortype */ 
            );
            /**Returns  the scaling type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Display::DecalBuilder::Scaling ScalingType
            (
            );
            /**Sets  the scaling type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetScalingType
            (
                NXOpen::Display::DecalBuilder::Scaling scalingType /** scalingtype */ 
            );
            /**Returns  the image size type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Display::DecalBuilder::ImageSize ImageSizeType
            (
            );
            /**Sets  the image size type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetImageSizeType
            (
                NXOpen::Display::DecalBuilder::ImageSize imageSizeType /** imagesizetype */ 
            );
            /**Returns  the image builder 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Display::Image * Image
            (
            );
            /**Sets  the image builder 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetImage
            (
                NXOpen::Display::Image * imageBuilder /** image builder */ 
            );
            /**Returns  the decal image file name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString ImageFilename
            (
            );
            /**Sets  the decal image file name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetImageFilename
            (
                const NXString & imageFileName /** image file name */ 
            );
            /**Sets  the decal image file name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetImageFilename
            (
                const char * imageFileName /** image file name */ 
            );
            /** Returns the object currently being edited by this builder. If
                    a new object is being created, and the builder has not yet
                    been commited, returns NULL.
                  @return  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXObject * GetObject
            (
            );
            /**Returns  the object(face, body and facetted body) to apply the decal to 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * Object
            (
            );
            /**Returns  the origin 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * Origin
            (
            );
            /**Sets  the origin 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetOrigin
            (
                NXOpen::Point * origin /** origin */ 
            );
            /**Returns  the decal up vector 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * UpVector
            (
            );
            /**Sets  the decal up vector 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetUpVector
            (
                NXOpen::Direction * upVector /** upvector */ 
            );
            /**Returns  the decal normal vector 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * NormalVector
            (
            );
            /**Sets  the decal normal vector 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetNormalVector
            (
                NXOpen::Direction * normalVector /** normalvector */ 
            );
            /**Returns  the decal image aspect ratio 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double AspectRatio
            (
            );
            /**Sets  the decal image aspect ratio 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAspectRatio
            (
                double aspectRatio /** aspectratio */ 
            );
            /**Returns  the decal scale 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double Scale
            (
            );
            /**Sets  the decal scale 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetScale
            (
                double scale /** scale */ 
            );
            /**Returns  the decal width scale 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double WidthScale
            (
            );
            /**Sets  the decal width scale 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetWidthScale
            (
                double widthScale /** width scale */ 
            );
            /**Returns  the decal height scale 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double HeightScale
            (
            );
            /**Sets  the decal height scale 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetHeightScale
            (
                double heightScale /** height scale */ 
            );
            /**Returns  the decal rotation 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double Rotation
            (
            );
            /**Sets  the decal rotation 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetRotation
            (
                double rotation /** rotation */ 
            );
            /** Returns the transparency color  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<double> GetTransparencyColor
            (
            );
            /** Sets the transparency color 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTransparencyColor
            (
                const std::vector<double> & transparencyColor /** transparencycolor */ 
            );
            /**Returns  the transparency tolerance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int TransparencyTolerance
            (
            );
            /**Sets  the transparency tolerance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTransparencyTolerance
            (
                int transparencyTolerance /** transparencytolerance */ 
            );
            /**Returns  the stencil preview toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool StencilPreview
            (
            );
            /**Sets  the stencil preview toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStencilPreview
            (
                bool stencilPreview /** stencilpreview */ 
            );
            /**Returns  the illumination type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Display::DecalBuilder::DecalIllumination IlluminationType
            (
            );
            /**Sets  the illumination type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetIlluminationType
            (
                NXOpen::Display::DecalBuilder::DecalIllumination illuminationType /** illuminationtype */ 
            );
            /**Returns  the decal reflectivity 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double DecalReflectivity
            (
            );
            /**Sets  the decal reflectivity 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDecalReflectivity
            (
                double decalReflectivity /** decalreflectivity */ 
            );
            /**Returns  the engraving enable toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool EnableEngraving
            (
            );
            /**Sets  the engraving enable toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetEnableEngraving
            (
                bool enableEngraving /** enableengraving */ 
            );
            /**Returns  the decal engraving amplitude 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double EngravingAmplitude
            (
            );
            /**Sets  the decal engraving amplitude 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetEngravingAmplitude
            (
                double engravingAmplitude /** engravingamplitude */ 
            );
            /**Returns  the engraving softness 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double EngravingSoftness
            (
            );
            /**Sets  the engraving softness 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetEngravingSoftness
            (
                double engravingSoftness /** engravingsoftness */ 
            );
            /**Returns  the origin_pos 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point3d OriginPosition
            (
            );
            /**Sets  the origin_pos 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetOriginPosition
            (
                const NXOpen::Point3d & originPosition /** originposition */ 
            );
            /**Returns  the decal up vector value 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Vector3d UpVectorValue
            (
            );
            /**Sets  the decal up vector value 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetUpVectorValue
            (
                const NXOpen::Vector3d & upVectorValue /** upvectorvalue */ 
            );
            /**Returns  the decal normal vector value 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Vector3d NormalVectorValue
            (
            );
            /**Sets  the decal normal vector value 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetNormalVectorValue
            (
                const NXOpen::Vector3d & normalVectorValue /** normalvectorvalue */ 
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
