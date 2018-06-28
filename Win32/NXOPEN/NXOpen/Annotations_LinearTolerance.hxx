#ifndef NXOpen_ANNOTATIONS_LINEARTOLERANCE_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_LINEARTOLERANCE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_LinearTolerance.ja
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
#include <NXOpen/Annotations.hxx>
#include <NXOpen/Dimensions.hxx>
#include <NXOpen/TransientObject.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class LinearTolerance;
    }
    class Expression;
    namespace Annotations
    {
    }
    namespace Annotations
    {
        class LinearToleranceImpl;
        /** Represents linear tolerance 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  LinearTolerance : public TransientObject
        {
            private: LinearToleranceImpl * m_lineartolerance_impl;
            /// \cond NX_NO_DOC 
            public: explicit LinearTolerance(void *ptr);
            /// \endcond 
            /** Frees the object from memory.  After this method is called,
                    it is illegal to use the object.  In .NET, this method is automatically
                    called when the object is deleted by the garbage collector.  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~LinearTolerance();
            /**Returns  the tolerance type 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::ToleranceType ToleranceType
            (
            );
            /**Sets  the tolerance type 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetToleranceType
            (
                NXOpen::Annotations::ToleranceType type /** New tolerance type */
            );
            /** Returns the upper tolerance in inches  @return  Upper tolerance in inches 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::Value GetUpperToleranceInches
            (
            );
            /** Sets the upper tolerance in inches 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetUpperToleranceInches
            (
                const NXOpen::Annotations::Value & upperToleranceInches /**  New upper tolerance in inches */
            );
            /** Returns the lower tolerance value in inches  @return  Lower tolerance in inches 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::Value GetLowerToleranceInches
            (
            );
            /** Sets the lower tolerance value in inches 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetLowerToleranceInches
            (
                const NXOpen::Annotations::Value & lowerToleranceInches /** New lower tolerance in inches */
            );
            /** Returns the upper tolerance in millimeters(MM)  @return  Upper tolerance in millimeters 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::Value GetUpperToleranceMm
            (
            );
            /** Sets the upper tolerance in millimeters(MM) 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetUpperToleranceMm
            (
                const NXOpen::Annotations::Value & upperToleranceMm /** New upper tolerance in millimeters */
            );
            /** Returns the lower tolerance in millimeters(MM)  @return  Lower tolerance in millimeters 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::Value GetLowerToleranceMm
            (
            );
            /** Sets the lower tolerance in millimeters(MM) 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetLowerToleranceMm
            (
                const NXOpen::Annotations::Value & lowerToleranceMm /** New lower tolerance in millimeters */
            );
            /**Returns  the number of decimal places for primary dimension 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: int PrimaryDimensionDecimalPlaces
            (
            );
            /**Sets  the number of decimal places for primary dimension 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetPrimaryDimensionDecimalPlaces
            (
                int primaryDimensionDecimalPlaces /** New number of primary dimension decimal places */
            );
            /**Returns  the number of decimal places for dual dimension 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: int DualDimensionDecimalPlaces
            (
            );
            /**Sets  the number of decimal places for dual dimension 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDualDimensionDecimalPlaces
            (
                int dualDimensionDecimalPlaces /** New number of dual dimension decimal places */
            );
            /**Returns  the number of decimal places for dual tolerance 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: int DualToleranceDecimalPlaces
            (
            );
            /**Sets  the number of decimal places for dual tolerance 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDualToleranceDecimalPlaces
            (
                int dualToleranceDecimalPlaces /** New number of dual tolerance decimal places */
            );
            /**Returns  the zero tolerance display style 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::ZeroToleranceDisplayStyle ZeroToleranceDisplayStyle
            (
            );
            /**Sets  the zero tolerance display style 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetZeroToleranceDisplayStyle
            (
                NXOpen::Annotations::ZeroToleranceDisplayStyle zeroDisplayStyle /** zero display style */ 
            );
            /**Returns  the tolerance limit fit deviation 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString LimitFitDeviation
            (
            );
            /**Sets  the tolerance limit fit deviation 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") OR drafting ("DRAFTING") */
            public: void SetLimitFitDeviation
            (
                const NXString & fitDeviation /** New limit fit deviation */
            );
            /**Sets  the tolerance limit fit deviation 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") OR drafting ("DRAFTING") */
            void SetLimitFitDeviation
            (
                const char * fitDeviation /** New limit fit deviation */
            );
            /**Returns  the tolerance limit fit grade 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: int LimitFitGrade
            (
            );
            /**Sets  the tolerance limit fit grade 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") OR drafting ("DRAFTING") */
            public: void SetLimitFitGrade
            (
                int fitGrade /** New Limit fit grade */
            );
            /**Returns  the tolerance limit fit display style 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::FitDisplayStyle LimitFitDisplayStyle
            (
            );
            /**Sets  the tolerance limit fit display style 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") OR drafting ("DRAFTING") */
            public: void SetLimitFitDisplayStyle
            (
                NXOpen::Annotations::FitDisplayStyle fitDisplayStyle /** New limit tolerance display style */
            );
            /**Returns  the tolerance limit fit ansi hole type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::FitAnsiHoleType LimitFitAnsiHoleType
            (
            );
            /**Sets  the tolerance limit fit ansi hole type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") OR drafting ("DRAFTING") */
            public: void SetLimitFitAnsiHoleType
            (
                NXOpen::Annotations::FitAnsiHoleType fitHoleType /** New limit tolerance ansi hole type */
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
