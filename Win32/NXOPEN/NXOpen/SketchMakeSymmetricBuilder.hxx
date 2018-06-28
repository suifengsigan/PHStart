#ifndef NXOpen_SKETCHMAKESYMMETRICBUILDER_HXX_INCLUDED
#define NXOpen_SKETCHMAKESYMMETRICBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SketchMakeSymmetricBuilder.ja
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
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SketchMakeSymmetricBuilder.hxx>
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
    class SketchMakeSymmetricBuilder;
    class Builder;
    class SelectNXObject;
    class _SketchMakeSymmetricBuilderBuilder;
    class SketchMakeSymmetricBuilderImpl;
    /**
        This class is used to add symmetric contraint to objects from a
        @link SketchMakeSymmetricBuilder SketchMakeSymmetricBuilder@endlink .
         <br> To create a new instance of this class, use @link SketchCollection::CreateMakeSymmetricBuilder SketchCollection::CreateMakeSymmetricBuilder@endlink  <br> 
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
    class NXOPENCPPEXPORT  SketchMakeSymmetricBuilder : public Builder
    {
        private: SketchMakeSymmetricBuilderImpl * m_sketchmakesymmetricbuilder_impl;
        private: friend class  _SketchMakeSymmetricBuilderBuilder;
        protected: SketchMakeSymmetricBuilder();
        public: ~SketchMakeSymmetricBuilder();
        /**Returns the function returns the center line of a symmetric constraint. This must be a straight line, 
                 straight edge, datum axis or datum plane. If the centerline is line, edge or datum axis, it is not 
                 perpendicular to the sketch plane. If the centerline is datum plane, it is not parallel to the sketch plane.
                 If an entity is selected that is not part of sketch, it will be projected on the sketch plane and the projection
                 will be used as the center line.
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::SelectNXObject * CenterLine
        (
        );
        /**Returns the function returns the primary object of a symmetric constraint. 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::SelectNXObject * PrimaryObject
        (
        );
        /**Returns the function returns the secondary object of a symmetric constraint. 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::SelectNXObject * SecondaryObject
        (
        );
        /**Returns the function returns the flag to indicate if the centerline needs to be converted to reference 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: bool ConvertToReference
        (
        );
        /**Sets the function returns the flag to indicate if the centerline needs to be converted to reference 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: void SetConvertToReference
        (
            bool reference /** reference */ 
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
