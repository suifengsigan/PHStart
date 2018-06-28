#ifndef NXOpen_MECHATRONICS_RUNTIMEBEHAVIOR_HXX_INCLUDED
#define NXOpen_MECHATRONICS_RUNTIMEBEHAVIOR_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_RuntimeBehavior.ja
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
        class RuntimeBehavior;
    }
    class NXObject;
    namespace Mechatronics
    {
        class _RuntimeBehaviorBuilder;
        class RuntimeBehaviorImpl;
        /** Represents the Runtime Behavior class. Runtime Behavior is a generic runtime
            behavior that uses CLR code like C# to act with physical objects.  <br> To create or edit an instance of this class, use @link Mechatronics::RuntimeBehaviorBuilder Mechatronics::RuntimeBehaviorBuilder@endlink  <br> 
         <br>  Created in NX7.5.1.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  RuntimeBehavior : public NXObject
        {
            private: RuntimeBehaviorImpl * m_runtimebehavior_impl;
            private: friend class  _RuntimeBehaviorBuilder;
            protected: RuntimeBehavior();
            public: ~RuntimeBehavior();
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
