#ifndef NXOpen_MOTION_FLEXBODYBUILDER_HXX_INCLUDED
#define NXOpen_MOTION_FLEXBODYBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Motion_FlexBodyBuilder.ja
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
#include <NXOpen/Motion_MotionBuilder.hxx>
#include <NXOpen/Motion_FlexBodyBuilder.hxx>
#include <NXOpen/Motion_MarkerToNodeData.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/libnxopencpp_motion_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Motion
    {
        class FlexBodyBuilder;
    }
    namespace Motion
    {
        class MarkerToNodeData;
    }
    namespace Motion
    {
        class MotionBuilder;
    }
    namespace Motion
    {
        class SelectLink;
    }
    class NXObject;
    namespace Motion
    {
        class _FlexBodyBuilderBuilder;
        class FlexBodyBuilderImpl;
        /** Represents a @link Motion::FlexBody Motion::FlexBody@endlink  builder  <br> To create a new instance of this class, use @link Motion::FlexBodyCollection::CreateFlexBodyBuilder Motion::FlexBodyCollection::CreateFlexBodyBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        PositioningType </td> <td> 
         
        AbsoluteOrigin </td> </tr> 

        </table>  

         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_MOTIONEXPORT  FlexBodyBuilder : public Motion::MotionBuilder
        {
            /** Represents positioning type of flexible body */
            public: enum Positioning
            {
                PositioningAbsoluteOrigin/** Positioning to absolution place*/,
                PositioningComponentPosition/** Positioning to the place where the component is in assembly*/,
                PositioningThreePointMethod/** Positioning to user defined place using three point method*/
            };

            /** Represents rfi file type of flexible body */
            public: enum SourceType
            {
                SourceTypeLocalfolder/** File is in local folder */,
                SourceTypeTeamcenter/** teamcenter */ 
            };

            private: FlexBodyBuilderImpl * m_flexbodybuilder_impl;
            private: friend class  _FlexBodyBuilderBuilder;
            protected: FlexBodyBuilder();
            public: ~FlexBodyBuilder();
            /**Returns  the selection link 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Motion::SelectLink * SelectionLink
            (
            );
            /**Returns  the file type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Motion::FlexBodyBuilder::SourceType SourceOption
            (
            );
            /**Sets  the file type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetSourceOption
            (
                NXOpen::Motion::FlexBodyBuilder::SourceType sourceOption /** sourceoption */ 
            );
            /**Returns  the native RFI file name 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString NativeRfiFileName
            (
            );
            /**Sets  the native RFI file name 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetNativeRfiFileName
            (
                const NXString & nativeRfiFileName /** nativerfifilename */ 
            );
            /**Sets  the native RFI file name 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            void SetNativeRfiFileName
            (
                const char * nativeRfiFileName /** nativerfifilename */ 
            );
            /**Returns  the TCE RFI file name 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString FileTceName
            (
            );
            /**Sets  the TCE RFI file name 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetFileTceName
            (
                const NXString & fileTceName /** filetcename */ 
            );
            /**Sets  the TCE RFI file name 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            void SetFileTceName
            (
                const char * fileTceName /** filetcename */ 
            );
            /**Returns  the positioning type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Motion::FlexBodyBuilder::Positioning PositioningType
            (
            );
            /**Sets  the positioning type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetPositioningType
            (
                NXOpen::Motion::FlexBodyBuilder::Positioning positioningType /** positioningtype */ 
            );
            /**Returns  the flexible body object name 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString Name
            (
            );
            /**Sets  the flexible body object name 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetName
            (
                const NXString & name /** name */ 
            );
            /**Sets  the flexible body object name 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            void SetName
            (
                const char * name /** name */ 
            );
            /** Gets the offset points   @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: std::vector<double> GetOffsetPoints
            (
            );
            /** Sets the offset points  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetOffsetPoints
            (
                const std::vector<double> & offsetPoints /** offsetpoints */ 
            );
            /** Gets the offset orientations   @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: std::vector<double> GetOffsetOrientations
            (
            );
            /** Sets the offset orientations  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetOffsetOrientations
            (
                const std::vector<double> & offsetOrientations /** offsetorientations */ 
            );
            /** Gets marker to node list Items  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: std::vector<NXOpen::Motion::MarkerToNodeData *> GetMarkerItems
            (
            );
            /** Sets marker to node list Items 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetMarkerItems
            (
                const std::vector<NXOpen::Motion::MarkerToNodeData *> & markerToNodeListItem /** markertonodelistitem */ 
            );
            /** Creates a new list item  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: NXOpen::Motion::MarkerToNodeData * NewListMarkerToNode
            (
                NXOpen::NXObject * marker /** The marker tag*/,
                int markerPosition /** The i or j marker identity*/,
                int nodeID /** The node ID */,
                bool move /** Whether to move the node */,
                double nodeLocationX /** The node location X coordinate*/,
                double nodeLocationY /** The node location Y coordinate*/,
                double nodeLocationZ /** The node location Z coordinate*/
            );
            /** Export rfi related results in manager mode @return  The local file specification 
             <br>  Created in NX7.5.4.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: NXString ExportRfiRelatedResults
            (
                const NXString & caeFileSpec /** The manger mode file specification   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const NXString & resultName /** The result name  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Export rfi related results in manager mode @return  The local file specification 
             <br>  Created in NX7.5.4.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            NXString ExportRfiRelatedResults
            (
                const char * caeFileSpec /** The manger mode file specification   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                const char * resultName /** The result name  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
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
