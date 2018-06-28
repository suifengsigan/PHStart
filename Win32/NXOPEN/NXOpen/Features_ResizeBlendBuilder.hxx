#ifndef NXOpen_FEATURES_RESIZEBLENDBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_RESIZEBLENDBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ResizeBlendBuilder.ja
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
#include <NXOpen/Expression.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_ResizeBlendBuilder.hxx>
#include <NXOpen/ScCollector.hxx>
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
        class ResizeBlendBuilder;
    }
    class Expression;
    class Face;
    namespace Features
    {
        class FeatureBuilder;
    }
    class ScCollector;
    namespace Features
    {
        class _ResizeBlendBuilderBuilder;
        class ResizeBlendBuilderImpl;
        /**
            Represents a builder for a resize blend feature, don't use it until nx502.
             <br> To create a new instance of this class, use @link Features::FeatureCollection::CreateResizeBlendBuilder Features::FeatureCollection::CreateResizeBlendBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Radius.Value </td> <td> 
         
        5.0 (millimeters part), 0.2 (inches part) </td> </tr> 

        </table>  

         <br>  Created in NX5.0.2.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  ResizeBlendBuilder : public Features::FeatureBuilder
        {
            private: ResizeBlendBuilderImpl * m_resizeblendbuilder_impl;
            private: friend class  _ResizeBlendBuilderBuilder;
            protected: ResizeBlendBuilder();
            public: ~ResizeBlendBuilder();
            /**Returns  the blend faces collector, don't use it until nx502 
             <br>  Created in NX5.0.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::ScCollector * BlendFace
            (
            );
            /**Returns  the blend radius to resize, don't use it until nx502 
             <br>  Created in NX5.0.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Radius
            (
            );
            /** Get the radius of a blend face  @return  
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : None */
            public: double GetBlendFaceRadius
            (
                NXOpen::Face * blendFace /** blend face */ 
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
