#ifndef NXOpen_CAE_LAMINATEPOSTREPORTBUILDER_HXX_INCLUDED
#define NXOpen_CAE_LAMINATEPOSTREPORTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_LaminatePostReportBuilder.ja
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
#include <NXOpen/CAE_LaminatePostReportBuilder.hxx>
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
        class LaminatePostReportBuilder;
    }
    class Builder;
    namespace CAE
    {
        class _LaminatePostReportBuilderBuilder;
        class LaminatePostReportBuilderImpl;
        /** Represents a @link CAE::LaminatePostReport CAE::LaminatePostReport@endlink  builder  <br> There is no kf creator. <br> 
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  LaminatePostReportBuilder : public Builder
        {
            private: LaminatePostReportBuilderImpl * m_laminatepostreportbuilder_impl;
            private: friend class  _LaminatePostReportBuilderBuilder;
            protected: LaminatePostReportBuilder();
            public: ~LaminatePostReportBuilder();
            /**Returns  the name of the laminate post report setup 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: NXString Name
            (
            );
            /**Sets  the name of the laminate post report setup 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetName
            (
                const NXString & name /** name */ 
            );
            /**Sets  the name of the laminate post report setup 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            void SetName
            (
                const char * name /** name */ 
            );
            /** Get the selected results 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void GetSelectedResults
            (
                std::vector<NXString> & resultNames /** resultnames */ ,
                std::vector<NXString> & loadcaseNames /** loadcasenames */ ,
                std::vector<NXString> & iterationNames /** iterationnames */ 
            );
            /** Set the selected results 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_lam_composites ("Laminate Composites") */
            public: void SetSelectedResults
            (
                std::vector<NXString> & resultNames /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & loadcaseNames /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & iterationNames /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
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