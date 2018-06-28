#ifndef NXOpen_DRAWINGS_VIEWSTYLEHIDDENLINESBUILDER_HXX_INCLUDED
#define NXOpen_DRAWINGS_VIEWSTYLEHIDDENLINESBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_ViewStyleHiddenLinesBuilder.ja
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
#include <NXOpen/Drawings_ViewStyleHiddenLinesBuilder.hxx>
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
        class ViewStyleHiddenLinesBuilder;
    }
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    class NXColor;
    namespace Drawings
    {
        class _ViewStyleHiddenLinesBuilderBuilder;
        class ViewStyleHiddenLinesBuilderImpl;
        /** Represents the HIDDEN LINES tab on the View Style Dialog (Drawings.ViewStyleHiddenLinesBuilder)
            
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  ViewStyleHiddenLinesBuilder : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            private: ViewStyleHiddenLinesBuilderImpl * m_viewstylehiddenlinesbuilder_impl;
            private: friend class  _ViewStyleHiddenLinesBuilderBuilder;
            protected: ViewStyleHiddenLinesBuilder();
            public: ~ViewStyleHiddenLinesBuilder();
            /**Returns  the hidden line toggle on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool HiddenLine
            (
            );
            /**Sets  the hidden line toggle on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetHiddenLine
            (
                bool hiddenLineToggle /** Sets a new hidden line toggle value on the hidden line sub-builder */
            );
            /**Returns  the color on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXColor * Color
            (
            );
            /**Sets  the color on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetColor
            (
                NXOpen::NXColor * color /** Sets a new color on the hidden line sub-builder */
            );
            /**Returns  the font on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Preferences::Font Font
            (
            );
            /**Sets  the font on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetFont
            (
                NXOpen::Preferences::Font font /** Sets a new font on the hidden line sub-builder */
            );
            /**Returns  the width on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Preferences::Width Width
            (
            );
            /**Sets  the width on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetWidth
            (
                NXOpen::Preferences::Width width /** Sets a new width on the hidden line sub-builder */
            );
            /**Returns  the reference edges only toggle on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool ReferenceEdgesOnly
            (
            );
            /**Sets  the reference edges only toggle on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetReferenceEdgesOnly
            (
                bool referenceEdgesOnlyToggle /** Sets a new reference edges only toggle value on the hidden line sub-builder */
            );
            /**Returns  the edges hidden by edges toggle on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool EdgesHiddenByEdges
            (
            );
            /**Sets  the edges hidden by edges toggle on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetEdgesHiddenByEdges
            (
                bool edgesHiddenByEdgesToggle /** Sets a new edges hidden by edges toggle value on the hidden line sub-builder */
            );
            /**Returns  the interfering solids toggle on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Preferences::HiddenLineInterferingSolidsOption InterferingSolids
            (
            );
            /**Sets  the interfering solids toggle on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetInterferingSolids
            (
                NXOpen::Preferences::HiddenLineInterferingSolidsOption interferingSolidsOption /** Sets a new interfering solids toggle value on the hidden line sub-builder */
            );
            /**Returns  the self hidden toggle on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool SelfHidden
            (
            );
            /**Sets  the self hidden toggle on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSelfHidden
            (
                bool selfHiddenToggle /** Sets a new self hidden toggle value on the hidden line sub-builder */
            );
            /**Returns  the include model curves toggle on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool IncludeModelCurves
            (
            );
            /**Sets  the include model curves toggle on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetIncludeModelCurves
            (
                bool includeModelCurvesToggle /** Sets a new include model curves toggle value on the hidden line sub-builder */
            );
            /**Returns  the small feature option on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Preferences::HiddenLineSmallFeatureOption SmallFeature
            (
            );
            /**Sets  the small feature option on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSmallFeature
            (
                NXOpen::Preferences::HiddenLineSmallFeatureOption smallFeatureOption /** Sets a new small feature option on the hidden line sub-builder */
            );
            /**Returns  the small features tolerance on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double SmallFeaturesTolerance
            (
            );
            /**Sets  the small features tolerance on the HIDDEN LINES tab of the View Style Dialog 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetSmallFeaturesTolerance
            (
                double smallFeaturesTolerance /** Sets a new small features tolerance value on the hidden line sub-builder */
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
