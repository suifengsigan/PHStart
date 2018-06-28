#ifndef NXOpen_SKETCHMIRRORPATTERNBUILDER_HXX_INCLUDED
#define NXOpen_SKETCHMIRRORPATTERNBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SketchMirrorPatternBuilder.ja
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
#include <NXOpen/Builder.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SketchMirrorPatternBuilder.hxx>
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
    class SketchMirrorPatternBuilder;
    class Builder;
    class NXObject;
    class Section;
    class SelectNXObject;
    class _SketchMirrorPatternBuilderBuilder;
    class SketchMirrorPatternBuilderImpl;
    /**
        Represents a @link SketchMirrorPatternBuilder SketchMirrorPatternBuilder@endlink 
         <br> To create a new instance of this class, use @link SketchCollection::CreateSketchMirrorPatternBuilder SketchCollection::CreateSketchMirrorPatternBuilder@endlink  <br> 
    Default values.
    <table border="1"> 
     
    <tr><th> 
    Property</th>  <th> 
    Value</th> </tr>
    <tr><td> 
     
    ConvertToReference </td> <td> 
     
    True </td> </tr> 

    </table>  

     <br>  Created in NX7.5.0.  <br>  
    */
    class NXOPENCPPEXPORT  SketchMirrorPatternBuilder : public Builder
    {
        private: SketchMirrorPatternBuilderImpl * m_sketchmirrorpatternbuilder_impl;
        private: friend class  _SketchMirrorPatternBuilderBuilder;
        protected: SketchMirrorPatternBuilder();
        public: ~SketchMirrorPatternBuilder();
        /**Returns  the pattern section 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Section * Section
        (
        );
        /**Returns  the direction object. This function gets direction object of the pattern constraint 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::SelectNXObject * DirectionObject
        (
        );
        /**Returns  the flag to indicate if the centerline needs to be converted to reference 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: bool ConvertToReference
        (
        );
        /**Sets  the flag to indicate if the centerline needs to be converted to reference 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: void SetConvertToReference
        (
            bool reference /** reference */ 
        );
        /** This function removes end constraint from the given mirror pattern 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void SetEndConstraint
        (
            NXOpen::NXObject * parent /** Parent object in base chain */,
            bool isStart /** TRUE, if we want to remove the start end con */,
            bool constraint /** TRUE to add the con, false to remove */
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
