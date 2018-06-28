#ifndef NXOpen_CONIC_HXX_INCLUDED
#define NXOpen_CONIC_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Conic.ja
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
#include <NXOpen/Curve.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class Conic;
    class Curve;
    class NXMatrix;
    class _ConicBuilder;
    class ConicImpl;
    /** Represents a conic curve.  The conic lies in the X-Y plane of the 
        orientation matrix for this conic.  The normal is along the Z axis
        of the matrix and the rotation angle is measured relative to the
        X and Y axes of the matrix.  The rotation angle of an ellipse is
        the angle at which the major axis is tilted in the counterclockwise
        direction from the X axis.  The rotation angle of a parabola is the
        angle formed between the axis of symmetry and the X axis. It is 
        measured in a counterclockwise direction with a pivot point at the
        vertex.  The rotation angle of a hyperbola is the angle at which 
        the semi-transverse axis makes with the X axis.  The pivot point is
        at the center of the hyperbola and the angle is measured in
        a counterclockwise direction.  In the case of an arc, the rotation 
        angle is always zero.   <br> This is an abstract class, and cannot be instantiated <br> 
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  Conic : public Curve
    {
        private: ConicImpl * m_conic_impl;
        private: friend class  _ConicBuilder;
        protected: Conic();
        public: ~Conic();
        /**Returns  the center. 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Point3d CenterPoint
        (
        );
        /**Returns  the rotation angle. 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: double RotationAngle
        (
        );
        /**Returns  the orientation matrix.  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::NXMatrix * Matrix
        (
        );
        /** Gets the orientation of the conic. 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: void GetOrientation
        (
            NXOpen::Point3d* center /** center */ ,
            NXOpen::Vector3d* xDirection /** x direction */ ,
            NXOpen::Vector3d* yDirection /** y direction */ 
        );
        /** Sets the center of the conic. 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: void SetOrientation
        (
            const NXOpen::Point3d & center /** center */ ,
            const NXOpen::Vector3d & xDirection /** x direction */ ,
            const NXOpen::Vector3d & yDirection /** y direction */ 
        );
    };
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
