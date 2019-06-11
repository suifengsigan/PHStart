#ifndef NXOpen_FEATURES_RIBBONBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_RIBBONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_RibbonBuilder.ja
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
#include <NXOpen/Features_RibbonBuilder.hxx>
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
        class RibbonBuilder;
    }
    class Direction;
    class Expression;
    namespace Features
    {
        class FeatureBuilder;
    }
    class Section;
    namespace Features
    {
        class _RibbonBuilderBuilder;
        class RibbonBuilderImpl;
        /**
            Represents a @link Features::Ribbon Features::Ribbon@endlink  builder
             <br> To create a new instance of this class, use @link Features::FeatureCollection::CreateRibbonBuilder Features::FeatureCollection::CreateRibbonBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Angle.Value </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        AngleTolerance </td> <td> 
         
        0.5 </td> </tr> 

        <tr><td> 
         
        DistanceTolerance </td> <td> 
         
        0.0254 (millimeters part), 0.01 (inches part) </td> </tr> 

        <tr><td> 
         
        OffsetDistance.Value </td> <td> 
         
        1 (millimeters part), 0.04 (inches part) </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  RibbonBuilder : public Features::FeatureBuilder
        {
            private: RibbonBuilderImpl * m_ribbonbuilder_impl;
            private: friend class  _RibbonBuilderBuilder;
            protected: RibbonBuilder();
            public: ~RibbonBuilder();
            /**Returns  the profile to offset 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * Profile
            (
            );
            /**Returns  the direction normal to the offset 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * OffsetView
            (
            );
            /**Sets  the direction normal to the offset 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetOffsetView
            (
                NXOpen::Direction * offsetView /** offsetview */ 
            );
            /**Returns  the distance to offset the profile 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * OffsetDistance
            (
            );
            /**Returns  the flag indicating that the offset direction should be reversed 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool ReverseOffset
            (
            );
            /**Sets  the flag indicating that the offset direction should be reversed 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetReverseOffset
            (
                bool reverseOffset /** reverseoffset */ 
            );
            /**Returns  the angle to offset measured from the offset view 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Angle
            (
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
            /**Returns  the angle tolerance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double AngleTolerance
            (
            );
            /**Sets  the angle tolerance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetAngleTolerance
            (
                double angleTolerance /** angletolerance */ 
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