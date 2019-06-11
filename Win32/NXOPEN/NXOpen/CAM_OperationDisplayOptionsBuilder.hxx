#ifndef NXOpen_CAM_OPERATIONDISPLAYOPTIONSBUILDER_HXX_INCLUDED
#define NXOpen_CAM_OPERATIONDISPLAYOPTIONSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_OperationDisplayOptionsBuilder.ja
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
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_cam_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAM
    {
        class OperationDisplayOptionsBuilder;
    }
    namespace CAM
    {
        class DisplayPaint;
    }
    namespace CAM
    {
        class DisplayPath;
    }
    namespace CAM
    {
        class DisplaySilhouette;
    }
    namespace CAM
    {
        class DisplayTool;
    }
    namespace CAM
    {
        class PathDisplayColors;
    }
    class Direction;
    namespace CAM
    {
        class _OperationDisplayOptionsBuilderBuilder;
        class OperationDisplayOptionsBuilderImpl;
        /** Represents a display options Builder  <br> This is an abstract class and cannot be instantiated. <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  OperationDisplayOptionsBuilder : public TaggedObject
        {
            /** the tool display types 
             <br>  Created in NX6.0.0.  <br>  
            */
            public: enum ToolDisplayTypes
            {
                ToolDisplayTypesNone/** Tool Display: None */,
                ToolDisplayTypesTool2d/** Tool Display: 2D */,
                ToolDisplayTypesTool3d/** Tool Display: 3D */,
                ToolDisplayTypesAxis/** Tool Display: Axis */
            };

            /** the pattern display types 
             <br>  Created in NX6.0.0.  <br>  
            */
            public: enum PatternDisplayTypes
            {
                PatternDisplayTypesNone/** Pattern Display: None */,
                PatternDisplayTypesSpecify/** Pattern Display: Specify */
            };

            /** the path display types 
             <br>  Created in NX6.0.0.  <br>  
            */
            public: enum PathDisplayTypes
            {
                PathDisplayTypesSolidCenter/** Path Display: Solid Center */,
                PathDisplayTypesDashedCenter/** Path Display: Dashed Center */,
                PathDisplayTypesSilhouette/** Path Display: Silhouette */,
                PathDisplayTypesFill/** Path Display: Fill */,
                PathDisplayTypesSilhouetteFill/** Path Display: Silhouette Fill */
            };

            /** the path normal types 
             <br>  Created in NX6.0.0.  <br>  
            */
            public: enum PathNormalTypes
            {
                PathNormalTypesTypesToolAxis/** Path Normal: Tool axis */,
                PathNormalTypesTypesSpecify/** Path Normal: Specify */
            };

            private: OperationDisplayOptionsBuilderImpl * m_operationdisplayoptionsbuilder_impl;
            private: friend class  _OperationDisplayOptionsBuilderBuilder;
            protected: OperationDisplayOptionsBuilder();
            public: ~OperationDisplayOptionsBuilder();
            /**Returns  the tool display types 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::OperationDisplayOptionsBuilder::ToolDisplayTypes ToolDisplayType
            (
            );
            /**Sets  the tool display types 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetToolDisplayType
            (
                NXOpen::CAM::OperationDisplayOptionsBuilder::ToolDisplayTypes toolDisplay /** the tool display type */
            );
            /**Returns  the tool display frequency 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int ToolDisplayFrequency
            (
            );
            /**Sets  the tool display frequency 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetToolDisplayFrequency
            (
                int toolDisplayFrequency /** the tool display frequency */
            );
            /**Returns  the pattern display types 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::OperationDisplayOptionsBuilder::PatternDisplayTypes PatternDisplayType
            (
            );
            /**Sets  the pattern display types 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPatternDisplayType
            (
                NXOpen::CAM::OperationDisplayOptionsBuilder::PatternDisplayTypes patternDisplay /** the pattern display type */
            );
            /**Returns  the pattern file name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString PatternFile
            (
            );
            /**Sets  the pattern file name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPatternFile
            (
                const NXString & filename /** filename */ 
            );
            /**Sets  the pattern file name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            void SetPatternFile
            (
                const char * filename /** filename */ 
            );
            /**Returns  the pattern display frequency 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int PatternDisplayFrequency
            (
            );
            /**Sets  the pattern display frequency 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPatternDisplayFrequency
            (
                int patternDisplayFrequency /** the pattern display frequency */
            );
            /**Returns  the pattern X offset 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double PatternXOffset
            (
            );
            /**Sets  the pattern X offset 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPatternXOffset
            (
                double xOffset /** the pattern X offset */
            );
            /**Returns  the pattern Y offset 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double PatternYOffset
            (
            );
            /**Sets  the pattern Y offset 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPatternYOffset
            (
                double yOffset /** the pattern Y offset */
            );
            /**Returns  the pattern Z offset 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double PatternZOffset
            (
            );
            /**Sets  the pattern Z offset 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPatternZOffset
            (
                double zOffset /** the pattern Z offset */
            );
            /**Returns  the replay speed. The range is 1-10. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int ReplaySpeed
            (
            );
            /**Sets  the replay speed. The range is 1-10. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetReplaySpeed
            (
                int displaySpeed /** the replay speed. The range is 1-10. */
            );
            /**Returns  the path display types 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::OperationDisplayOptionsBuilder::PathDisplayTypes PathDisplayType
            (
            );
            /**Sets  the path display types 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPathDisplayType
            (
                NXOpen::CAM::OperationDisplayOptionsBuilder::PathDisplayTypes pathDisplay /** the path display type */
            );
            /**Returns  the percent of tool.The range is 1-100. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double PercentOfTool
            (
            );
            /**Sets  the percent of tool.The range is 1-100. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPercentOfTool
            (
                double percentTool /** the percent of tool.The range is 1-100. */
            );
            /**Returns  the path normal types 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::OperationDisplayOptionsBuilder::PathNormalTypes PathNormalType
            (
            );
            /**Sets  the path normal types 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPathNormalType
            (
                NXOpen::CAM::OperationDisplayOptionsBuilder::PathNormalTypes pathNormal /** the path normal type */
            );
            /**Returns  the path vector 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * PathVector
            (
            );
            /**Sets  the path vector 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPathVector
            (
                NXOpen::Direction * vector /** vector */ 
            );
            /**Returns  the feed display flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool FeedDisplayFlag
            (
            );
            /**Sets  the feed display flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetFeedDisplayFlag
            (
                bool feedDisplay /** the feed display flag */
            );
            /**Returns  the arrow display flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool ArrowDisplayFlag
            (
            );
            /**Sets  the arrow display flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetArrowDisplayFlag
            (
                bool arrowDisplay /** the arrow display flag */
            );
            /**Returns  the line number display flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool LineNumberDisplayFlag
            (
            );
            /**Sets  the line number display flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetLineNumberDisplayFlag
            (
                bool lineNumberDisplay /** the line number display flag */
            );
            /**Returns  the display cut regions flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool DisplayCutRegionsFlag
            (
            );
            /**Sets  the display cut regions flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetDisplayCutRegionsFlag
            (
                bool displayCutRegions /** the display cut regions flag */
            );
            /**Returns  the pause after display flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool PauseAfterDisplayFlag
            (
            );
            /**Sets  the pause after display flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPauseAfterDisplayFlag
            (
                bool pauseAfterDisplay /** the pause after display flag */
            );
            /**Returns  the refresh before display flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool RefreshBeforeDisplayFlag
            (
            );
            /**Sets  the refresh before display flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetRefreshBeforeDisplayFlag
            (
                bool refreshBeforeDisplay /** the refresh before display flag */
            );
            /**Returns  the suppress path display flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool SuppressPathDisplayFlag
            (
            );
            /**Sets  the suppress path display flag 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetSuppressPathDisplayFlag
            (
                bool suppressPathDisplay /** the suppress path display flag */
            );
            /**Returns  the path display colors builder  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::PathDisplayColors * PathDisplayColors
            (
            );
            /**Returns  the sub builder for tool display 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::DisplayTool * ToolDisplay
            (
            );
            /**Returns  the sub builder for path display 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::DisplayPath * PathDisplay
            (
            );
            /**Returns  the sub builder for paint display 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::DisplayPaint * PaintDisplay
            (
            );
            /**Returns  the sub builder for silhou display 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::DisplaySilhouette * SilhouDisplay
            (
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