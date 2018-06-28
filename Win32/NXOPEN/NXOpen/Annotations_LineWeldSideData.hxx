#ifndef NXOpen_ANNOTATIONS_LINEWELDSIDEDATA_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_LINEWELDSIDEDATA_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_LineWeldSideData.ja
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
#include <NXOpen/LineWelds.hxx>
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
        class LineWeldSideData;
    }
    namespace Annotations
    {
    }
    namespace Annotations
    {
        class LineWeldSideDataImpl;
        /** Represents line weld side data 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  LineWeldSideData : public TransientObject
        {
            private: LineWeldSideDataImpl * m_lineweldsidedata_impl;
            /// \cond NX_NO_DOC 
            public: explicit LineWeldSideData(void *ptr);
            /// \endcond 
            /** Frees the object from memory.  After this method is called,
                    it is illegal to use the object.  In .NET, this method is automatically
                    called when the object is deleted by the garbage collector.  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~LineWeldSideData();
            /**Returns  the weld finish method 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::FinishMethod FinishMethod
            (
            );
            /**Sets  the weld finish method 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFinishMethod
            (
                NXOpen::Annotations::FinishMethod finishMethod /** New finish method */
            );
            /**Returns  the weld supplementary symbol 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::SupplementarySymbol SupplementarySymbol
            (
            );
            /**Sets  the weld supplementary symbol 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSupplementarySymbol
            (
                NXOpen::Annotations::SupplementarySymbol supplementarySymbol /** New supplementary weld symbol */
            );
            /**Returns  the groove angle 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXString GrooveAngle
            (
            );
            /**Sets  the groove angle 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetGrooveAngle
            (
                const NXString & grooveAngle /** New groove angle */
            );
            /**Sets  the groove angle 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void SetGrooveAngle
            (
                const char * grooveAngle /** New groove angle */
            );
            /**Returns  the depth or root opening or number of welds as the case may be 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXString DepthRootOpeningNumberOfWelds
            (
            );
            /**Sets  the depth or root opening or number of welds as the case may be 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDepthRootOpeningNumberOfWelds
            (
                const NXString & depthRootOpeningNumWeld /** New depth or root opening or number of welds */
            );
            /**Sets  the depth or root opening or number of welds as the case may be 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void SetDepthRootOpeningNumberOfWelds
            (
                const char * depthRootOpeningNumWeld /** New depth or root opening or number of welds */
            );
            /**Returns  the weld size letter code (ISO and DIN only) 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::SizeLetterCode SizeLetterCode
            (
            );
            /**Sets  the weld size letter code (ISO and DIN only) 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSizeLetterCode
            (
                NXOpen::Annotations::SizeLetterCode sizeLetterCode /** New size letter code */
            );
            /**Returns  the weld size 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Size
            (
            );
            /**Sets  the weld size 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSize
            (
                const NXString & size /** New weld size */
            );
            /**Sets  the weld size 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void SetSize
            (
                const char * size /** New weld size */
            );
            /**Returns  the elementary weld symbol 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::Symbol Symbol
            (
            );
            /**Sets  the elementary weld symbol 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSymbol
            (
                NXOpen::Annotations::Symbol symbol /** New weld symbol */
            );
            /**Returns  the weld length and pitch  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXString LengthPitch
            (
            );
            /**Sets  the weld length and pitch  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetLengthPitch
            (
                const NXString & lengthPitch /** New weld length and pitch */
            );
            /**Sets  the weld length and pitch  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void SetLengthPitch
            (
                const char * lengthPitch /** New weld length and pitch */
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
