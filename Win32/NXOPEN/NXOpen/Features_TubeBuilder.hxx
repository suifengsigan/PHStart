#ifndef NXOpen_FEATURES_TUBEBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_TUBEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_TubeBuilder.ja
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
#include <NXOpen/Features_TubeBuilder.hxx>
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
        class TubeBuilder;
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
    class Section;
    namespace Features
    {
        class _TubeBuilderBuilder;
        class TubeBuilderImpl;
        /**
            Represents a @link Features::Tube Features::Tube@endlink  builder
             <br> To create a new instance of this class, use @link Features::FeatureCollection::CreateTubeBuilder Features::FeatureCollection::CreateTubeBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        BooleanOption.Type </td> <td> 
         
        Create </td> </tr> 

        <tr><td> 
         
        InnerDiameter.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        OuterDiameter.Value </td> <td> 
         
        1 (millimeters part), 0.04 (inches part) </td> </tr> 

        <tr><td> 
         
        OutputOption </td> <td> 
         
        MultipleSegments </td> </tr> 

        </table>  

         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  TubeBuilder : public Features::FeatureBuilder
        {
            /** This enum represents the topology output option */
            public: enum Output
            {
                OutputMultipleSegments/** multiple segments output */,
                OutputSingleSegment/** single segment output */
            };

            private: TubeBuilderImpl * m_tubebuilder_impl;
            private: friend class  _TubeBuilderBuilder;
            protected: TubeBuilder();
            public: ~TubeBuilder();
            /**Returns  the path section 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * PathSection
            (
            );
            /**Returns  the outer diameter 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * OuterDiameter
            (
            );
            /**Returns  the inner diameter 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * InnerDiameter
            (
            );
            /**Returns  the output topology option 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::TubeBuilder::Output OutputOption
            (
            );
            /**Sets  the output topology option 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetOutputOption
            (
                NXOpen::Features::TubeBuilder::Output outputOption /** outputoption */ 
            );
            /**Returns  the boolean option 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::BooleanOperation * BooleanOption
            (
            );
            /**Returns  the distance tolerance 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: double Tolerance
            (
            );
            /**Sets  the distance tolerance 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetTolerance
            (
                double tolerance /** tolerance */ 
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
