#ifndef NXOpen_MEASUREFACES_HXX_INCLUDED
#define NXOpen_MEASUREFACES_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     MeasureFaces.ja
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
#include <NXOpen/GenericMeasure.hxx>
#include <NXOpen/MeasureManager.hxx>
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
    class MeasureFaces;
    class GenericMeasure;
    class Measure;
    class Scalar;
    class MeasureFacesImpl;
    /** Represents the measurement of perimeter and area of a set of faces  <br> To create or edit an instance of this class, use @link MeasureFaceBuilder MeasureFaceBuilder@endlink  <br> 
     <br>  Created in NX4.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  MeasureFaces : public GenericMeasure
    {
        /** Indicates the type of embedded measurement to create */
        public: enum ActiveValue
        {
            ActiveValueArea/** area */ ,
            ActiveValuePerimeter/** perimeter */ 
        };

        private: MeasureFacesImpl * m_measurefaces_impl;
        /// \cond NX_NO_DOC 
        public: explicit MeasureFaces(void *ptr);
        /// \endcond 
        /**Returns  the accuracy value for calculations of the measurement 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: double Accuracy
        (
        );
        /**Returns  the value for area of the measurement 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: double Area
        (
        );
        /**Returns  the value for perimeter of the measurement 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: double Perimeter
        (
        );
        /** Creates and returns a measurement feature  @return  
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::Measure * CreateFeature
        (
        );
        /** Creates and returns an embedded measurement expression. 
          Deprecated: Use CreateEmbeddedObject instead   @return  
         <br>  @deprecated Deprecated in NX5.0.1.  Use @link MeasureFaces::CreateEmbeddedObject MeasureFaces::CreateEmbeddedObject@endlink  instead. <br>  

         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public:  NX_DEPRECATED("Deprecated in NX5.0.1.  Use MeasureFaces::CreateEmbeddedObject instead.") NXString CreateEmbedded
        (
            NXOpen::MeasureFaces::ActiveValue measurementType /** measurement type */ 
        );
        /** Creates an embedded measurement.
          The name of the measurement can be used in an expression formula.  @return  the measurement 
         <br>  Created in NX5.0.1.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::Scalar * CreateEmbeddedObject
        (
            NXOpen::MeasureFaces::ActiveValue measurementType /** measurement type */ ,
            NXString* name /** the name of the measurement */
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
