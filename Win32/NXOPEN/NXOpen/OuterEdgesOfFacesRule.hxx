#ifndef NXOpen_OUTEREDGESOFFACESRULE_HXX_INCLUDED
#define NXOpen_OUTEREDGESOFFACESRULE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     OuterEdgesOfFacesRule.ja
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
#include <NXOpen/SelectionIntentRule.hxx>
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
    class OuterEdgesOfFacesRule;
    class NXObject;
    class SelectionIntentRule;
    class OuterEdgesOfFacesRuleImpl;
    /** Represents a @link  SelectionIntentRule   SelectionIntentRule @endlink  that collects the outer edges of a group of faces. 
     <br>  Created in NX8.5.0.  <br>  
    */
    class NXOPENCPPEXPORT  OuterEdgesOfFacesRule : public SelectionIntentRule
    {
        private: OuterEdgesOfFacesRuleImpl * m_outeredgesoffacesrule_impl;
        /// \cond NX_NO_DOC 
        public: explicit OuterEdgesOfFacesRule(void *ptr);
        /// \endcond 
        /** Frees the object from memory.
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: virtual ~OuterEdgesOfFacesRule();
        /** Gets the data for the Outer Edges of Faces rule: @link  OuterEdgesOfFacesRule   OuterEdgesOfFacesRule @endlink  
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void GetData
        (
            std::vector<NXOpen::NXObject *> & facesOfFeatures /** Faces or Feature Faces whose boundary edges are used to create this rule*/
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
