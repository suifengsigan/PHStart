#ifndef NXOpen_SECTIONELEMENTDATA_HXX_INCLUDED
#define NXOpen_SECTIONELEMENTDATA_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SectionElementData.ja
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
#include <NXOpen/ugmath.hxx>
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
    class SectionElementData;
    class DisplayableObject;
    class ICurve;
    class SectionElementDataImpl;
    /** Represents section element data 
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  SectionElementData : public TransientObject
    {
        private: SectionElementDataImpl * m_sectionelementdata_impl;
        /// \cond NX_NO_DOC 
        public: explicit SectionElementData(void *ptr);
        /// \endcond 
        /** Free resources associated with the instance. After this method
            is called, it is illegal to use the object.  In .NET, this method
            is automatically called when the object is deleted by the garbage
            collector. 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: virtual ~SectionElementData();
        /** Gets the element that constructs the section 
         <br>  @deprecated Deprecated in NX8.0.0.  Use @link SectionElementData::GetSectionElementData1 SectionElementData::GetSectionElementData1@endlink  instead. <br>  

         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Use SectionElementData::GetSectionElementData1 instead.") void GetSectionElementData
        (
            NXOpen::ICurve ** sectionElement /** The element that constructs the section */,
            NXOpen::ICurve ** startConnector /** The element that is connected to the 
                                       section_element, at the start_point */,
            NXOpen::Point3d* startPoint /** Start point*/,
            NXOpen::ICurve ** endConnector /** The element that is connected to the 
                                                                       section_element, at the end_point*/,
            NXOpen::Point3d* endPoint /** End Point*/
        );
        /** Gets the element that constructs the section 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void GetSectionElementData1
        (
            NXOpen::DisplayableObject ** sectionElement /** The element that constructs the section - this can be curve or point. */,
            NXOpen::DisplayableObject ** startConnector /** The element that is connected to the 
                                       section_element, at the start_point - this can be curve or point */,
            NXOpen::Point3d* startPoint /** Start point*/,
            NXOpen::DisplayableObject ** endConnector /** The element that is connected to the 
                                                                       section_element, at the end_point - this can be curve or point*/,
            NXOpen::Point3d* endPoint /** End Point*/
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
