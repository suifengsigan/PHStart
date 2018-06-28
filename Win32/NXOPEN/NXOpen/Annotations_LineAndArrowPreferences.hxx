#ifndef NXOpen_ANNOTATIONS_LINEANDARROWPREFERENCES_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_LINEANDARROWPREFERENCES_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_LineAndArrowPreferences.ja
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
#include <NXOpen/DisplayableObject.hxx>
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
        class LineAndArrowPreferences;
    }
    namespace Annotations
    {
    }
    namespace Annotations
    {
        class LineAndArrowPreferencesImpl;
        /** Represents line and arrow preferences 
         <br>  Created in NX3.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  LineAndArrowPreferences : public TransientObject
        {
            private: LineAndArrowPreferencesImpl * m_lineandarrowpreferences_impl;
            /// \cond NX_NO_DOC 
            public: explicit LineAndArrowPreferences(void *ptr);
            /// \endcond 
            /** Frees the object from memory.  After this method is called,
                    it is illegal to use the object.  In .NET, this method is automatically
                    called when the object is deleted by the garbage collector.  
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~LineAndArrowPreferences();
            /**Returns  the first arrow type 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::ArrowheadType FirstArrowType
            (
            );
            /**Sets  the first arrow type 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFirstArrowType
            (
                NXOpen::Annotations::ArrowheadType firstArrowType /** first arrow type */ 
            );
            /**Returns  the second arrow type 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::ArrowheadType SecondArrowType
            (
            );
            /**Sets  the second arrow type 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSecondArrowType
            (
                NXOpen::Annotations::ArrowheadType secondArrowType /** second arrow type */ 
            );
            /**Returns  the leader location 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::VerticalTextJustification LeaderLocation
            (
            );
            /**Sets  the leader location 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetLeaderLocation
            (
                NXOpen::Annotations::VerticalTextJustification leaderLocation /** leader location */ 
            );
            /**Returns  the arrowhead length 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: double ArrowheadLength
            (
            );
            /**Sets  the arrowhead length 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetArrowheadLength
            (
                double arrowheadLength /** arrowhead length */ 
            );
            /**Returns  the arrowhead included angle 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: double ArrowheadIncludedAngle
            (
            );
            /**Sets  the arrowhead included angle 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetArrowheadIncludedAngle
            (
                double arrowheadIncludedAngle /** arrowhead included angle */ 
            );
            /**Returns  the dot arrowhead diameter 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: double DotArrowheadDiameter
            (
            );
            /**Sets  the dot arrowhead diameter 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDotArrowheadDiameter
            (
                double dotArrowheadDiameter /** dot arrowhead diameter */ 
            );
            /**Returns  the stub length 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: double StubLength
            (
            );
            /**Sets  the stub length 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStubLength
            (
                double stubLength /** stub length */ 
            );
            /**Returns  the text to line distance 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: double TextToLineDistance
            (
            );
            /**Sets  the text to line distance 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTextToLineDistance
            (
                double textToLineDistance /** text to line distance */ 
            );
            /**Returns  the line past arrow distance 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: double LinePastArrowDistance
            (
            );
            /**Sets  the line past arrow distance 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetLinePastArrowDistance
            (
                double linePastArrowDistance /** line past arrow distance */ 
            );
            /**Returns  the oblique extension line angle 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: double ObliqueExtensionLineAngle
            (
            );
            /**Sets  the oblique extension line angle 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetObliqueExtensionLineAngle
            (
                double obliqueExtensionLineAngle /** oblique extension line angle */ 
            );
            /**Returns  the first position to extension line distance 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: double FirstPosToExtLineDist
            (
            );
            /**Sets  the first position to extension line distance 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFirstPosToExtLineDist
            (
                double firstPosToExtensionLineDistance /** first pos to extension line distance */ 
            );
            /**Returns  the second position to extension line distance 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: double SecondPosToExtLineDist
            (
            );
            /**Sets  the second position to extension line distance 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSecondPosToExtLineDist
            (
                double secondPosToExtensionLineDistance /** second pos to extension line distance */ 
            );
            /**Returns  the datum extension line past the arrow distance 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: double DatumLengthPastArrow
            (
            );
            /**Sets  the datum extension line past the arrow distance 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDatumLengthPastArrow
            (
                double datumLengthPastArrow /** datum length past arrow */ 
            );
            /**Returns  the text to stub spacing factor 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: double TextOverStubSpaceFactor
            (
            );
            /**Sets  the text to stub spacing factor 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTextOverStubSpaceFactor
            (
                double textOverStubSpaceFactor /** text over stub space factor */ 
            );
            /**Returns  the character size factor that controls the gap between text and the leader 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double TextOverLeaderGapFactor
            (
            );
            /**Sets  the character size factor that controls the gap between text and the leader 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTextOverLeaderGapFactor
            (
                double textOverLeaderGapFactor /** text over leader gap factor */ 
            );
            /** Returns the first extension line color, font, and width  @return  
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::LineCfw GetFirstExtensionLineCfw
            (
            );
            /** Sets the first extension line color, font, and width 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFirstExtensionLineCfw
            (
                const NXOpen::Annotations::LineCfw & firstExtensionLineCfw /** first extension line cfw */ 
            );
            /** Returns the first arrowhead color, font, and width  @return  
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::LineCfw GetFirstArrowheadCfw
            (
            );
            /** Sets the first arrowhead color, font, and width 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFirstArrowheadCfw
            (
                const NXOpen::Annotations::LineCfw & firstArrowheadCfw /** first arrowhead cfw */ 
            );
            /** Returns the first arrow line color, font, and width  @return  
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::LineCfw GetFirstArrowLineCfw
            (
            );
            /** Sets the first arrow line color, font, and width 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFirstArrowLineCfw
            (
                const NXOpen::Annotations::LineCfw & firstArrowLineCfw /** first arrow line cfw */ 
            );
            /** Returns the second extension line color, font, and width  @return  
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::LineCfw GetSecondExtensionLineCfw
            (
            );
            /** Sets the second extension line color, font, and width 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSecondExtensionLineCfw
            (
                const NXOpen::Annotations::LineCfw & secondExtensionLineCfw /** second extension line cfw */ 
            );
            /** Returns the second arrowhead color, font, and width  @return  
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::LineCfw GetSecondArrowheadCfw
            (
            );
            /** Sets the second arrowhead color, font, and width 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSecondArrowheadCfw
            (
                const NXOpen::Annotations::LineCfw & secondArrowheadCfw /** second arrowhead cfw */ 
            );
            /** Returns the second arrow line color, font, and width  @return  
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::LineCfw GetSecondArrowLineCfw
            (
            );
            /** Sets the second arrow line color, font, and width 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSecondArrowLineCfw
            (
                const NXOpen::Annotations::LineCfw & secondArrowLineCfw /** second arrow line cfw */ 
            );
            /**Returns  the size of all around symbol. This is also used for inner diameter of all over symbol   
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double AllAroundSymbol
            (
            );
            /**Sets  the size of all around symbol. This is also used for inner diameter of all over symbol   
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetAllAroundSymbol
            (
                double allAroundSymbolSize /** allaroundsymbolsize */ 
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
