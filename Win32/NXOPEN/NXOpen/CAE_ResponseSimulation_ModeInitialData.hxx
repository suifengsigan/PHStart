#ifndef NXOpen_CAE_RESPONSESIMULATION_MODEINITIALDATA_HXX_INCLUDED
#define NXOpen_CAE_RESPONSESIMULATION_MODEINITIALDATA_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ResponseSimulation_ModeInitialData.ja
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
            class ModeInitialData;
        }
    }
    class NXObject;
    namespace CAE
    {
        namespace ResponseSimulation
        {
            class _ModeInitialDataBuilder;
            class ModeInitialDataImpl;
            /** Represents the initial setting for a normal mode 
             <br>  Created in NX5.0.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  ModeInitialData : public NXObject
            {
                private: ModeInitialDataImpl * m_modeinitialdata_impl;
                private: friend class  _ModeInitialDataBuilder;
                protected: ModeInitialData();
                public: ~ModeInitialData();
                /** Returns normal mode ID  @return  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: int GetModeId
                (
                );
                /**Returns  the initial diaplacement 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: double InitialDisplacement
                (
                );
                /**Sets  the initial diaplacement 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetInitialDisplacement
                (
                    double initialDisplacement /** initial displacement */ 
                );
                /**Returns  the initial velocity 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: double InitialVelocity
                (
                );
                /**Sets  the initial velocity 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_response_anlys ("NX Response Analysis") */
                public: void SetInitialVelocity
                (
                    double initialVelocity /** initial velocity */ 
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
