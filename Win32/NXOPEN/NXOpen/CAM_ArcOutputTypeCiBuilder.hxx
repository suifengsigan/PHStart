#ifndef NXOpen_CAM_ARCOUTPUTTYPECIBUILDER_HXX_INCLUDED
#define NXOpen_CAM_ARCOUTPUTTYPECIBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_ArcOutputTypeCiBuilder.ja
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
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_cam_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAM
    {
        class ArcOutputTypeCiBuilder;
    }
    namespace CAM
    {
        class _ArcOutputTypeCiBuilderBuilder;
        class ArcOutputTypeCiBuilderImpl;
        /** Represents a ArcOutputTypeCiBuilder 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  ArcOutputTypeCiBuilder : public TaggedObject
        {
            /** Available types for output*/
            public: enum OutputTypes
            {
                OutputTypesLinearOnly/** linear only */,
                OutputTypesCirPerpToTaxis/** cir perp to taxis */,
                OutputTypesCirPerpParallelToTaxis/** cir perp parallel to taxis */,
                OutputTypesNurbs/** nurbs */,
                OutputTypesSpline/** splines */
            };

            /** the available types for spline fitting tolerance*/
            public: enum SplineFitToleranceTypes
            {
                SplineFitToleranceTypesPercent/** % tolerance */,
                SplineFitToleranceTypesValue/** part units */
            };

            /** the available types for spline line output */
            public: enum SplineLineOutputTypes
            {
                SplineLineOutputTypesSpline/** spline */,
                SplineLineOutputTypesLine/** line */
            };

            /** the available types for spline arc output */
            public: enum SplineArcOutputTypes
            {
                SplineArcOutputTypesSpline/** spline */,
                SplineArcOutputTypesArcPerpToTaxis/** arc perp to Tool Axis */,
                SplineArcOutputTypesArcPerpParallelToTaxis/** arc perp parallel to Tool Axis */
            };

            private: ArcOutputTypeCiBuilderImpl * m_arcoutputtypecibuilder_impl;
            private: friend class  _ArcOutputTypeCiBuilderBuilder;
            protected: ArcOutputTypeCiBuilder();
            public: ~ArcOutputTypeCiBuilder();
            /**Returns  the Motion Output Type 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ArcOutputTypeCiBuilder::OutputTypes OutputType
            (
            );
            /**Sets  the Motion Output Type 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetOutputType
            (
                NXOpen::CAM::ArcOutputTypeCiBuilder::OutputTypes outputType /** the motion output type */
            );
            /**Returns  the nurb join segments 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool NurbJoinSegments
            (
            );
            /**Sets  the nurb join segments 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetNurbJoinSegments
            (
                bool nurbsJoinSegments /** the nurb join segments */
            );
            /**Returns  the nurb angle tolerance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double NurbAngleTolerance
            (
            );
            /**Sets  the nurb angle tolerance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetNurbAngleTolerance
            (
                double nurbsAngleTolerance /** the nurb angle tolerance */
            );
            /**Returns  the nurb fit tolerance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double NurbFitTolerance
            (
            );
            /**Sets  the nurb fit tolerance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetNurbFitTolerance
            (
                double nurbsFitTolerance /** the nurb fit tolerance */
            );
            /**Returns  the spline fit tolerance type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ArcOutputTypeCiBuilder::SplineFitToleranceTypes SplineFitToleranceType
            (
            );
            /**Sets  the spline fit tolerance type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetSplineFitToleranceType
            (
                NXOpen::CAM::ArcOutputTypeCiBuilder::SplineFitToleranceTypes outputType /** the spline fit tolerance type */
            );
            /**Returns  the spline fit tolerance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double SplineFitTolerance
            (
            );
            /**Sets  the spline fit tolerance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetSplineFitTolerance
            (
                double splineFitTolerance /** the spline fit tolerance */
            );
            /**Returns  the spline line output type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ArcOutputTypeCiBuilder::SplineLineOutputTypes SplineLineOutputType
            (
            );
            /**Sets  the spline line output type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetSplineLineOutputType
            (
                NXOpen::CAM::ArcOutputTypeCiBuilder::SplineLineOutputTypes outputType /** the spline line output type */
            );
            /**Returns  the spline arc output type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ArcOutputTypeCiBuilder::SplineArcOutputTypes SplineArcOutputType
            (
            );
            /**Sets  the spline arc output type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetSplineArcOutputType
            (
                NXOpen::CAM::ArcOutputTypeCiBuilder::SplineArcOutputTypes outputType /** the spline arc output type */
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
