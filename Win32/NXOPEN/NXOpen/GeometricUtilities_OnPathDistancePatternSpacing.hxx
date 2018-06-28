#ifndef NXOpen_GEOMETRICUTILITIES_ONPATHDISTANCEPATTERNSPACING_HXX_INCLUDED
#define NXOpen_GEOMETRICUTILITIES_ONPATHDISTANCEPATTERNSPACING_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricUtilities_OnPathDistancePatternSpacing.ja
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
#include <NXOpen/GeometricUtilities_PatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_OnPathDimensionBuilder.hxx>
#include <NXOpen/GeometricUtilities_OnPathDistancePatternSpacing.hxx>
#include <NXOpen/libnxopencpp_geometricutilities_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace GeometricUtilities
    {
        class OnPathDistancePatternSpacing;
    }
    namespace GeometricUtilities
    {
        class OnPathDimensionBuilder;
    }
    namespace GeometricUtilities
    {
        class PatternSpacing;
    }
    namespace GeometricUtilities
    {
        class _OnPathDistancePatternSpacingBuilder;
        class OnPathDistancePatternSpacingImpl;
        /** defines the various ways pattern instances can be 
                spaced within the pattern, particularly in the context of the
                PatternDefinition class. 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICUTILITIESEXPORT  OnPathDistancePatternSpacing : public GeometricUtilities::PatternSpacing
        {
            private: OnPathDistancePatternSpacingImpl * m_onpathdistancepatternspacing_impl;
            private: friend class  _OnPathDistancePatternSpacingBuilder;
            protected: OnPathDistancePatternSpacing();
            public: ~OnPathDistancePatternSpacing();
            /**Returns  the distance for the spacing of the pattern from one instance to the next.
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::OnPathDimensionBuilder * OnPathPitchDistance
            (
            );
            /**Returns  the distance for the spacing of the pattern for the entire pattern. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::OnPathDimensionBuilder * OnPathSpanDistance
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
