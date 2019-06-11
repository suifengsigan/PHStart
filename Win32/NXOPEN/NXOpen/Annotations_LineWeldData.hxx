#ifndef NXOpen_ANNOTATIONS_LINEWELDDATA_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_LINEWELDDATA_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_LineWeldData.ja
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
#include <NXOpen/Annotations_LineWeldSideData.hxx>
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
        class LineWeldData;
    }
    namespace Annotations
    {
        class LineWeldSideData;
    }
    class DisplayableObject;
    namespace Drawings
    {
        class DraftingView;
    }
    namespace Annotations
    {
    }
    namespace Annotations
    {
        class LineWeldDataImpl;
        /** Represents line weld data 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  LineWeldData : public TransientObject
        {
            private: LineWeldDataImpl * m_linewelddata_impl;
            /// \cond NX_NO_DOC 
            public: explicit LineWeldData(void *ptr);
            /// \endcond 
            /** Frees the object from memory.  After this method is called,
                    it is illegal to use the object.  In .NET, this method is automatically
                    called when the object is deleted by the garbage collector.  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~LineWeldData();
            /**Returns  the standard 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::WeldStandard WeldStandard
            (
            );
            /** 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetWeldStandard
            (
                NXOpen::Annotations::WeldStandard standard /** New weld standard */
            );
            /** Returns the arrow side data  @return  Arrow side line weld data 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::LineWeldSideData * GetArrowSideData
            (
            );
            /** Sets the arrow side data 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetArrowSideData
            (
                NXOpen::Annotations::LineWeldSideData * arrowSide /** New arrow side line weld data */
            );
            /** Returns the other side data  @return  Other side line weld data 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::LineWeldSideData * GetOtherSideData
            (
            );
            /** Sets the other side data 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetOtherSideData
            (
                NXOpen::Annotations::LineWeldSideData * otherSide /** New other side line weld data */
            );
            /**Returns  the flag indicating whether the weld symbol is at center of
                        reference line, applicable only to spot and seam symbols 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: bool CenterSymbol
            (
            );
            /**Sets  the flag indicating whether the weld symbol is at center of
                        reference line, applicable only to spot and seam symbols 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetCenterSymbol
            (
                bool centerSymbol /** Flag indicating the weld symbol at the center of reference line */
            );
            /**Returns  the tail for the reference line 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::Tail Tail
            (
            );
            /**Sets  the tail for the reference line 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTail
            (
                NXOpen::Annotations::Tail tail /** New tail type for the reference line */
            );
            /** Returns the tail specification text   @return  List of lines 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXString> GetTailSpecificationText
            (
            );
            /** Sets the tail specification text 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTailSpecificationText
            (
                std::vector<NXString> & lines /** List of lines */
            );
            /**Returns  the flag indicating whether the weld is done at the field site 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: bool FieldWeld
            (
            );
            /**Sets  the flag indicating whether the weld is done at the field site 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFieldWeld
            (
                bool fieldWeld /** Flag indicating whether the weld is done at field site */
            );
            /**Returns  the flag indicating whether the staggered weld symbol is displayed 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: bool StaggeredWeldSymbolDisplay
            (
            );
            /**Sets  the flag indicating whether the staggered weld symbol is displayed 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStaggeredWeldSymbolDisplay
            (
                bool staggeredDisplay /** Flag indicating whether the staggered symbol is displayed */
            );
            /**Returns  the flag indicating whether the top seam is displayed 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: bool TopSeamDisplay
            (
            );
            /**Sets  the flag indicating whether the top seam is displayed 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTopSeamDisplay
            (
                bool topSeamDisplay /** Flag indicating whether the top seam is displayed */
            );
            /**Returns  the flag indicating whether the top seam direction is reveresed 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: bool TopSeamReverse
            (
            );
            /**Sets  the flag indicating whether the top seam direction is reveresed 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTopSeamReverse
            (
                bool reverse /** Flag indicating whether the top seam is reversed */
            );
            /**Returns  the flag indicating whether the side seam is displayed 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: bool SideSeamDisplay
            (
            );
            /**Sets  the flag indicating whether the side seam is displayed 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSideSeamDisplay
            (
                bool sideSeam /** Flag indicating whether the side seam is displayed */
            );
            /**Returns  the flag indicating whether the side seam is flipped in the vertical
                        direction 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: bool SideSeamVerticalFlip
            (
            );
            /**Sets  the flag indicating whether the side seam is flipped in the vertical
                        direction 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSideSeamVerticalFlip
            (
                bool verticalFlip /** Flag indicating whether the side seam is vertically flipped */
            );
            /**Returns  the flag indicating whether the side seam is flipped in the horizontal
                        direction 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: bool SideSeamHorizontalFlip
            (
            );
            /**Sets  the flag indicating whether the side seam is flipped in the horizontal
                        direction 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSideSeamHorizontalFlip
            (
                bool horizontalFlip /** Flag indicating whether the side seam is horizontally flipped */
            );
            /**Returns  the identification line location 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::IdentificationLineLocation IdentificationLineLocation
            (
            );
            /**Sets  the identification line location 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetIdentificationLineLocation
            (
                NXOpen::Annotations::IdentificationLineLocation location /** Identification line location */
            );
            /**Returns  the symbol scale 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: double SymbolScale
            (
            );
            /**Sets  the symbol scale 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSymbolScale
            (
                double symbolScale /** New scale */
            );
            /**Returns  the flag indicating whether the allround symbol is displayed 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: bool AllroundSymbol
            (
            );
            /**Sets  the flag indicating whether the allround symbol is displayed 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAllroundSymbol
            (
                bool allroundSymbol /** Flag indicating whether to display all around symbol */
            );
            /**Returns  the view for which top seam is to be created. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::DraftingView * TopSeamView
            (
            );
            /**Sets  the view for which top seam is to be created. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTopSeamView
            (
                NXOpen::Drawings::DraftingView * topSeamView /** New view for which top seam is to be created */
            );
            /** Returns the top seam objects.  @return  List of top seam objects 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::DisplayableObject *> GetTopSeamObjects
            (
            );
            /** Sets the top seam objects. Following objects are allowed -
                         <br>  Point <br>               
                         <br>  Curve <br>            
                         <br>  Edge <br>  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTopSeamObjects
            (
                const std::vector<NXOpen::DisplayableObject *> & objects /** List of new top seam objects */
            );
            /**Returns  the view for which side seam is to be created. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::DraftingView * SideSeamView
            (
            );
            /**Sets  the view for which side seam is to be created. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSideSeamView
            (
                NXOpen::Drawings::DraftingView * sideSeamView /** New view for which side seam is to be created */
            );
            /** Returns the side seam objects.  @return  List of side seam objects 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::DisplayableObject *> GetSideSeamObjects
            (
            );
            /** Sets the side seam objects. Following objects are allowed -
                         <br>  Curve <br> 
                         <br>  Edge <br>  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSideSeamObjects
            (
                const std::vector<NXOpen::DisplayableObject *> & objects /** List of new side seam objects */
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