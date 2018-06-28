#ifndef NXOpen_CAM_WEDMSTEPOVERBUILDER_HXX_INCLUDED
#define NXOpen_CAM_WEDMSTEPOVERBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_WedmStepoverBuilder.ja
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
#include <NXOpen/CAM_StepoverBuilder.hxx>
#include <NXOpen/CAM_StepoverBuilder.hxx>
#include <NXOpen/libnxopencpp_cam_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAM
    {
        class WedmStepoverBuilder;
    }
    namespace CAM
    {
        class StepoverBuilder;
    }
    namespace CAM
    {
        class _WedmStepoverBuilderBuilder;
        class WedmStepoverBuilderImpl;
        /**
            Represents a @link CAM::WedmStepoverBuilder CAM::WedmStepoverBuilder@endlink 
            
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  WedmStepoverBuilder : public CAM::StepoverBuilder
        {
            private: WedmStepoverBuilderImpl * m_wedmstepoverbuilder_impl;
            private: friend class  _WedmStepoverBuilderBuilder;
            protected: WedmStepoverBuilder();
            public: ~WedmStepoverBuilder();
            /**Returns  the stepover item type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::StepoverBuilder::StepoverTypes StepoverTypeType
            (
            );
            /**Sets  the stepover item type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetStepoverTypeType
            (
                NXOpen::CAM::StepoverBuilder::StepoverTypes newValue /** the stepover type */
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
