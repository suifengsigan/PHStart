#ifndef NXOpen_GEOMETRICUTILITIES_RECTANGULARPATTERN_HXX_INCLUDED
#define NXOpen_GEOMETRICUTILITIES_RECTANGULARPATTERN_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricUtilities_RectangularPattern.ja
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
#include <NXOpen/GeometricUtilities_DistancePatternSpacing.hxx>
#include <NXOpen/GeometricUtilities_HorizontalReference.hxx>
#include <NXOpen/GeometricUtilities_RectangularPattern.hxx>
#include <NXOpen/SelectObject.hxx>
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
        class RectangularPattern;
    }
    class Direction;
    namespace GeometricUtilities
    {
        class DistancePatternSpacing;
    }
    namespace GeometricUtilities
    {
        class HorizontalReference;
    }
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    class SelectNXObject;
    namespace GeometricUtilities
    {
        class _RectangularPatternBuilder;
        class RectangularPatternImpl;
        /** the rectangular pattern definition.  Allows specification along
                two linear axes, which may or may not be orthogonal. 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICUTILITIESEXPORT  RectangularPattern : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            /** defines any stagger to be defined on the pattern.  Stagger values are used to offset to every other
                        row/column of the pattern. */
            public: enum StaggerOptions
            {
                StaggerOptionsNone/** No stagger applied */,
                StaggerOptionsRow/** Stagger row */,
                StaggerOptionsColumn/** Stagger column */
            };

            /** defines simplified layout type for linear pattern.  */
            public: enum SimplifiedLayoutTypes
            {
                SimplifiedLayoutTypesSquare/** Square Layout */,
                SimplifiedLayoutTypesTriangle/** Triangle Layout */,
                SimplifiedLayoutTypesDiamond/** Diamond Layout */
            };

            private: RectangularPatternImpl * m_rectangularpattern_impl;
            private: friend class  _RectangularPatternBuilder;
            protected: RectangularPattern();
            public: ~RectangularPattern();
            /**Returns  the x axis 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * XDirection
            (
            );
            /**Sets  the x axis 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetXDirection
            (
                NXOpen::Direction * xDirection /** xdirection */ 
            );
            /**Returns  the instance spacing along the x axis 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::DistancePatternSpacing * XSpacing
            (
            );
            /**Returns  the y axis, which can be any vector not parallel to the x axis 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * YDirection
            (
            );
            /**Sets  the y axis, which can be any vector not parallel to the x axis 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetYDirection
            (
                NXOpen::Direction * yDirection /** ydirection */ 
            );
            /**Returns  the instance spacing along the y axis 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::DistancePatternSpacing * YSpacing
            (
            );
            /**Returns  the direction object. This function gets X direction object of the 2D pattern. This call will result in an Exception if not called in 2D mode. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObject * XSelection
            (
            );
            /**Returns  the direction object. This function gets Y direction object of the 2D pattern. This call will result in an Exception if not called in 2D mode. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObject * YSelection
            (
            );
            /**Returns  the XSelection flip attribute. This function flips X selection object of the 2D pattern 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool XFlip
            (
            );
            /**Sets  the XSelection flip attribute. This function flips X selection object of the 2D pattern 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetXFlip
            (
                bool flip /** flip */ 
            );
            /**Returns  the YSelection flip attribute. This function flips Y selection object of the 2D pattern 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool YFlip
            (
            );
            /**Sets  the YSelection flip attribute. This function flips Y selection object of the 2D pattern 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetYFlip
            (
                bool flip /** flip */ 
            );
            /**Returns  the XSymmetry toggle attribute. This function gets the x Symmetry toggle value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool XSymmetryToggle
            (
            );
            /**Sets  the XSymmetry toggle attribute. This function gets the x Symmetry toggle value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetXSymmetryToggle
            (
                bool toggle /** toggle */ 
            );
            /**Returns  the YSymmetry toggle attribute. This function gets the y Symmetry toggle value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool YSymmetryToggle
            (
            );
            /**Sets  the YSymmetry toggle attribute. This function gets the y Symmetry toggle value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetYSymmetryToggle
            (
                bool toggle /** toggle */ 
            );
            /**Returns  the UseYDirection toggle attribute. This function gets the UseYDirection toggle value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool UseYDirectionToggle
            (
            );
            /**Sets  the UseYDirection toggle attribute. This function gets the UseYDirection toggle value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetUseYDirectionToggle
            (
                bool toggle /** toggle */ 
            );
            /**Returns  the type of stagger to be used by the pattern 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::RectangularPattern::StaggerOptions StaggerType
            (
            );
            /**Sets  the type of stagger to be used by the pattern 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetStaggerType
            (
                NXOpen::GeometricUtilities::RectangularPattern::StaggerOptions spaceType /** spacetype */ 
            );
            /**Returns  the option to generate the last item in a staggered row.  If 'true' the pattern will be
                        narrower on rows that have been staggered. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool CreateLastStaggered
            (
            );
            /**Sets  the option to generate the last item in a staggered row.  If 'true' the pattern will be
                        narrower on rows that have been staggered. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetCreateLastStaggered
            (
                bool create /** create */ 
            );
            /**Returns  the simplified layout type to be used by the pattern 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::RectangularPattern::SimplifiedLayoutTypes SimplifiedLayoutType
            (
            );
            /**Sets  the simplified layout type to be used by the pattern 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSimplifiedLayoutType
            (
                NXOpen::GeometricUtilities::RectangularPattern::SimplifiedLayoutTypes type /** type */ 
            );
            /**Returns  the horizontal reference 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::HorizontalReference * HorizontalRef
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
