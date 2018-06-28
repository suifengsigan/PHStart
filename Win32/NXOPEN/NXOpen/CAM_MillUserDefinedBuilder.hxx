#ifndef NXOpen_CAM_MILLUSERDEFINEDBUILDER_HXX_INCLUDED
#define NXOpen_CAM_MILLUSERDEFINEDBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_MillUserDefinedBuilder.ja
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
#include <NXOpen/CAM_UserDefinedOprBuilder.hxx>
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
        class MillUserDefinedBuilder;
    }
    namespace CAM
    {
        class UserDefinedOprBuilder;
    }
    namespace CAM
    {
        class _MillUserDefinedBuilderBuilder;
        class MillUserDefinedBuilderImpl;
        /** Represents a MillUserDefined Builder  <br> To create a new instance of this class, use @link CAM::OperationCollection::CreateMillUserDefinedBuilder CAM::OperationCollection::CreateMillUserDefinedBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  MillUserDefinedBuilder : public CAM::UserDefinedOprBuilder
        {
            private: MillUserDefinedBuilderImpl * m_milluserdefinedbuilder_impl;
            private: friend class  _MillUserDefinedBuilderBuilder;
            protected: MillUserDefinedBuilder();
            public: ~MillUserDefinedBuilder();
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
