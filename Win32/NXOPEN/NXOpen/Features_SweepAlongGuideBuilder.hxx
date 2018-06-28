#ifndef NXOpen_FEATURES_SWEEPALONGGUIDEBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SWEEPALONGGUIDEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_SweepAlongGuideBuilder.ja
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
#include <NXOpen/Features_SweepAlongGuideBuilder.hxx>
#include <NXOpen/GeometricUtilities_BooleanOperation.hxx>
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
        class SweepAlongGuideBuilder;
    }
    class Expression;
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace GeometricUtilities
    {
        class BooleanOperation;
    }
    namespace GeometricUtilities
    {
        class FeatureOptions;
    }
    class Section;
    namespace Features
    {
        class _SweepAlongGuideBuilderBuilder;
        class SweepAlongGuideBuilderImpl;
        /**
            Represents a @link Features::SweepAlongGuide Features::SweepAlongGuide@endlink  builder
             <br> To create a new instance of this class, use @link Features::FeatureCollection::CreateSweepAlongGuideBuilder Features::FeatureCollection::CreateSweepAlongGuideBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        FirstOffset.Value </td> <td> 
         
        0.0 (millimeters part), 0.0 (inches part) </td> </tr> 

        <tr><td> 
         
        SecondOffset.Value </td> <td> 
         
        0.0 (millimeters part), 0.0 (inches part) </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  SweepAlongGuideBuilder : public Features::FeatureBuilder
        {
            private: SweepAlongGuideBuilderImpl * m_sweepalongguidebuilder_impl;
            private: friend class  _SweepAlongGuideBuilderBuilder;
            protected: SweepAlongGuideBuilder();
            public: ~SweepAlongGuideBuilder();
            /**Returns  the section 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * Section
            (
            );
            /**Returns  the guide 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * Guide
            (
            );
            /**Returns  the first offset 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * FirstOffset
            (
            );
            /**Returns  the second offset 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * SecondOffset
            (
            );
            /**Returns  the boolean operation 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::BooleanOperation * BooleanOperation
            (
            );
            /**Returns  the chaining tolerance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double ChainingTolerance
            (
            );
            /**Sets  the chaining tolerance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetChainingTolerance
            (
                double chainingTolerance /** chainingtolerance */ 
            );
            /**Returns  the distance tolerance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double DistanceTolerance
            (
            );
            /**Sets  the distance tolerance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetDistanceTolerance
            (
                double distanceTolerance /** distancetolerance */ 
            );
            /**Returns  the feature options 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::FeatureOptions * FeatureOptions
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
