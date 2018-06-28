#ifndef NXOpen_CAE_RESULTSENVELOPEBUILDER_HXX_INCLUDED
#define NXOpen_CAE_RESULTSENVELOPEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ResultsEnvelopeBuilder.ja
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
#include <NXOpen/CAE_ResultsManipulationBuilder.hxx>
#include <NXOpen/CAE_ResultsEnvelopeBuilder.hxx>
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
        class ResultsEnvelopeBuilder;
    }
    namespace CAE
    {
        class Result;
    }
    namespace CAE
    {
        class ResultParameters;
    }
    namespace CAE
    {
        class ResultsManipulationBuilder;
    }
    namespace CAE
    {
        class _ResultsEnvelopeBuilderBuilder;
        class ResultsEnvelopeBuilderImpl;
        /** Represents a @link CAE::ResultsEnvelopeBuilder CAE::ResultsEnvelopeBuilder@endlink   <br> To obtain an instance of this class use @link Session::ResultManager Session::ResultManager@endlink . <br> 
         <br>  Created in NX7.5.2.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  ResultsEnvelopeBuilder : public CAE::ResultsManipulationBuilder
        {
            /** Operation */
            public: enum Operation
            {
                OperationMinimum/** minimum */ ,
                OperationMaximum/** maximum */ 
            };

            /** Incompatible results options */
            public: enum IncompatibleResults
            {
                IncompatibleResultsSkip/** skip */ ,
                IncompatibleResultsAbort/** abort */ 
            };

            /** No data options */
            public: enum NoData
            {
                NoDataSkip/** skip */ ,
                NoDataZeroFill/** zero fill */ 
            };

            private: ResultsEnvelopeBuilderImpl * m_resultsenvelopebuilder_impl;
            private: friend class  _ResultsEnvelopeBuilderBuilder;
            protected: ResultsEnvelopeBuilder();
            public: ~ResultsEnvelopeBuilder();
            /** The results 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetResults
            (
                const std::vector<NXOpen::CAE::Result *> & results /** set results */,
                const std::vector<NXOpen::CAE::ResultParameters *> & parameters /** set result parameters */
            );
            /** The results 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetResults
            (
                const std::vector<int> & ids /** user-defined id of each result/parameter, will be output as an additional result type */,
                const std::vector<NXOpen::CAE::Result *> & results /** set results */,
                const std::vector<NXOpen::CAE::ResultParameters *> & parameters /** set result parameters */
            );
            /** The operation 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetOperation
            (
                NXOpen::CAE::ResultsEnvelopeBuilder::Operation operation /** set operation */
            );
            /** Set incompatible results option 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetIncompatibleResultsOption
            (
                NXOpen::CAE::ResultsEnvelopeBuilder::IncompatibleResults incompatibleResultsOption /** incompatibleresultsoption */ 
            );
            /** Set no data option 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetNoDataOption
            (
                NXOpen::CAE::ResultsEnvelopeBuilder::NoData noDataOption /** nodataoption */ 
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
