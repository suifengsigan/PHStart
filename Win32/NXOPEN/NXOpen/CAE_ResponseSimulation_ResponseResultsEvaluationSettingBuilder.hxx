#ifndef NXOpen_CAE_RESPONSESIMULATION_RESPONSERESULTSEVALUATIONSETTINGBUILDER_HXX_INCLUDED
#define NXOpen_CAE_RESPONSESIMULATION_RESPONSERESULTSEVALUATIONSETTINGBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ResponseSimulation_ResponseResultsEvaluationSettingBuilder.ja
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
#include <NXOpen/CAE_ResponseSimulation_DynamicResultEvaluationSettingBuilder.hxx>
#include <NXOpen/CAE_ResponseSimulation.hxx>
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
        namespace ResponseSimulation
        {
            class ResponseResultsEvaluationSettingBuilder;
        }
    }
    namespace CAE
    {
        class FEElement;
    }
    namespace CAE
    {
        class FENode;
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class DynamicResultEvaluationSettingBuilder;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class _ResponseResultsEvaluationSettingBuilderBuilder;
            class ResponseResultsEvaluationSettingBuilderImpl;
            /** This is a manager to the @link CAE::ResponseSimulation::ResponseResultsEvaluationSetting CAE::ResponseSimulation::ResponseResultsEvaluationSetting@endlink  class. 
                Object of type @link CAE::ResponseSimulation::ResponseResultsEvaluationSetting CAE::ResponseSimulation::ResponseResultsEvaluationSetting@endlink  can be 
                created and edited only through this class
                  <br> To create a new instance of this class, use @link CAE::ResponseSimulation::EvaluationSettingManager::CreateResponseResultsEvaluationSettingBuilder CAE::ResponseSimulation::EvaluationSettingManager::CreateResponseResultsEvaluationSettingBuilder@endlink  <br> 
             <br>  Created in NX5.0.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  ResponseResultsEvaluationSettingBuilder : public CAE::ResponseSimulation::DynamicResultEvaluationSettingBuilder
            {
                private: ResponseResultsEvaluationSettingBuilderImpl * m_responseresultsevaluationsettingbuilder_impl;
                private: friend class  _ResponseResultsEvaluationSettingBuilderBuilder;
                protected: ResponseResultsEvaluationSettingBuilder();
                public: ~ResponseResultsEvaluationSettingBuilder();
                /** Returns the destination nodes  @return  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: std::vector<NXOpen::CAE::FENode *> GetDestinationNodes
                (
                );
                /** Sets the destination nodes 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetDestinationNodes
                (
                    const std::vector<NXOpen::CAE::FENode *> & destinationNodes /** destination nodes */ 
                );
                /** Returns the destination elements  @return  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: std::vector<NXOpen::CAE::FEElement *> GetDestinationElements
                (
                );
                /** Sets the destination elements 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetDestinationElements
                (
                    const std::vector<NXOpen::CAE::FEElement *> & destinationElement /** destination element */ 
                );
                /** Returns the output options  @return  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: std::vector<NXOpen::CAE::ResponseSimulation::EvaluationResultType> GetOutputOptions
                (
                );
                /** Sets the output options 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetOutputOptions
                (
                    const std::vector<NXOpen::CAE::ResponseSimulation::EvaluationResultType> & outputOptions /** output options */ 
                );
                /**Returns  the method choosed to define response domain 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: NXOpen::CAE::ResponseSimulation::ResponseDomainDefinitionMethod ResponseDomainDefinitionOption
                (
                );
                /**Sets  the method choosed to define response domain 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetResponseDomainDefinitionOption
                (
                    NXOpen::CAE::ResponseSimulation::ResponseDomainDefinitionMethod definitionMethod /** definition method */ 
                );
                /**Returns  the method choosed to define select point value. Only available when response domain is 
                         @link CAE::ResponseSimulation::ResponseDomainDefinitionMethodKeyIn CAE::ResponseSimulation::ResponseDomainDefinitionMethodKeyIn@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: double PointValue
                (
                );
                /**Sets  the method choosed to define select point value. Only available when response domain is 
                         @link CAE::ResponseSimulation::ResponseDomainDefinitionMethodKeyIn CAE::ResponseSimulation::ResponseDomainDefinitionMethodKeyIn@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetPointValue
                (
                    double pointValue /** point value */ 
                );
                /** Returns the points value list  @return  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: std::vector<double> GetPointsValueList
                (
                );
                /** Sets the points value list 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetPointsValueList
                (
                    const std::vector<double> & pointsValueList /** points value list */ 
                );
                /**Returns  the start value of domain setting. Only available when response domain is 
                         @link CAE::ResponseSimulation::ResponseDomainDefinitionMethodStartEndPoint CAE::ResponseSimulation::ResponseDomainDefinitionMethodStartEndPoint@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: double StartPoint
                (
                );
                /**Sets  the start value of domain setting. Only available when response domain is 
                         @link CAE::ResponseSimulation::ResponseDomainDefinitionMethodStartEndPoint CAE::ResponseSimulation::ResponseDomainDefinitionMethodStartEndPoint@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetStartPoint
                (
                    double startPoint /** start point */ 
                );
                /**Returns  the end value of domain setting. Only available when response domain is 
                         @link CAE::ResponseSimulation::ResponseDomainDefinitionMethodStartEndPoint CAE::ResponseSimulation::ResponseDomainDefinitionMethodStartEndPoint@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: double EndPoint
                (
                );
                /**Sets  the end value of domain setting. Only available when response domain is 
                         @link CAE::ResponseSimulation::ResponseDomainDefinitionMethodStartEndPoint CAE::ResponseSimulation::ResponseDomainDefinitionMethodStartEndPoint@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetEndPoint
                (
                    double endPoint /** end point */ 
                );
                /**Returns  the decimation order of domain setting. Only available when response domain is
                         @link CAE::ResponseSimulation::ResponseDomainDefinitionMethodStartEndPoint CAE::ResponseSimulation::ResponseDomainDefinitionMethodStartEndPoint@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: int DecimationOrder
                (
                );
                /**Sets  the decimation order of domain setting. Only available when response domain is
                         @link CAE::ResponseSimulation::ResponseDomainDefinitionMethodStartEndPoint CAE::ResponseSimulation::ResponseDomainDefinitionMethodStartEndPoint@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetDecimationOrder
                (
                    int decimationOrder /** decimation order */ 
                );
            };
        }
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
