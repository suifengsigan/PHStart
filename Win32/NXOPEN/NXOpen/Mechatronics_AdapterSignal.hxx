#ifndef NXOpen_MECHATRONICS_ADAPTERSIGNAL_HXX_INCLUDED
#define NXOpen_MECHATRONICS_ADAPTERSIGNAL_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_AdapterSignal.ja
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
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/libnxopencpp_mechatronics_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Mechatronics
    {
        class AdapterSignal;
    }
    class DisplayableObject;
    namespace Mechatronics
    {
        class _AdapterSignalBuilder;
        class AdapterSignalImpl;
        /** Represents the Adapter Signal class.  <br> To create or edit an instance of this class, use @link Mechatronics::AdapterSignalBuilder Mechatronics::AdapterSignalBuilder@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  AdapterSignal : public DisplayableObject
        {
            private: AdapterSignalImpl * m_adaptersignal_impl;
            private: friend class  _AdapterSignalBuilder;
            protected: AdapterSignal();
            public: ~AdapterSignal();
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
