#ifndef NXOpen_GEOMETRICUTILITIES_CURVEFITOPTIONS_HXX_INCLUDED
#define NXOpen_GEOMETRICUTILITIES_CURVEFITOPTIONS_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricUtilities_CurveFitOptions.ja
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
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/GeometricUtilities_CurveFitOptions.hxx>
#include <NXOpen/TaggedObject.hxx>
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
        class CurveFitOptions;
    }
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    namespace GeometricUtilities
    {
        class _CurveFitOptionsBuilder;
        class CurveFitOptionsImpl;
        /** Represents the curve fit data 
            
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICUTILITIESEXPORT  CurveFitOptions : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            /** Represents the curve fit method */
            public: enum FitMethod
            {
                FitMethodCubic/** Cubic */,
                FitMethodQuintic/** Quintic */,
                FitMethodAdvanced/** Advanced */
            };

            private: CurveFitOptionsImpl * m_curvefitoptions_impl;
            private: friend class  _CurveFitOptionsBuilder;
            protected: CurveFitOptions();
            public: ~CurveFitOptions();
            /**Sets  the curve fit method  
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetFitOption
            (
                NXOpen::GeometricUtilities::CurveFitOptions::FitMethod curveFitMethod /** curve fit method */
            );
            /**Returns  the curve fit method  
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: NXOpen::GeometricUtilities::CurveFitOptions::FitMethod FitOption
            (
            );
            /**Sets  the maximum degree method 
                   
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetMaximumDegree
            (
                int maximumDegree /** maximum degree method */
            );
            /**Returns  the maximum degree method 
                   
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: int MaximumDegree
            (
            );
            /**Sets  the maximum segments method 
                   
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetMaximumSegments
            (
                int maximumSegments /** maximum segments */
            );
            /**Returns  the maximum segments method 
                   
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: int MaximumSegments
            (
            );
            /** Validate whether the inputs to the component are sufficient for 
                        commit to be called.  If the component is not in a state to commit
                        then an exception is thrown.  For example, if the component requires
                        you to set some property, this method will throw an exception if
                        you haven't set it.  This method throws a not-yet-implemented
                        NXException for some components.
                     @return  Was self validation successful 
             <br>  Created in NX3.0.1.  <br>  
             <br> License requirements : None */
            public: virtual bool Validate
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
