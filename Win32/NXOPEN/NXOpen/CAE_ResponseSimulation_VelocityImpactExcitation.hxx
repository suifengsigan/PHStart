#ifndef NXOpen_CAE_RESPONSESIMULATION_VELOCITYIMPACTEXCITATION_HXX_INCLUDED
#define NXOpen_CAE_RESPONSESIMULATION_VELOCITYIMPACTEXCITATION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ResponseSimulation_VelocityImpactExcitation.ja
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
#include <NXOpen/CAE_ResponseSimulation_Excitation.hxx>
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
            class VelocityImpactExcitation;
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
            class _VelocityImpactExcitationBuilder;
            class VelocityImpactExcitationImpl;
            /** Represents a velocity impact excitation  <br> To create or edit an instance of this class, use @link CAE::ResponseSimulation::VelocityImpactExcitationBuilder CAE::ResponseSimulation::VelocityImpactExcitationBuilder@endlink  <br> 
             <br>  Created in NX6.0.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  VelocityImpactExcitation : public CAE::ResponseSimulation::Excitation
            {
                private: VelocityImpactExcitationImpl * m_velocityimpactexcitation_impl;
                private: friend class  _VelocityImpactExcitationBuilder;
                protected: VelocityImpactExcitation();
                public: ~VelocityImpactExcitation();
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
