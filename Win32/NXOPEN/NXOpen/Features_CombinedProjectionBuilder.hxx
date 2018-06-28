#ifndef NXOpen_FEATURES_COMBINEDPROJECTIONBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_COMBINEDPROJECTIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_CombinedProjectionBuilder.ja
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
#include <NXOpen/Features_CombinedProjectionBuilder.hxx>
#include <NXOpen/GeometricUtilities_CurveFitOptions.hxx>
#include <NXOpen/GeometricUtilities_CurveOptions.hxx>
#include <NXOpen/GeometricUtilities_ProjectionOptions.hxx>
#include <NXOpen/Section.hxx>
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
        class CombinedProjectionBuilder;
    }
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace GeometricUtilities
    {
        class CurveFitOptions;
    }
    namespace GeometricUtilities
    {
        class CurveOptions;
    }
    namespace GeometricUtilities
    {
        class ProjectionOptions;
    }
    class Section;
    namespace Features
    {
        class _CombinedProjectionBuilderBuilder;
        class CombinedProjectionBuilderImpl;
        /**
            Represents a @link Features::CombinedProjection Features::CombinedProjection@endlink  builder
             <br> To create a new instance of this class, use @link Features::FeatureCollection::CreateCombinedProjectionBuilder Features::FeatureCollection::CreateCombinedProjectionBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        CurveFit.FitOption </td> <td> 
         
        Cubic </td> </tr> 

        <tr><td> 
         
        CurveFit.MaximumDegree </td> <td> 
         
        7 </td> </tr> 

        <tr><td> 
         
        CurveFit.MaximumSegments </td> <td> 
         
        1 </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  CombinedProjectionBuilder : public Features::FeatureBuilder
        {
            private: CombinedProjectionBuilderImpl * m_combinedprojectionbuilder_impl;
            private: friend class  _CombinedProjectionBuilderBuilder;
            protected: CombinedProjectionBuilder();
            public: ~CombinedProjectionBuilder();
            /**Returns  the combined projection curve1 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * Curve1
            (
            );
            /**Returns  the combined projection curve2 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * Curve2
            (
            );
            /**Returns  the combined projection direction1 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::ProjectionOptions * Direction1
            (
            );
            /**Returns  the combined projection direction2 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::ProjectionOptions * Direction2
            (
            );
            /**Returns  the combined projection curveOptions
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::CurveOptions * CurveOptions
            (
            );
            /**Returns  the combined projection curveFit 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::CurveFitOptions * CurveFit
            (
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
