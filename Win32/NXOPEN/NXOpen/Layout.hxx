#ifndef NXOpen_LAYOUT_HXX_INCLUDED
#define NXOpen_LAYOUT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Layout.ja
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
#include <NXOpen/LayoutDefinition.hxx>
#include <NXOpen/NXObject.hxx>
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
    class Layout;
    class LayoutDefinition;
    class ModelingView;
    class NXObject;
    class View;
    class _LayoutBuilder;
    class LayoutImpl;
    /** Represents a layout. 
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  Layout : public NXObject
    {
        private: LayoutImpl * m_layout_impl;
        private: friend class  _LayoutBuilder;
        protected: Layout();
        public: ~Layout();
        /** Replaces a @link ModelingView ModelingView@endlink  with another one at a specified position.
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void ReplaceView
        (
            NXOpen::ModelingView * view /** New view to replace old view */,
            int row /** Row of view to be replaced */,
            int column /** Column of view to be replaced */,
            bool performFitView /** Flag that indicates for the system to perform a fit before 
                                         displaying the view.  Otherwise the system displays the 
                                         view at the scale at which it was last saved. */
        );
        /** Replaces a @link ModelingView ModelingView@endlink  with another one.
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void ReplaceView
        (
            NXOpen::ModelingView * oldView /** Old view to be replaced */,
            NXOpen::ModelingView * newView /** New view to replace old view  */,
            bool performFitView /** Flag to indicate for the system to perform a Fit before 
                                            displaying the view.  Otherwise the system will display 
                                            the view at the scale at which they were last saved.*/
        );
        /**Returns  the definition of the layout. 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::LayoutDefinition * Definition
        (
        );
        /** Returns the @link View View@endlink s of the layout. @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: std::vector<NXOpen::View *> GetViews
        (
        );
        /**Returns  whether the layout is displayed or not.
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: bool DisplayStatus
        (
        );
        /** Opens a layout.  The Drafting application does not support this method and 
            if used, throws an exception. 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void Open
        (
        );
        /** Saves a layout. Drafting does not support this method.
            If you call this method within the Drafting application or when displaying a drawing sheet,
            it throws an exception.
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void Save
        (
        );
        /** Saves a layout with a different name. If a name contains lowercase characters,
            the system converts them to uppercase.  Drafting does not support this method.
            If you call this method within the Drafting application or when displaying a drawing sheet,
            it throws an exception. @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Layout * SaveAs
        (
            const NXString & layoutName /** Name to save layout as  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /** Saves a layout with a different name. If a name contains lowercase characters,
            the system converts them to uppercase.  Drafting does not support this method.
            If you call this method within the Drafting application or when displaying a drawing sheet,
            it throws an exception. @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        NXOpen::Layout * SaveAs
        (
            const char * layoutName /** Name to save layout as  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
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
