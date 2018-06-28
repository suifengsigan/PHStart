#ifndef NXOpen_PREFERENCES_IPERSPECTIVEVIEWPREFERENCES_HXX_INCLUDED
#define NXOpen_PREFERENCES_IPERSPECTIVEVIEWPREFERENCES_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Preferences_IPerspectiveViewPreferences.ja
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
#include <NXOpen/libnxopencpp_preferences_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Preferences
    {
        class IPerspectiveViewPreferences;
    }
    namespace Preferences
    {
        /** Represents set of PerspectiveViewPreferences applicable to drafting views. 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_PREFERENCESEXPORT  IPerspectiveViewPreferences
        {
            virtual void EnsureVtableExists() {}
            public: virtual ~IPerspectiveViewPreferences() {}
        }; //lint !e1712 default constructor not defined for class  

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
