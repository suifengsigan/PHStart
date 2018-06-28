#ifndef NXOpen_GEOMETRICUTILITIES_STRINGTESTBUILDER_HXX_INCLUDED
#define NXOpen_GEOMETRICUTILITIES_STRINGTESTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricUtilities_StringTestBuilder.ja
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
#include <NXOpen/GeometricUtilities_StringTestBuilder.hxx>
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
    namespace GeometricUtilities
    {
        class StringTestBuilder;
    }
    class Builder;
    namespace GeometricUtilities
    {
        class _StringTestBuilderBuilder;
        class StringTestBuilderImpl;
        /**
            Represents a @link StringTestBuilder StringTestBuilder@endlink 
             <br>  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENDEBUGSESSIONCPPEXPORT  StringTestBuilder : public Builder
        {
            private: StringTestBuilderImpl * m_stringtestbuilder_impl;
            private: friend class  _StringTestBuilderBuilder;
            protected: StringTestBuilder();
            public: ~StringTestBuilder();
            /**Returns  the keyin 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Keyin
            (
            );
            /**Sets  the keyin 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetKeyin
            (
                const NXString & keyin /** keyin */ 
            );
            /**Sets  the keyin 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            void SetKeyin
            (
                const char * keyin /** keyin */ 
            );
            /**Returns  the icon keyin 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXString IconKeyin
            (
            );
            /**Sets  the icon keyin 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetIconKeyin
            (
                const NXString & iconKeyin /** iconkeyin */ 
            );
            /**Sets  the icon keyin 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            void SetIconKeyin
            (
                const char * iconKeyin /** iconkeyin */ 
            );
            /**Returns  the wide 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Wide
            (
            );
            /**Sets  the wide 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetWide
            (
                const NXString & wide /** wide */ 
            );
            /**Sets  the wide 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            void SetWide
            (
                const char * wide /** wide */ 
            );
            /**Returns  the combo 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Combo
            (
            );
            /**Sets  the combo 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetCombo
            (
                const NXString & combo /** combo */ 
            );
            /**Sets  the combo 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            void SetCombo
            (
                const char * combo /** combo */ 
            );
            /**Returns  the list 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXString List
            (
            );
            /**Sets  the list 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetList
            (
                const NXString & list /** list */ 
            );
            /**Sets  the list 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            void SetList
            (
                const char * list /** list */ 
            );
            /**Returns  the keyin iti 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXString KeyinIti
            (
            );
            /**Sets  the keyin iti 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetKeyinIti
            (
                const NXString & keyinIti /** keyiniti */ 
            );
            /**Sets  the keyin iti 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            void SetKeyinIti
            (
                const char * keyinIti /** keyiniti */ 
            );
            /**Returns  the combo iti 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXString ComboIti
            (
            );
            /**Sets  the combo iti 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetComboIti
            (
                const NXString & comboIti /** comboiti */ 
            );
            /**Sets  the combo iti 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            void SetComboIti
            (
                const char * comboIti /** comboiti */ 
            );
            /**Returns  the list iti 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXString ListIti
            (
            );
            /**Sets  the list iti 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetListIti
            (
                const NXString & listIti /** listiti */ 
            );
            /**Sets  the list iti 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            void SetListIti
            (
                const char * listIti /** listiti */ 
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
