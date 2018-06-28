#ifndef NXOpen_ROUTINGAUTOTESTPRINT_HXX_INCLUDED
#define NXOpen_ROUTINGAUTOTESTPRINT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     RoutingAutotestPrint.ja
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
#include <NXOpen/TaggedObject.hxx>
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
    class RoutingAutotestPrint;
    class DebugSession;
    class Part;
    class RoutingAutotestPrintImpl;
    /** Represents a class that is used for NX testing.  This class should not
    be made available to customers  <br> To obtain an instance of this class, refer to @link DebugSession DebugSession@endlink  <br> 
     <br>  Created in NX6.0.2.  <br>  
    */
    class NXOPENDEBUGSESSIONCPPEXPORT  RoutingAutotestPrint
    {
        private: RoutingAutotestPrintImpl * m_routingautotestprint_impl;
        private: NXOpen::DebugSession* m_owner;
        /// \cond NX_NO_DOC 
        public: explicit RoutingAutotestPrint(NXOpen::DebugSession *owner);


        /// \endcond 
        public: 
        /**Returns the tag of this object.  */
        tag_t Tag() const; 
        public: ~RoutingAutotestPrint();
        /** Prints data of routing objects. 
         <br>  Created in NX6.0.2.  <br>  
         <br> License requirements : None */
        public: void PrintTestInformation
        (
            NXOpen::Part * part /** part */ ,
            const NXString & varName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            int line /** line */ 
        );
        /** Prints data of routing objects. 
         <br>  Created in NX6.0.2.  <br>  
         <br> License requirements : None */
        void PrintTestInformation
        (
            NXOpen::Part * part /** part */ ,
            const char * varName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
            int line /** line */ 
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
