#ifndef NXOpen_CAE_NXBCPLOTCONTOURS_HXX_INCLUDED
#define NXOpen_CAE_NXBCPLOTCONTOURS_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_NxBcPlotContours.ja
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
#include <NXOpen/CAE_NxBcPlotContours.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_cae_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAE
    {
        class NxBcPlotContours;
    }
    namespace CAE
    {
        class _NxBcPlotContoursBuilder;
        class NxBcPlotContoursImpl;
        /** Represents a @link CAE::NxBcPlotContours CAE::NxBcPlotContours@endlink  object returned from @link CAE::SimBcPlotContoursBuilder::CreatePlotObject CAE::SimBcPlotContoursBuilder::CreatePlotObject@endlink  in @link CAE::SimBcPlotContoursBuilder CAE::SimBcPlotContoursBuilder@endlink . 
                The @link CAE::NxBcPlotContours::PlotContour CAE::NxBcPlotContours::PlotContour@endlink  plots contour. 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  NxBcPlotContours : public TaggedObject
        {
            private: NxBcPlotContoursImpl * m_nxbcplotcontours_impl;
            private: friend class  _NxBcPlotContoursBuilder;
            protected: NxBcPlotContours();
            public: ~NxBcPlotContours();
            /** Plot @link CAE::SimBC CAE::SimBC@endlink  contour 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void PlotContour
            (
                int viewIndex /** viewindex */ 
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
