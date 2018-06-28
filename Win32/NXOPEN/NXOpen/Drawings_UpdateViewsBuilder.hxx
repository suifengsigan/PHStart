#ifndef NXOpen_DRAWINGS_UPDATEVIEWSBUILDER_HXX_INCLUDED
#define NXOpen_DRAWINGS_UPDATEVIEWSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_UpdateViewsBuilder.ja
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
#include <NXOpen/Builder.hxx>
#include <NXOpen/Drawings_UpdateViewsBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
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
        class UpdateViewsBuilder;
    }
    class Builder;
    class SelectObjectList;
    namespace Drawings
    {
        class _UpdateViewsBuilderBuilder;
        class UpdateViewsBuilderImpl;
        /**
        	Represents a @link Drawings::UpdateViewsBuilder Drawings::UpdateViewsBuilder@endlink 
        	 <br> To create a new instance of this class, use @link Drawings::DraftingViewCollection::CreateUpdateViewsBuilder Drawings::DraftingViewCollection::CreateUpdateViewsBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  UpdateViewsBuilder : public Builder
        {
            private: UpdateViewsBuilderImpl * m_updateviewsbuilder_impl;
            private: friend class  _UpdateViewsBuilderBuilder;
            protected: UpdateViewsBuilder();
            public: ~UpdateViewsBuilder();
            /**Returns  the selected views 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: NXOpen::SelectObjectList * Views
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
