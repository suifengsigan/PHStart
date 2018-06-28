#ifndef NXOpen_FACESLOTFACESRULE_HXX_INCLUDED
#define NXOpen_FACESLOTFACESRULE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     FaceSlotFacesRule.ja
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
    class FaceSlotFacesRule;
    class Face;
    class SelectionIntentRule;
    class FaceSlotFacesRuleImpl;
    /** Represents a @link  SelectionIntentRule   SelectionIntentRule @endlink  that collects all faces of a pocket. 
     <br>  Created in NX5.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  FaceSlotFacesRule : public SelectionIntentRule
    {
        private: FaceSlotFacesRuleImpl * m_faceslotfacesrule_impl;
        /// \cond NX_NO_DOC 
        public: explicit FaceSlotFacesRule(void *ptr);
        /// \endcond 
        /** Frees the object from memory.
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: virtual ~FaceSlotFacesRule();
        /** Gets the data for the slot faces rule: @link  FaceSlotFacesRule   FaceSlotFacesRule @endlink   @return  Faces which creates this rule
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::Face * GetData
        (
        );
        /** Gets the data for the slot faces rule: @link  FaceSlotFacesRule   FaceSlotFacesRule @endlink   @return  Faces which creates this rule
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::Face * GetDefiningData
        (
            bool* includeBoundaryBlends /** true if the rule is not to identify any blends at the boundary */,
            bool* traverseInteriorLoops /** true if interrior loops are to be processed. */
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
