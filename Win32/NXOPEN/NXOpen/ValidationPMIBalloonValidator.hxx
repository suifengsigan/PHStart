#ifndef NXOpen_VALIDATIONPMIBALLOONVALIDATOR_HXX_INCLUDED
#define NXOpen_VALIDATIONPMIBALLOONVALIDATOR_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     ValidationPMIBalloonValidator.ja
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
#include <NXOpen/ValidationAnnotationValidator.hxx>
#include <NXOpen/libnxopendebugsessioncpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class ValidationPMIBalloonValidator;
    class ValidationAnnotationValidator;
    class _ValidationPMIBalloonValidatorBuilder;
    class ValidationPMIBalloonValidatorImpl;
    /** validator for a PMI balloon note  <br> This is a test class. <br> 
     <br>  Created in NX7.5.1.  <br>  
    */
    class NXOPENDEBUGSESSIONCPPEXPORT  ValidationPMIBalloonValidator : public ValidationAnnotationValidator
    {
        private: ValidationPMIBalloonValidatorImpl * m_validationpmiballoonvalidator_impl;
        private: friend class  _ValidationPMIBalloonValidatorBuilder;
        protected: ValidationPMIBalloonValidator();
        public: ~ValidationPMIBalloonValidator();
    };
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
