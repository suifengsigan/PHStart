#ifndef NXOpen_PLOTSOURCEBUILDER_HXX_INCLUDED
#define NXOpen_PLOTSOURCEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     PlotSourceBuilder.ja
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
#include <NXOpen/NXObject.hxx>
#include <NXOpen/PlotSourceBuilder.hxx>
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
    class PlotSourceBuilder;
    class NXObject;
    class _PlotSourceBuilderBuilder;
    class PlotSourceBuilderImpl;
    /**
        Represents a @link PlotSourceBuilder PlotSourceBuilder@endlink 
        
        All sheets provided must be in the displayed part.
        
     <br>  Created in NX5.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  PlotSourceBuilder : public NXObject
    {
        private: PlotSourceBuilderImpl * m_plotsourcebuilder_impl;
        private: friend class  _PlotSourceBuilderBuilder;
        protected: PlotSourceBuilder();
        public: ~PlotSourceBuilder();
        /** Gets all the sheets in the part file @return  
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: std::vector<NXOpen::NXObject *> GetSheets
        (
        );
        /** Sets all the sheets in the part file
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: void SetSheets
        (
            const std::vector<NXOpen::NXObject *> & sheets /** sheets */ 
        );
        /**Returns  the number of sheets selected 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: int SelectedSheets
        (
        );
        /**Sets  the number of sheets selected 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: void SetSelectedSheets
        (
            int nSheets /** nsheets */ 
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
