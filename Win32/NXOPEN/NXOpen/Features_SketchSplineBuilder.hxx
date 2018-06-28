#ifndef NXOpen_FEATURES_SKETCHSPLINEBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SKETCHSPLINEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_SketchSplineBuilder.ja
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
#include <NXOpen/Features_StudioSplineBuilderEx.hxx>
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
        class SketchSplineBuilder;
    }
    namespace Features
    {
        class StudioSplineBuilderEx;
    }
    namespace Features
    {
        class _SketchSplineBuilderBuilder;
        class SketchSplineBuilderImpl;
        /** Sketch Spline builder class.  <br> To create a new instance of this class, use @link Features::FeatureCollection::CreateSketchSplineBuilder Features::FeatureCollection::CreateSketchSplineBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        DrawingPlaneOption </td> <td> 
         
        View </td> </tr> 

        <tr><td> 
         
        InputCurveOption </td> <td> 
         
        Hide </td> </tr> 

        <tr><td> 
         
        MatchKnotsType </td> <td> 
         
        None </td> </tr> 

        <tr><td> 
         
        MovementMethod </td> <td> 
         
        View </td> </tr> 

        <tr><td> 
         
        Type </td> <td> 
         
        ThroughPoints </td> </tr> 

        <tr><td> 
         
        WCSOption </td> <td> 
         
        X </td> </tr> 

        </table>  

         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  SketchSplineBuilder : public Features::StudioSplineBuilderEx
        {
            private: SketchSplineBuilderImpl * m_sketchsplinebuilder_impl;
            private: friend class  _SketchSplineBuilderBuilder;
            protected: SketchSplineBuilder();
            public: ~SketchSplineBuilder();
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
