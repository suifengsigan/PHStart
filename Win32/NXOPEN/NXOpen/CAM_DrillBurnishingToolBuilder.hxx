#ifndef NXOpen_CAM_DRILLBURNISHINGTOOLBUILDER_HXX_INCLUDED
#define NXOpen_CAM_DRILLBURNISHINGTOOLBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_DrillBurnishingToolBuilder.ja
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
#include <NXOpen/CAM_DrillToolBuilder.hxx>
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
        class DrillBurnishingToolBuilder;
    }
    namespace CAM
    {
        class DrillToolBuilder;
    }
    namespace CAM
    {
        class _DrillBurnishingToolBuilderBuilder;
        class DrillBurnishingToolBuilderImpl;
        /** Represents a drill burnishing Tool Builder  <br> To create a new instance of this class, use @link CAM::NCGroupCollection::CreateDrillBurnishingToolBuilder CAM::NCGroupCollection::CreateDrillBurnishingToolBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  DrillBurnishingToolBuilder : public CAM::DrillToolBuilder
        {
            private: DrillBurnishingToolBuilderImpl * m_drillburnishingtoolbuilder_impl;
            private: friend class  _DrillBurnishingToolBuilderBuilder;
            protected: DrillBurnishingToolBuilder();
            public: ~DrillBurnishingToolBuilder();
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