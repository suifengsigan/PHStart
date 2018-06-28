#ifndef NXOpen_DRAWINGS_VIEWSTYLEVIRTUALINTERSECTIONSBUILDER_HXX_INCLUDED
#define NXOpen_DRAWINGS_VIEWSTYLEVIRTUALINTERSECTIONSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_ViewStyleVirtualIntersectionsBuilder.ja
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
#include <NXOpen/Drawings_ViewStyleVirtualIntersectionsBuilder.hxx>
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/Preferences_ViewStylePreferencesData.hxx>
#include <NXOpen/TaggedObject.hxx>
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
        class ViewStyleVirtualIntersectionsBuilder;
    }
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    class NXColor;
    namespace Drawings
    {
        class _ViewStyleVirtualIntersectionsBuilderBuilder;
        class ViewStyleVirtualIntersectionsBuilderImpl;
        /** Represents the VIRTUAL INTERSECTIONS tab on the View Style Dialog (Drawings.ViewStyleVirtualIntersectionsBuilder)
            
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  ViewStyleVirtualIntersectionsBuilder : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            private: ViewStyleVirtualIntersectionsBuilderImpl * m_viewstylevirtualintersectionsbuilder_impl;
            private: friend class  _ViewStyleVirtualIntersectionsBuilderBuilder;
            protected: ViewStyleVirtualIntersectionsBuilder();
            public: ~ViewStyleVirtualIntersectionsBuilder();
            /**Returns  the virtual intersections toggle on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool VirtualIntersections
            (
            );
            /**Sets  the virtual intersections toggle on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetVirtualIntersections
            (
                bool virtualIntersectionsToggle /** Sets a new virtual intersections toggle value on the virtual intersections sub-builder */
            );
            /**Returns  the adjacent blends toggle on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool AdjacentBlends
            (
            );
            /**Sets  the adjacent blends toggle on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetAdjacentBlends
            (
                bool ajacentBlendsToggle /** Sets a new adjacent blends toggle value on the virtual intersections sub-builder */
            );
            /**Returns  the color on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXColor * Color
            (
            );
            /**Sets  the color on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetColor
            (
                NXOpen::NXColor * color /** Sets a new color on the virtual intersections sub-builder */
            );
            /**Returns  the font on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Preferences::Font Font
            (
            );
            /**Sets  the font on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetFont
            (
                NXOpen::Preferences::Font font /** Sets a new font on the virtual intersections sub-builder */
            );
            /**Returns  the width on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Preferences::Width Width
            (
            );
            /**Sets  the width on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetWidth
            (
                NXOpen::Preferences::Width width /** Sets a new width on the virtual intersections sub-builder */
            );
            /**Returns  the end gaps toggle on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool EndGaps
            (
            );
            /**Sets  the end gaps toggle on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetEndGaps
            (
                bool endGapsToggle /** Sets a new end gaps toggle value on the virtual intersections sub-builder */
            );
            /**Returns  the end gaps data on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double EndGapsDistance
            (
            );
            /**Sets  the end gaps data on the VIRTUAL INTERSECTIONS tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetEndGapsDistance
            (
                double endGapsData /** Sets new end gaps data on the virtual intersections sub-builder */
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
