#ifndef NXOpen_CAE_OPTIMIZATION_TBSOUTPUTCONTROLOPTIONS_HXX_INCLUDED
#define NXOpen_CAE_OPTIMIZATION_TBSOUTPUTCONTROLOPTIONS_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_Optimization_TBSOutputControlOptions.ja
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
#include <NXOpen/CAE_Optimization_TBSOutputControlOptions.hxx>
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
        namespace Optimization
        {
            class TBSOutputControlOptions;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class _TBSOutputControlOptionsBuilder;
            class TBSOutputControlOptionsImpl;
            /** Represents the output result control options of the optimization 
             <br>  Created in NX8.0.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  TBSOutputControlOptions : public TaggedObject
            {
                /** Defines the op2 output option */
                public: enum Op2Option
                {
                    Op2OptionNone/** Donot output op2 result */,
                    Op2OptionFirstLast/** Output op2 results of first and last iteration */,
                    Op2OptionAll/** Output op2 results of all iterations */
                };

                private: TBSOutputControlOptionsImpl * m_tbsoutputcontroloptions_impl;
                private: friend class  _TBSOutputControlOptionsBuilder;
                protected: TBSOutputControlOptions();
                public: ~TBSOutputControlOptions();
                /**Returns  whether to use a custom cratch directory or not when solving 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: bool HasCustomScratchDirectory
                (
                );
                /**Sets  whether to use a custom cratch directory or not when solving 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : cae_opt_topo ("NX Topology Optimization") OR cae_opt_topobead ("NX Bead Optimization") OR cae_opt_toposhape ("NX Shape Optimization") */
                public: void SetHasCustomScratchDirectory
                (
                    bool hasCustomScrathDir /** hascustomscrathdir */ 
                );
                /**Returns  the custom cratch directory for solving 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXString CustomScratchDirectory
                (
                );
                /**Sets  the custom cratch directory for solving 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : cae_opt_topo ("NX Topology Optimization") OR cae_opt_topobead ("NX Bead Optimization") OR cae_opt_toposhape ("NX Shape Optimization") */
                public: void SetCustomScratchDirectory
                (
                    const NXString & customScrathDir /** customscrathdir */ 
                );
                /**Sets  the custom cratch directory for solving 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : cae_opt_topo ("NX Topology Optimization") OR cae_opt_topobead ("NX Bead Optimization") OR cae_opt_toposhape ("NX Shape Optimization") */
                void SetCustomScratchDirectory
                (
                    const char * customScrathDir /** customscrathdir */ 
                );
                /**Returns  the op2 output control option 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::CAE::Optimization::TBSOutputControlOptions::Op2Option Op2OutputOption
                (
                );
                /**Sets  the op2 output control option 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : cae_opt_topo ("NX Topology Optimization") OR cae_opt_topobead ("NX Bead Optimization") OR cae_opt_toposhape ("NX Shape Optimization") */
                public: void SetOp2OutputOption
                (
                    NXOpen::CAE::Optimization::TBSOutputControlOptions::Op2Option op2Option /** op2option */ 
                );
                /**Returns  whether to run optimization job in foreground or not when solving 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: bool IsJobRunInForeground
                (
                );
                /**Sets  whether to run optimization job in foreground or not when solving 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : cae_opt_topo ("NX Topology Optimization") OR cae_opt_topobead ("NX Bead Optimization") OR cae_opt_toposhape ("NX Shape Optimization") */
                public: void SetJobRunInForeground
                (
                    bool isJobRunInForeground /** isjobruninforeground */ 
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