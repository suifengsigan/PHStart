#ifndef NXOpen_BLOCKSTYLER_DRAWINGAREA_HXX_INCLUDED
#define NXOpen_BLOCKSTYLER_DRAWINGAREA_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     BlockStyler_DrawingArea.ja
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
#include <NXOpen/BlockStyler_UIBlock.hxx>
#include <NXOpen/BlockStyler_DrawingArea.hxx>
#include <NXOpen/libnxopenuicpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace BlockStyler
    {
        class DrawingArea;
    }
    namespace BlockStyler
    {
        class UIBlock;
    }
    namespace BlockStyler
    {
        class _DrawingAreaBuilder;
        class DrawingAreaImpl;
        /** Represents a Drawing Area block
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENUICPPEXPORT  DrawingArea : public BlockStyler::UIBlock
        {
            private: DrawingAreaImpl * m_drawingarea_impl;
            private: friend class  _DrawingAreaBuilder;
            protected: DrawingArea();
            public: ~DrawingArea();
            /**Returns  the Height
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: int Height
            (
            );
            /**Sets  the Height
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetHeight
            (
                int height /** height */ 
            );
            /**Returns  the Image
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString Image
            (
            );
            /**Sets  the Image
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetImage
            (
                const NXString & imageString /** image string */ 
            );
            /**Sets  the Image
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            void SetImage
            (
                const char * imageString /** image string */ 
            );
            /**Returns  the Width
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: int Width
            (
            );
            /**Sets  the Width
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: void SetWidth
            (
                int width /** width */ 
            );
        };
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
