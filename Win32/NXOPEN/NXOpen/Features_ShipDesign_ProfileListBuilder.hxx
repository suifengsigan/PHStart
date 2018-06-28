#ifndef NXOpen_FEATURES_SHIPDESIGN_PROFILELISTBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_PROFILELISTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_ProfileListBuilder.ja
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
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_ShipDesign_ProfileListBuilder.hxx>
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
        namespace ShipDesign
        {
            class ProfileListBuilder;
        }
    }
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace Features
    {
        namespace ShipDesign
        {
            class _ProfileListBuilderBuilder;
            class ProfileListBuilderImpl;
            /**
                    Represents a @link Features::ShipDesign::ProfileList Features::ShipDesign::ProfileList@endlink  builder
                     <br> To create a new instance of this class, use @link Features::ShipCollection::CreateProfileListBuilder Features::ShipCollection::CreateProfileListBuilder@endlink  <br> 
             <br>  Created in NX5.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  ProfileListBuilder : public Features::FeatureBuilder
            {
                private: ProfileListBuilderImpl * m_profilelistbuilder_impl;
                private: friend class  _ProfileListBuilderBuilder;
                protected: ProfileListBuilder();
                public: ~ProfileListBuilder();
                /**Returns  the assembly part 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: NXString ListFile
                (
                );
                /**Sets  the assembly part 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") OR nx_ship_mfg_prep ("Ship Manufacturing") */
                public: void SetListFile
                (
                    const NXString & listFile /** listfile */ 
                );
                /**Sets  the assembly part 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") OR nx_ship_mfg_prep ("Ship Manufacturing") */
                void SetListFile
                (
                    const char * listFile /** listfile */ 
                );
                /**Returns  the ventilation holes 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: bool VentilationHoles
                (
                );
                /**Sets  the ventilation holes 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") OR nx_ship_mfg_prep ("Ship Manufacturing") */
                public: void SetVentilationHoles
                (
                    bool ventilationHoles /** ventilationholes */ 
                );
                /**Returns  the inverse bending 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: bool InverseBending
                (
                );
                /**Sets  the inverse bending 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") OR nx_ship_mfg_prep ("Ship Manufacturing") */
                public: void SetInverseBending
                (
                    bool inverseBending /** inversebending */ 
                );
                /**Returns  the knuckled profile 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : None */
                public: bool KnuckledProfile
                (
                );
                /**Sets  the knuckled profile 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") OR nx_ship_mfg_prep ("Ship Manufacturing") */
                public: void SetKnuckledProfile
                (
                    bool knuckledProfile /** knuckledprofile */ 
                );
            };
        }
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
