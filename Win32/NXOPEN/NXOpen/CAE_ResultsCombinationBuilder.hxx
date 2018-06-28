#ifndef NXOpen_CAE_RESULTSCOMBINATIONBUILDER_HXX_INCLUDED
#define NXOpen_CAE_RESULTSCOMBINATIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ResultsCombinationBuilder.ja
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
#include <NXOpen/CAE_ResultsCombinationBuilder.hxx>
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
        class ResultsCombinationBuilder;
    }
    namespace CAE
    {
        class BaseResultType;
    }
    namespace CAE
    {
        class ResultsManipulationBuilder;
    }
    class Unit;
    namespace CAE
    {
        class _ResultsCombinationBuilderBuilder;
        class ResultsCombinationBuilderImpl;
        /** Represents a @link CAE::ResultsCombinationBuilder CAE::ResultsCombinationBuilder@endlink   <br> To obtain an instance of this class use @link Session::ResultManager Session::ResultManager@endlink . <br> 
         <br>  Created in NX7.5.2.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  ResultsCombinationBuilder : public CAE::ResultsManipulationBuilder
        {
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

            /** evaluation error options */
            public: enum EvaluationError
            {
                EvaluationErrorSkip/** skip */ ,
                EvaluationErrorZeroFill/** zero fill */ ,
                EvaluationErrorAbort/** abort */ 
            };

            private: ResultsCombinationBuilderImpl * m_resultscombinationbuilder_impl;
            private: friend class  _ResultsCombinationBuilderBuilder;
            protected: ResultsCombinationBuilder();
            public: ~ResultsCombinationBuilder();
            /** The result types 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetResultTypes
            (
                const std::vector<NXOpen::CAE::BaseResultType *> & types /** set result types */,
                std::vector<NXString> & names /** set result names   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** The result types 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetResultTypes
            (
                const std::vector<NXOpen::CAE::BaseResultType *> & types /** set result types */,
                std::vector<NXString> & names /** set result names   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const std::vector<NXOpen::Unit *> & units /** units */ 
            );
            /** The formula 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetFormula
            (
                const NXString & formula /** set formula   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** The formula 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            void SetFormula
            (
                const char * formula /** set formula   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Set incompatible results option 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetIncompatibleResultsOption
            (
                NXOpen::CAE::ResultsCombinationBuilder::IncompatibleResults incompatibleResultsOption /** incompatibleresultsoption */ 
            );
            /** Set no data option 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetNoDataOption
            (
                NXOpen::CAE::ResultsCombinationBuilder::NoData noDataOption /** nodataoption */ 
            );
            /** Set evaluation error option 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetEvaluationErrorOption
            (
                NXOpen::CAE::ResultsCombinationBuilder::EvaluationError evaluationErrorOption /** evaluationerroroption */ 
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
