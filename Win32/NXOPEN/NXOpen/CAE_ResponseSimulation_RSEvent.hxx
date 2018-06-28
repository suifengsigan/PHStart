#ifndef NXOpen_CAE_RESPONSESIMULATION_RSEVENT_HXX_INCLUDED
#define NXOpen_CAE_RESPONSESIMULATION_RSEVENT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ResponseSimulation_RSEvent.ja
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
#include <NXOpen/CAE_ResponseSimulation_RSEventSolverParameters.hxx>
#include <NXOpen/NXObject.hxx>
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
            class RSEvent;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class CsdEvaluationSetting;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class ElementalFunctionEvaluationSetting;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class Excitation;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class LcrResultsEvaluationSetting;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class NodalFunctionEvaluationSetting;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class PeakValueEvaluationSetting;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class RSEventSolverParameters;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class ResponseResultsEvaluationSetting;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class RmsResultsEvaluationSetting;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class SensorEvaluationSetting;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class StrainGageEvaluationSetting;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class StrengthResultsEvaluationSetting;
        }
    }
    class NXObject;
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class _RSEventBuilder;
            class RSEventImpl;
            /** Represents a response analysis event  <br> To create or edit an instance of this class, use @link CAE::ResponseSimulation::RSEventBuilder CAE::ResponseSimulation::RSEventBuilder@endlink  <br> 
             <br>  Created in NX5.0.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  RSEvent : public NXObject
            {
                /** the type of reponse analysis event */
                public: enum Type
                {
                    TypeTransient/** transient */ ,
                    TypeFrequency/** frequency */ ,
                    TypeRandom/** random */ ,
                    TypeResponseSpectrum/** response spectrum */ ,
                    TypeDdam/** ddam */ ,
                    TypeStatic/** static */ 
                };

                /** the analysis type of response analysis event. Only available for
                       @link CAE::ResponseSimulation::RSEvent::TypeTransient CAE::ResponseSimulation::RSEvent::TypeTransient@endlink  and 
                       @link CAE::ResponseSimulation::RSEvent::TypeFrequency CAE::ResponseSimulation::RSEvent::TypeFrequency@endlink  */
                public: enum AnalysisType
                {
                    AnalysisTypeModeAcceleration/** mode acceleration */ ,
                    AnalysisTypeModeDisplacement/** mode displacement */ 
                };

                /** the result file type of event. */
                public: enum ResultFileType
                {
                    ResultFileTypeModalResponse/** Result file to be used as Restart File, which extension is ".eef" or ".sef" */,
                    ResultFileTypeFunctionResponse/** Result file to contain function response evaluation results, which extenstion is ".afu" */,
                    ResultFileTypeDynamicResponse/** Result file to contain dynamic response evaluation results, which extension is ".rs2" */
                };

                /** the spacing type. */
                public: enum SpacingType
                {
                    SpacingTypeEven/** even */ ,
                    SpacingTypeUneven/** uneven */ 
                };

                /** Represents the fromulation type. */
                public: enum DdamFormulationType
                {
                    DdamFormulationTypeStandard/** standard */ ,
                    DdamFormulationTypeUserDefined/** user defined */ 
                };

                /** the duration option */
                public: enum DurationOption
                {
                    DurationOptionExcitationFunction/** excitation function */ ,
                    DurationOptionUserDefined/** user defined */ 
                };

                private: RSEventImpl * m_rsevent_impl;
                private: friend class  _RSEventBuilder;
                protected: RSEvent();
                public: ~RSEvent();
                /** Returns the solver parameters  @return  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: NXOpen::CAE::ResponseSimulation::RSEventSolverParameters * GetSolverParameters
                (
                );
                /** Returns the option setting for calculating static offset result.
                        The staic offset calculation is only available to transient event  @return  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: bool GetCalculateStaticOffset
                (
                );
                /** Set the option setting for calculating static offset result. The static offset calculation is
                        only available to transient event 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetCalculateStaticOffset
                (
                    bool calculateStaticOffset /** calculatestaticoffset */ 
                );
                /** Returns the event name  @return  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: NXString GetEventName
                (
                );
                /** Sets the event name 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetEventName
                (
                    const NXString & eventName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                    bool renameResultFile /** if there are result files associated with the event, rename them or not*/
                );
                /** Sets the event name 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                void SetEventName
                (
                    const char * eventName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                    bool renameResultFile /** if there are result files associated with the event, rename them or not*/
                );
                /** Deletes a response simulation dynamic event, including all excitations
                            under it 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void Destroy
                (
                    bool deleteResultFile /** delete the result files associated with the solution or not */
                );
                /** Returns all excitations of an event  @return  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: std::vector<NXOpen::CAE::ResponseSimulation::Excitation *> GetExcitations
                (
                );
                /** Returns result file name of specified type  @return  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: NXString GetResultFileName
                (
                    NXOpen::CAE::ResponseSimulation::RSEvent::ResultFileType resultFileType /** result file type */ 
                );
                /** Exports event definition to a XML file 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void Export
                (
                    const NXString & eventDefinitionFile /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
                );
                /** Exports event definition to a XML file 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                void Export
                (
                    const char * eventDefinitionFile /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
                );
                /** Performs evaluation for modal function response. The results is stored in an AFU file, which file name
                        could be returned by @link CAE::ResponseSimulation::RSEvent::GetResultFileName CAE::ResponseSimulation::RSEvent::GetResultFileName@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void EvaluateModalFunctionResponse
                (
                );
                /** Performs evaluation for nodal function response. The results is stored in an AFU file, which file name
                        could be returned by @link CAE::ResponseSimulation::RSEvent::GetResultFileName CAE::ResponseSimulation::RSEvent::GetResultFileName@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void EvaluateNodalFunctionResponse
                (
                    NXOpen::CAE::ResponseSimulation::NodalFunctionEvaluationSetting * evaluationSetting /** evaluation setting */ 
                );
                /** Performs evaluation for elemental function response. The results is stored in an AFU file, which file name
                        could be returned by @link CAE::ResponseSimulation::RSEvent::GetResultFileName CAE::ResponseSimulation::RSEvent::GetResultFileName@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void EvaluateElementalFunctionResponse
                (
                    NXOpen::CAE::ResponseSimulation::ElementalFunctionEvaluationSetting * evaluationSetting /** evaluation setting */ 
                );
                /** Performs evaluation for CSD. The evaluation results will be stored in an AFU file, 
                        which name could be returned by @link CAE::ResponseSimulation::RSEvent::GetResultFileName CAE::ResponseSimulation::RSEvent::GetResultFileName@endlink  
                 <br>  Created in NX6.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void EvaluateCsd
                (
                    NXOpen::CAE::ResponseSimulation::CsdEvaluationSetting * evaluationSetting /** evaluation setting */ 
                );
                /** Performs evaluation for modal response. The results is getting eef file, which file name
                        could be returned by @link CAE::ResponseSimulation::RSEvent::GetResultFileName CAE::ResponseSimulation::RSEvent::GetResultFileName@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void EvaluateModalResponse
                (
                );
                /** Performs evaluation for response results. The results is stored in an RS2 file, which file name
                        could be returned by @link CAE::ResponseSimulation::RSEvent::GetResultFileName CAE::ResponseSimulation::RSEvent::GetResultFileName@endlink .  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void EvaluateResponseResults
                (
                    NXOpen::CAE::ResponseSimulation::ResponseResultsEvaluationSetting * evaluationSetting /** evaluation setting */ 
                );
                /** Performs evaluation for strength results. The results is stored in an RS2 file, which file name
                        could be returned by @link CAE::ResponseSimulation::RSEvent::GetResultFileName CAE::ResponseSimulation::RSEvent::GetResultFileName@endlink .  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void EvaluateStrengthResults
                (
                    NXOpen::CAE::ResponseSimulation::StrengthResultsEvaluationSetting * evaluationSetting /** evaluation setting */ 
                );
                /** Performs evaluation for peak value results. The results is stored in an RS2 file, which file name
                        could be returned by @link CAE::ResponseSimulation::RSEvent::GetResultFileName CAE::ResponseSimulation::RSEvent::GetResultFileName@endlink .  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void EvaluatePeakValueResults
                (
                    NXOpen::CAE::ResponseSimulation::PeakValueEvaluationSetting * evaluationSetting /** evaluation setting */ 
                );
                /** Perfroms evaluation for RMS results. The results is stored in an RS2 file, which file name
                        could be returned by @link CAE::ResponseSimulation::RSEvent::GetResultFileName CAE::ResponseSimulation::RSEvent::GetResultFileName@endlink . 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void EvaluateRmsResults
                (
                    NXOpen::CAE::ResponseSimulation::RmsResultsEvaluationSetting * evaluationSetting /** evaluation setting */ 
                );
                /** Performs evaluation for LCR results. The results is stored in an RS2 file, which file name
                        could be returned by @link CAE::ResponseSimulation::RSEvent::GetResultFileName CAE::ResponseSimulation::RSEvent::GetResultFileName@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void EvaluateLcrResults
                (
                    NXOpen::CAE::ResponseSimulation::LcrResultsEvaluationSetting * evaluationSetting /** evaluation setting */ 
                );
                /** Performs evaluation for sensor response. The results is stored in an AFU file, which file name
                        could be returned by @link CAE::ResponseSimulation::RSEvent::GetResultFileName CAE::ResponseSimulation::RSEvent::GetResultFileName@endlink  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void EvaluateSensorResponse
                (
                );
                /** Performs evaluation for sensor response. The results is stored in an AFU file, which file name
                        could be returned by @link CAE::ResponseSimulation::RSEvent::GetResultFileName CAE::ResponseSimulation::RSEvent::GetResultFileName@endlink  
                 <br>  Created in NX6.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void EvaluateSensorResponse
                (
                    NXOpen::CAE::ResponseSimulation::SensorEvaluationSetting * evaluationSetting /** evaluation setting */ 
                );
                /** Performs evaluation for strain gage response. The results is stored in an AFU file, which file name
                        could be returned by @link CAE::ResponseSimulation::RSEvent::GetResultFileName CAE::ResponseSimulation::RSEvent::GetResultFileName@endlink  
                 <br>  Created in NX6.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void EvaluateStrainGageResponse
                (
                    NXOpen::CAE::ResponseSimulation::StrainGageEvaluationSetting * evaluationSetting /** evaluation setting */ 
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
