#ifndef NXOpen_AUTOTESTEXECUTEBUILDER_HXX_INCLUDED
#define NXOpen_AUTOTESTEXECUTEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     AutotestExecuteBuilder.ja
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
#include <NXOpen/AutotestExecuteBuilder.hxx>
#include <NXOpen/Builder.hxx>
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
    class AutotestExecuteBuilder;
    class Builder;
    class _AutotestExecuteBuilderBuilder;
    class AutotestExecuteBuilderImpl;
    /**
           Represents a class used for executing a C++ Autotests
         <br> To create a new instance of this class, use @link DebugSession::CreateAutotestExecuteBuilder DebugSession::CreateAutotestExecuteBuilder@endlink  <br> 
     <br>  Created in NX6.0.2.  <br>  
    */
    class NXOPENDEBUGSESSIONCPPEXPORT  AutotestExecuteBuilder : public Builder
    {
        private: AutotestExecuteBuilderImpl * m_autotestexecutebuilder_impl;
        private: friend class  _AutotestExecuteBuilderBuilder;
        protected: AutotestExecuteBuilder();
        public: ~AutotestExecuteBuilder();
        /**Returns  the current autotest library index 
         <br>  Created in NX6.0.2.  <br>  
         <br> License requirements : None */
        public: int Library
        (
        );
        /**Sets  the current autotest library index 
         <br>  Created in NX6.0.2.  <br>  
         <br> License requirements : None */
        public: void SetLibrary
        (
            int library /** library */ 
        );
        /**Returns  the current autotest name to execute 
         <br>  Created in NX6.0.2.  <br>  
         <br> License requirements : None */
        public: NXString TestName
        (
        );
        /**Sets  the current autotest name to execute 
         <br>  Created in NX6.0.2.  <br>  
         <br> License requirements : None */
        public: void SetTestName
        (
            const NXString & testName /** testname */ 
        );
        /**Sets  the current autotest name to execute 
         <br>  Created in NX6.0.2.  <br>  
         <br> License requirements : None */
        void SetTestName
        (
            const char * testName /** testname */ 
        );
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