#ifndef NXOpen_SINGLEMEASURE_HXX_INCLUDED
#define NXOpen_SINGLEMEASURE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SingleMeasure.ja
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
#include <NXOpen/GenericMeasure.hxx>
#include <NXOpen/MeasureManager.hxx>
#include <NXOpen/libnxopencpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class SingleMeasure;
    class GenericMeasure;
    class SingleMeasureImpl;
    /** Represents a single valued measurement 
     <br>  Created in NX4.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  SingleMeasure : public GenericMeasure
    {
        private: SingleMeasureImpl * m_singlemeasure_impl;
        /// \cond NX_NO_DOC 
        public: explicit SingleMeasure(void *ptr);
        /// \endcond 
        /**Returns  the value of the measurement 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: double Value
        (
        );
    }; //lint !e1712 default constructor not defined for class  

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
