#ifndef NXOpen_CAE_RESPONSESIMULATION_NODALFUNCTIONEXCITATIONBUILDER_HXX_INCLUDED
#define NXOpen_CAE_RESPONSESIMULATION_NODALFUNCTIONEXCITATIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ResponseSimulation_NodalFunctionExcitationBuilder.ja
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
#include <NXOpen/CAE_ResponseSimulation_ExcitationBuilder.hxx>
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
            class NodalFunctionExcitationBuilder;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class ExcitationBuilder;
        }
    }
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class _NodalFunctionExcitationBuilderBuilder;
            class NodalFunctionExcitationBuilderImpl;
            /** Represents the manager to @link CAE::ResponseSimulation::NodalFunctionExcitation CAE::ResponseSimulation::NodalFunctionExcitation@endlink . 
                The objects of @link CAE::ResponseSimulation::NodalFunctionExcitation CAE::ResponseSimulation::NodalFunctionExcitation@endlink  
                can be created or edited on through this class  <br> This is an abstract class, and cannot be created. <br> 
             <br>  Created in NX5.0.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  NodalFunctionExcitationBuilder : public CAE::ResponseSimulation::ExcitationBuilder
            {
                private: NodalFunctionExcitationBuilderImpl * m_nodalfunctionexcitationbuilder_impl;
                private: friend class  _NodalFunctionExcitationBuilderBuilder;
                protected: NodalFunctionExcitationBuilder();
                public: ~NodalFunctionExcitationBuilder();
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
