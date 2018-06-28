#ifndef NXOpen_FEATURES_SMOOTHSPLINEBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SMOOTHSPLINEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_SmoothSplineBuilder.ja
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
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_SmoothSplineBuilder.hxx>
#include <NXOpen/GeometricUtilities_Continuity.hxx>
#include <NXOpen/GeometricUtilities_CurveRangeBuilder.hxx>
#include <NXOpen/SelectObject.hxx>
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
        class SmoothSplineBuilder;
    }
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace GeometricUtilities
    {
        class Continuity;
    }
    namespace GeometricUtilities
    {
        class CurveRangeBuilder;
    }
    class SelectCurve;
    namespace Features
    {
        class _SmoothSplineBuilderBuilder;
        class SmoothSplineBuilderImpl;
        /**
            Represents a @link Features::SmoothSpline Features::SmoothSpline@endlink  builder
             <br> To create a new instance of this class, use @link Features::FeatureCollection::CreateSmoothSplineBuilder Features::FeatureCollection::CreateSmoothSplineBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        CurveRange.AnchorPosition </td> <td> 
         
        Start </td> </tr> 

        <tr><td> 
         
        ModificationPercentage </td> <td> 
         
        100 </td> </tr> 

        <tr><td> 
         
        SmoothingFactor </td> <td> 
         
        1 </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  SmoothSplineBuilder : public Features::FeatureBuilder
        {
            /** This enum represents the Smoothing Type option */
            public: enum Types
            {
                TypesCurvature/** Curvature */,
                TypesCurvatureVariation/** Curvature Variation */
            };

            private: SmoothSplineBuilderImpl * m_smoothsplinebuilder_impl;
            private: friend class  _SmoothSplineBuilderBuilder;
            protected: SmoothSplineBuilder();
            public: ~SmoothSplineBuilder();
            /**Returns  the curve 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectCurve * Curve
            (
            );
            /**Returns  the curve range 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::CurveRangeBuilder * CurveRange
            (
            );
            /**Returns  the start constraint 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::Continuity * StartConstraint
            (
            );
            /**Returns  the end constraint 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::Continuity * EndConstraint
            (
            );
            /**Returns  the smoothing factor 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int SmoothingFactor
            (
            );
            /**Sets  the smoothing factor 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetSmoothingFactor
            (
                int smoothingFactor /** smoothingfactor */ 
            );
            /**Returns  the modification percentage 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int ModificationPercentage
            (
            );
            /**Sets  the modification percentage 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetModificationPercentage
            (
                int modificationPercentage /** modificationpercentage */ 
            );
            /**Returns  the type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::SmoothSplineBuilder::Types Type
            (
            );
            /**Sets  the type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
            public: void SetType
            (
                NXOpen::Features::SmoothSplineBuilder::Types type /** type */ 
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
