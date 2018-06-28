#ifndef NXOpen_FEATURES_SILHOUETTEFLANGE_HXX_INCLUDED
#define NXOpen_FEATURES_SILHOUETTEFLANGE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_SilhouetteFlange.ja
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
#include <NXOpen/Features_BodyFeature.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        class SilhouetteFlange;
    }
    namespace Features
    {
        class BodyFeature;
    }
    namespace Features
    {
        class _SilhouetteFlangeBuilder;
        class SilhouetteFlangeImpl;
        /** Represents a silhouette flange feature  <br> To create or edit an instance of this class, use @link Features::SilhouetteFlangeBuilder Features::SilhouetteFlangeBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  SilhouetteFlange : public Features::BodyFeature
        {
            private: SilhouetteFlangeImpl * m_silhouetteflange_impl;
            private: friend class  _SilhouetteFlangeBuilder;
            protected: SilhouetteFlange();
            public: ~SilhouetteFlange();
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
