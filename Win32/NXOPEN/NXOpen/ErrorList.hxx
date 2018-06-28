#ifndef NXOpen_ERRORLIST_HXX_INCLUDED
#define NXOpen_ERRORLIST_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     ErrorList.ja
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
#include <NXOpen/ErrorInfo.hxx>
#include <NXOpen/TransientObject.hxx>
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
    class ErrorList;
    class ErrorInfo;
    class ErrorListImpl;
    /** Represents a list of errors 
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  ErrorList : public TransientObject
    {
        private: ErrorListImpl * m_errorlist_impl;
        /// \cond NX_NO_DOC 
        public: explicit ErrorList(void *ptr);
        /// \endcond 
        /** Frees the object from memory.  After this method is called,
            it is illegal to use the object.  In .NET, this method is automatically
            called when the object is deleted by the garbage collector.  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: virtual ~ErrorList();
        /**Returns  the number of errors in the list 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: int Length
        (
        );
        /** Gets the nth error information structure in the list  @return  the nth error information structure in the list 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::ErrorInfo * GetErrorInfo
        (
            int n /** must be between 0 and (length of the list - 1) */
        );
        /** Clears the list 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void Clear
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
