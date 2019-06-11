#ifndef NXOpen_UITEMPLATETESTMANAGER_HXX_INCLUDED
#define NXOpen_UITEMPLATETESTMANAGER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     UITemplateTestManager.ja
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
    class UITemplateTestManager;
    class DebugUI;
    class AdmUITemplateTestManager;
    class ArchUITemplateTestManager;
    class AssemUITemplateTestManager;
    class CaeUITemplateTestManager;
    class CamUITemplateTestManager;
    class DraftUITemplateTestManager;
    class FfmUITemplateTestManager;
    class KdaUITemplateTestManager;
    class ModlUITemplateTestManager;
    class NxsmUITemplateTestManager;
    class PerfUITemplateTestManager;
    class PsaUITemplateTestManager;
    class PsasmUITemplateTestManager;
    class RoutUITemplateTestManager;
    class TcinUITemplateTestManager;
    class UITemplateTestManagerImpl;
    /** Represents a class that is used for autotests.  This class should not
    be made available to customers  <br> To obtain an instance of this class, refer to @link DebugUI DebugUI@endlink  <br> 
     <br>  Created in NX8.0.0.  <br>  
    */
    class NXOPENDEBUGUICPPEXPORT  UITemplateTestManager
    {
        private: UITemplateTestManagerImpl * m_uitemplatetestmanager_impl;
        private: NXOpen::DebugUI* m_owner;
        /// \cond NX_NO_DOC 
        public: explicit UITemplateTestManager(NXOpen::DebugUI *owner);


        /// \endcond 
        public: 
        /**Returns the tag of this object.  */
        tag_t Tag() const; 
        public: ~UITemplateTestManager();


        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::AdmUITemplateTestManager *AdmUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::ArchUITemplateTestManager *ArchUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::AssemUITemplateTestManager *AssemUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::CaeUITemplateTestManager *CaeUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::CamUITemplateTestManager *CamUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::DraftUITemplateTestManager *DraftUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::FfmUITemplateTestManager *FfmUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::KdaUITemplateTestManager *KdaUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::ModlUITemplateTestManager *ModlUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::NxsmUITemplateTestManager *NxsmUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::PerfUITemplateTestManager *PerfUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::PsasmUITemplateTestManager *PsasmUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::PsaUITemplateTestManager *PsaUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::RoutUITemplateTestManager *RoutUITemplates();
        /**  
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::TcinUITemplateTestManager *TcinUITemplates();
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