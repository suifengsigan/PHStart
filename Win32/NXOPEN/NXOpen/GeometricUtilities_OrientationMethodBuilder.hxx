#ifndef NXOpen_GEOMETRICUTILITIES_ORIENTATIONMETHODBUILDER_HXX_INCLUDED
#define NXOpen_GEOMETRICUTILITIES_ORIENTATIONMETHODBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricUtilities_OrientationMethodBuilder.ja
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
#include <NXOpen/GeometricUtilities_LawBuilder.hxx>
#include <NXOpen/GeometricUtilities_OrientationMethodBuilder.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SelectObjectList.hxx>
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
        class OrientationMethodBuilder;
    }
    class Direction;
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    namespace GeometricUtilities
    {
        class LawBuilder;
    }
    class Point;
    class Section;
    class SelectFaceList;
    namespace GeometricUtilities
    {
        class _OrientationMethodBuilderBuilder;
        class OrientationMethodBuilderImpl;
        /**
            Represents a @link GeometricUtilities::OrientationMethodBuilder GeometricUtilities::OrientationMethodBuilder@endlink 
            
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICUTILITIESEXPORT  OrientationMethodBuilder : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            /** This enum represents the orientation option. By default, it is set to Fixed.
                        Angular Law orientation option is invalid if 2 guides are selected. */
            public: enum OrientationOptions
            {
                OrientationOptionsFixed/** Fixed */,
                OrientationOptionsByFaceNormals/** Face Normals */,
                OrientationOptionsByVectorDirection/** Vector Direction */,
                OrientationOptionsByAnotherCurve/** Another Curve */,
                OrientationOptionsByAPoint/** A Point */,
                OrientationOptionsByAngularLaw/** Angular Law */,
                OrientationOptionsByForcedDirection/** Forced Direction */
            };

            private: OrientationMethodBuilderImpl * m_orientationmethodbuilder_impl;
            private: friend class  _OrientationMethodBuilderBuilder;
            protected: OrientationMethodBuilder();
            public: ~OrientationMethodBuilder();
            /**Returns  the orientation option. Except for Fixed orientation method, additional parameters and/or inputs are required. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::OrientationMethodBuilder::OrientationOptions OrientationOption
            (
            );
            /**Sets  the orientation option. Except for Fixed orientation method, additional parameters and/or inputs are required. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetOrientationOption
            (
                NXOpen::GeometricUtilities::OrientationMethodBuilder::OrientationOptions orientationOption /** orientationoption */ 
            );
            /**Returns  the normal face list. For orientation by Face Normals, the second axis of the local coordinate system is aligned with the resultant 
                        of normals of the input faces. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectFaceList * NormalFaceList
            (
            );
            /**Returns  the orientation vector. For orientation by Vector, the second axis of the local coordinate system is aligned with the input vector. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * OrientationVector
            (
            );
            /**Sets  the orientation vector. For orientation by Vector, the second axis of the local coordinate system is aligned with the input vector. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetOrientationVector
            (
                NXOpen::Direction * orientationVector /** orientationvector */ 
            );
            /**Returns  the orientation curve. For orientation by Another Curve, the second axis of the local coordinate system is obtained by joining
                        corresponding points on the guide and the input section. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * OrientationCurve
            (
            );
            /**Returns  the orientation point. For orientation by a Point, the second axis is obtained with the equivalent of a three-sided ruled 
                        sheet between the guide string and the input point. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * OrientationPoint
            (
            );
            /**Sets  the orientation point. For orientation by a Point, the second axis is obtained with the equivalent of a three-sided ruled 
                        sheet between the guide string and the input point. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetOrientationPoint
            (
                NXOpen::Point * orientationPoint /** orientationpoint */ 
            );
            /**Returns  the angular law. For orientation by an Angular Law, the section rotation along the guide curve is governed by the input law. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::LawBuilder * AngularLaw
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
