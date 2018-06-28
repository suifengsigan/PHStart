#ifndef NXOpen_PERFUITEMPLATETESTMANAGER_HXX_INCLUDED
#define NXOpen_PERFUITEMPLATETESTMANAGER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     PerfUITemplateTestManager.ja
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
#include <NXOpen/libnxopendebuguicpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class PerfUITemplateTestManager;
    class UITemplateTestManager;
    class PerfUITemplateTestManagerImpl;
    /** Represents a class that is used for autotests.  This class should not
    be made available to customers  <br> To obtain an instance of this class, refer to @link UITemplateTestManager UITemplateTestManager@endlink  <br> 
     <br>  Created in NX8.0.0.  <br>  
    */
    class NXOPENDEBUGUICPPEXPORT  PerfUITemplateTestManager
    {
        private: PerfUITemplateTestManagerImpl * m_perfuitemplatetestmanager_impl;
        private: NXOpen::UITemplateTestManager* m_owner;
        /// \cond NX_NO_DOC 
        public: explicit PerfUITemplateTestManager(NXOpen::UITemplateTestManager *owner);


        /// \endcond 
        public: 
        /**Returns the tag of this object.  */
        tag_t Tag() const; 
        public: ~PerfUITemplateTestManager();
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
