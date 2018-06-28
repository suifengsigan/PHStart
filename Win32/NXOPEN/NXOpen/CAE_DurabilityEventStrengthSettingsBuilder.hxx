#ifndef NXOpen_CAE_DURABILITYEVENTSTRENGTHSETTINGSBUILDER_HXX_INCLUDED
#define NXOpen_CAE_DURABILITYEVENTSTRENGTHSETTINGSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_DurabilityEventStrengthSettingsBuilder.ja
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
#include <NXOpen/Builder.hxx>
#include <NXOpen/CAE_DurabilityEventStrengthSettingsBuilder.hxx>
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
        class DurabilityEventStrengthSettingsBuilder;
    }
    class Builder;
    namespace CAE
    {
        class _DurabilityEventStrengthSettingsBuilderBuilder;
        class DurabilityEventStrengthSettingsBuilderImpl;
        /** Represents a builder class for the event strength settings.
                The event strength settings are the data which describe how to evaluate
                the strength and what to output for strength results.
             <br> To create a new instance of this class, use @link CAE::DurabilityStrengthCollection::CreateEventstrengthsettingsBuilder CAE::DurabilityStrengthCollection::CreateEventstrengthsettingsBuilder@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  DurabilityEventStrengthSettingsBuilder : public Builder
        {
            /** the stress criterion enum.*/
            public: enum StressCriterionEnum
            {
                StressCriterionEnumUltimateStress/** Ultimate Stress */,
                StressCriterionEnumYieldStress/** Yield Stress */
            };

            /** the stress type enum.*/
            public: enum StressTypeEnum
            {
                StressTypeEnumVonMises/** Von Mises*/,
                StressTypeEnumTresca/** Tresca */,
                StressTypeEnumMaximumPrincipal/** Maximum Principal*/,
                StressTypeEnumMinimumPrincipal/** Minimum Principal*/
            };

            private: DurabilityEventStrengthSettingsBuilderImpl * m_durabilityeventstrengthsettingsbuilder_impl;
            private: friend class  _DurabilityEventStrengthSettingsBuilderBuilder;
            protected: DurabilityEventStrengthSettingsBuilder();
            public: ~DurabilityEventStrengthSettingsBuilder();
            /**Returns  the name. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString Name
            (
            );
            /**Sets  the name. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetName
            (
                const NXString & title /** title */ 
            );
            /**Sets  the name. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            void SetName
            (
                const char * title /** title */ 
            );
            /**Returns  the stress criterion. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: NXOpen::CAE::DurabilityEventStrengthSettingsBuilder::StressCriterionEnum StressCriterion
            (
            );
            /**Sets  the stress criterion. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetStressCriterion
            (
                NXOpen::CAE::DurabilityEventStrengthSettingsBuilder::StressCriterionEnum stressCriterion /** stresscriterion */ 
            );
            /**Returns  the stress type. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: NXOpen::CAE::DurabilityEventStrengthSettingsBuilder::StressTypeEnum StressType
            (
            );
            /**Sets  the stress type. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetStressType
            (
                NXOpen::CAE::DurabilityEventStrengthSettingsBuilder::StressTypeEnum stressType /** stresstype */ 
            );
            /**Returns  the strength safety factor. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: bool StrengthSafetyFactor
            (
            );
            /**Sets  the strength safety factor. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetStrengthSafetyFactor
            (
                bool strengthSafetyFactor /** strengthsafetyfactor */ 
            );
            /**Returns  the margin of safety. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: bool MarginOfSafety
            (
            );
            /**Sets  the margin of safety. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetMarginOfSafety
            (
                bool marginOfSafety /** marginofsafety */ 
            );
            /**Returns  the factor of safety. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: double FactorOfSafety
            (
            );
            /**Sets  the factor of safety. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_adv_durability ("NX Advanced Durability") */
            public: void SetFactorOfSafety
            (
                double factorOfSafety /** factorofsafety */ 
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
