#ifndef NXOpen_DRAWINGS_ORIENTATIONVIEWSTYLE_HXX_INCLUDED
#define NXOpen_DRAWINGS_ORIENTATIONVIEWSTYLE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_OrientationViewStyle.ja
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
#include <NXOpen/Preferences_IOrientationViewPreferences.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_drawings_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Drawings
    {
        class OrientationViewStyle;
    }
    namespace Drawings
    {
        class ViewStyle;
    }
    class Direction;
    namespace Preferences
    {
        class IOrientationViewPreferences;
    }
    class Xform;
    namespace Drawings
    {
        class OrientationViewStyleImpl;
        /** Represents set of Orientation View Style Preferences applicable to drafting views.  <br> To obtain an instance of this class use @link Drawings::ViewStyle::Orientation Drawings::ViewStyle::Orientation@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  OrientationViewStyle: public virtual Preferences::IOrientationViewPreferences
        {
            private: OrientationViewStyleImpl * m_orientationviewstyle_impl;
            private: NXOpen::Drawings::ViewStyle* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit OrientationViewStyle(NXOpen::Drawings::ViewStyle *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~OrientationViewStyle();
            /**Returns  the rotation plane. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: NXOpen::Xform * RotationPlane
            (
            );
            /**Sets  the rotation plane. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetRotationPlane
            (
                NXOpen::Xform * plane /** plane */ 
            );
            /**Returns  the rotation in x-direction for the drawing member view which stays 
                       parallel to the x-axis drawing coordinate. The orientation of the view is 
                       associative to the x-direction.
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: NXOpen::Direction * RotationXDirection
            (
            );
            /**Sets  the rotation in x-direction for the drawing member view which stays 
                       parallel to the x-axis drawing coordinate. The orientation of the view is 
                       associative to the x-direction.
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetRotationXDirection
            (
                NXOpen::Direction * xDirection /** x direction */ 
            );
            /** Reverse the rotation vector. The direction of this vector 
                       determines how the view is rendered. 
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void ReverseRotationVector
            (
            );
            /** Reverse the hinge line. The direction of this vector 
                       determines how the view is rendered. 
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void ReverseHingeLine
            (
            );
            /** Removes the associativity to the defined plane (if it existed) and returns 
                      the member view to its orientation with the model with respect to the Absolute 
                      Coordinate System.
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void Restore
            (
            );
            /**Sets  the hinge line for an existing auxillary view.
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetHingeLine
            (
                NXOpen::Direction * hingeLine /** hinge line */ 
            );
            /**Returns  the hinge line for an existing auxillary view.
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * HingeLine
            (
            );
            /** Orients the view.  
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void OrientView
            (
                const NXOpen::Matrix3x3 & matrix /** Orientation relative to the absolute coordinate system.
                                                    Must be orthonormal. */
            );
        }; //lint !e1712 default constructor not defined for class  

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
