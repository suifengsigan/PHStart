#ifndef NXOpen_PARTLOADSTATUS_HXX_INCLUDED
#define NXOpen_PARTLOADSTATUS_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     PartLoadStatus.ja
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
    class PartLoadStatus;
    class PartLoadStatusImpl;
    /** Represents a list of part names with associated status codes. The status
    codes serve to communicate why these parts were not able to be loaded during
    part open. 

    Note that if an exception is thrown during the load process, the
    load status structure will not be usable as the load process itself has failed
    and nothing will have been loaded. This load status can only be used for 
    partially successful load operations and some load warnings.

     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  PartLoadStatus : public TransientObject
    {
        private: PartLoadStatusImpl * m_partloadstatus_impl;
        /// \cond NX_NO_DOC 
        public: explicit PartLoadStatus(void *ptr);
        /// \endcond 
        /** Free resources associated with the instance. After this method
            is called, it is illegal to use the object.  In .NET, this method
            is automatically called when the object is deleted by the garbage
            collector. 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: virtual ~PartLoadStatus();
        /**Returns  the number of parts that could not be loaded. 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: int NumberUnloadedParts
        (
        );
        /** Returns the name of a particular part that could not be loaded.  @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXString GetPartName
        (
            int i /** Index into list of unloaded parts */
        );
        /** Returns the status code for a part that could not be loaded.  @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: int GetStatus
        (
            int i /** Index into list of unloaded parts */
        );
        /** Returns the text description of the status code for a part that
            could not be loaded.  @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXString GetStatusDescription
        (
            int i /** Index into list of unloaded parts. */
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
