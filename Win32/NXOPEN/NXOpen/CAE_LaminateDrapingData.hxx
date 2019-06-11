#ifndef NXOpen_CAE_LAMINATEDRAPINGDATA_HXX_INCLUDED
#define NXOpen_CAE_LAMINATEDRAPINGDATA_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_LaminateDrapingData.ja
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
        class LaminateDrapingData;
    }
    class NXObject;
    namespace CAE
    {
        class _LaminateDrapingDataBuilder;
        class LaminateDrapingDataImpl;
        /** Encapsulate the ply information related to the draping algorithm  <br> To create or edit an instance of this class, use @link CAE::LaminateDrapingDataBuilder CAE::LaminateDrapingDataBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  LaminateDrapingData : public NXObject
        {
            private: LaminateDrapingDataImpl * m_laminatedrapingdata_impl;
            private: friend class  _LaminateDrapingDataBuilder;
            protected: LaminateDrapingData();
            public: ~LaminateDrapingData();
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