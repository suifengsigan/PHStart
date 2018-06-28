#ifndef NXOpen_TOOLING_DIEENGTRIMANGLECHECK_HXX_INCLUDED
#define NXOpen_TOOLING_DIEENGTRIMANGLECHECK_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_DieEngTrimAngleCheck.ja
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
#include <NXOpen/GeometricAnalysis_AnalysisObject.hxx>
#include <NXOpen/libnxopencpp_tooling_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Tooling
    {
        class DieEngTrimAngleCheck;
    }
    namespace GeometricAnalysis
    {
        class AnalysisObject;
    }
    namespace Tooling
    {
        class _DieEngTrimAngleCheckBuilder;
        class DieEngTrimAngleCheckImpl;
        /** Represents a die engineering trim angle check analysis object  <br> To create or edit an instance of this class, use @link Tooling::DieEngTrimAngleCheckBuilder Tooling::DieEngTrimAngleCheckBuilder@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  DieEngTrimAngleCheck : public GeometricAnalysis::AnalysisObject
        {
            private: DieEngTrimAngleCheckImpl * m_dieengtrimanglecheck_impl;
            private: friend class  _DieEngTrimAngleCheckBuilder;
            protected: DieEngTrimAngleCheck();
            public: ~DieEngTrimAngleCheck();
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
