#ifndef NXOpen_DRAWINGS_SELECTREGIONBUILDER_HXX_INCLUDED
#define NXOpen_DRAWINGS_SELECTREGIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_SelectRegionBuilder.ja
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
#include <NXOpen/Drawings_SelectRegionBuilder.hxx>
#include <NXOpen/SelectObject.hxx>
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
        class SelectRegionBuilder;
    }
    class Builder;
    namespace Drawings
    {
        class SelectDrawingRegion;
    }
    class NXObject;
    namespace Drawings
    {
        class _SelectRegionBuilderBuilder;
        class SelectRegionBuilderImpl;
        /** Creates the builder for associating the objects from the screen   <br> To create a new instance of this class, use @link Drawings::DrawingRegionCollection::CreateSelectRegionBuilder Drawings::DrawingRegionCollection::CreateSelectRegionBuilder@endlink  <br> 
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  SelectRegionBuilder : public Builder
        {
            private: SelectRegionBuilderImpl * m_selectregionbuilder_impl;
            private: friend class  _SelectRegionBuilderBuilder;
            protected: SelectRegionBuilder();
            public: ~SelectRegionBuilder();
            /**Returns  the get selected region 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::SelectDrawingRegion * SelectedRegion
            (
            );
            /** Set the associated  object 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_drafting_plus ("DraftingPlus") */
            public: void SetAssociatedObjects
            (
                const std::vector<NXOpen::NXObject *> & associateObject /** the list of objects to be associated */
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
