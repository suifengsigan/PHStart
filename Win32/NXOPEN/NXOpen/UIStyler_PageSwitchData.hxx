#ifndef NXOpen_UISTYLER_PAGESWITCHDATA_HXX_INCLUDED
#define NXOpen_UISTYLER_PAGESWITCHDATA_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     UIStyler_PageSwitchData.ja
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
#include <NXOpen/libnxopenuicpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace UIStyler
    {
        class PageSwitchData;
    }
    namespace UIStyler
    {
        class PageSwitchDataImpl;
        /** Represents a PageSwitchData for UI Styler 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENUICPPEXPORT  PageSwitchData : public TransientObject
        {
            private: PageSwitchDataImpl * m_pageswitchdata_impl;
            /// \cond NX_NO_DOC 
            public: explicit PageSwitchData(void *ptr);
            /// \endcond 
            /** Free resources associated with the instance. After this method
                is called, it is illegal to use the object.  In .NET or Java, this 
                method is automatically called when the object is deleted by the 
                garbage collector. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~PageSwitchData();
            /**Returns  the activated page 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: int ActivatedPage
            (
            );
            /**Returns  the deactivated page 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: int DeactivatedPage
            (
            );
        }; //lint !e1712 default constructor not defined for class  

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
