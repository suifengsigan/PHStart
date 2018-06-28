#ifndef NXOpen_ANNOTATIONS_URLBUSINESSMODIFIERBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_URLBUSINESSMODIFIERBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_UrlBusinessModifierBuilder.ja
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
#include <NXOpen/Annotations_UrlBusinessModifierBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class UrlBusinessModifierBuilder;
    }
    class Builder;
    namespace Annotations
    {
        class _UrlBusinessModifierBuilderBuilder;
        class UrlBusinessModifierBuilderImpl;
        /** Represents a @link Annotations::UrlBusinessModifier Annotations::UrlBusinessModifier@endlink  builder  <br> To create a new instance of this class, use @link Annotations::BusinessModifierCollection::CreateUrlBusinessModifierBuilder Annotations::BusinessModifierCollection::CreateUrlBusinessModifierBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  UrlBusinessModifierBuilder : public Builder
        {
            private: UrlBusinessModifierBuilderImpl * m_urlbusinessmodifierbuilder_impl;
            private: friend class  _UrlBusinessModifierBuilderBuilder;
            protected: UrlBusinessModifierBuilder();
            public: ~UrlBusinessModifierBuilder();
            /**Returns  the str title 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Title
            (
            );
            /**Sets  the str title 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            public: void SetTitle
            (
                const NXString & title /** title */ 
            );
            /**Sets  the str title 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            void SetTitle
            (
                const char * title /** title */ 
            );
            /**Returns  the url 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Url
            (
            );
            /**Sets  the url 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            public: void SetUrl
            (
                const NXString & url /** url */ 
            );
            /**Sets  the url 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            void SetUrl
            (
                const char * url /** url */ 
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
