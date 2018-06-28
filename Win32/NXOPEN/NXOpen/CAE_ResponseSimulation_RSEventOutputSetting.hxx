#ifndef NXOpen_CAE_RESPONSESIMULATION_RSEVENTOUTPUTSETTING_HXX_INCLUDED
#define NXOpen_CAE_RESPONSESIMULATION_RSEVENTOUTPUTSETTING_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ResponseSimulation_RSEventOutputSetting.ja
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
        namespace ResponseSimulation
        {
            class RSEventOutputSetting;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class _RSEventOutputSettingBuilder;
            class RSEventOutputSettingImpl;
            /** Reprensents the output setting for an event 
             <br>  Created in NX5.0.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  RSEventOutputSetting : public TaggedObject
            {
                private: RSEventOutputSettingImpl * m_rseventoutputsetting_impl;
                private: friend class  _RSEventOutputSettingBuilder;
                protected: RSEventOutputSetting();
                public: ~RSEventOutputSetting();
                /**Returns  the option to save FEM information with evaluation results. The option could not be
                        changed after the event is created. 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: bool FemGeometrySaveOption
                (
                );
                /**Sets  the option to save FEM information with evaluation results. The option could not be
                        changed after the event is created. 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetFemGeometrySaveOption
                (
                    bool saveFemGeometry /** save fem geometry */ 
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
