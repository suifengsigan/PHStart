#ifndef NXOpen_DRAWINGS_BASEVIEW_HXX_INCLUDED
#define NXOpen_DRAWINGS_BASEVIEW_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_BaseView.ja
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
#include <NXOpen/Drawings_DraftingView.hxx>
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
        class BaseView;
    }
    namespace Drawings
    {
        class DraftingView;
    }
    namespace Drawings
    {
        class _BaseViewBuilder;
        class BaseViewImpl;
        /** Represents a Base View. 
                A base view is a modeling view that you import onto a drawing.
                The base view can be a standalone view or a parent view
                for other drawings types such as a section view.  <br> To create or edit an instance of this class, use @link Drawings::BaseViewBuilder Drawings::BaseViewBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  BaseView : public Drawings::DraftingView
        {
            private: BaseViewImpl * m_baseview_impl;
            private: friend class  _BaseViewBuilder;
            protected: BaseView();
            public: ~BaseView();
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
