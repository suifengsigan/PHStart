#ifndef NXOpen_CAM_NCASSISTANTBUILDER_HXX_INCLUDED
#define NXOpen_CAM_NCASSISTANTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_NCAssistantBuilder.ja
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
#include <NXOpen/CAM_NCAssistantBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
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
        class NCAssistantBuilder;
    }
    class Builder;
    class Direction;
    class Face;
    class Plane;
    class SelectFaceList;
    namespace CAM
    {
        class _NCAssistantBuilderBuilder;
        class NCAssistantBuilderImpl;
        /** Represents a NCAssistant Builder  <br> To create a new instance of this class, use @link CAM::CAMSetup::CreateNCAssistantBuilder CAM::CAMSetup::CreateNCAssistantBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        AnalysisType </td> <td> 
         
        Levels </td> </tr> 

        <tr><td> 
         
        AngleTolerance </td> <td> 
         
        0.01 (millimeters part),  0.01 (inches part) </td> </tr> 

        <tr><td> 
         
        DistanceTolerance </td> <td> 
         
        0.01 (millimeters part), 0.0004 (inches part) </td> </tr> 

        <tr><td> 
         
        MaximumAngle </td> <td> 
         
        90.00 (millimeters part), 90.00 (inches part) </td> </tr> 

        <tr><td> 
         
        MaximumLevel </td> <td> 
         
        1000.00 (millimeters part), 50.00 (inches part) </td> </tr> 

        <tr><td> 
         
        MaximumRadius </td> <td> 
         
        50.00 (millimeters part), 2.00 (inches part) </td> </tr> 

        <tr><td> 
         
        MinimumAngle </td> <td> 
         
        -90.00 (millimeters part), -90.00 (inches part) </td> </tr> 

        <tr><td> 
         
        MinimumLevel </td> <td> 
         
        -1000.00 (millimeters part), -50.00 (inches part) </td> </tr> 

        <tr><td> 
         
        MinimumRadius </td> <td> 
         
        -50.00 (millimeters part), -2.00 (inches part) </td> </tr> 

        <tr><td> 
         
        RadiusTolerance </td> <td> 
         
        0.01 (millimeters part), 0.0004 (inches part) </td> </tr> 

        </table>  

         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  NCAssistantBuilder : public Builder
        {
            /**Analysis Type*/
            public: enum AnalysisTypes
            {
                AnalysisTypesLevels/** Analysis Type: Levels */,
                AnalysisTypesCorners/** Analysis Type: Corners */,
                AnalysisTypesBlends/** Analysis Type: Blens */,
                AnalysisTypesDraft/** Analysis Type: Draft */
            };

            private: NCAssistantBuilderImpl * m_ncassistantbuilder_impl;
            private: friend class  _NCAssistantBuilderBuilder;
            protected: NCAssistantBuilder();
            public: ~NCAssistantBuilder();
            /**Returns  the Faces to Analyze 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectFaceList * FacesToAnalyze
            (
            );
            /**Returns  the Analysis Type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::NCAssistantBuilder::AnalysisTypes AnalysisType
            (
            );
            /**Sets  the Analysis Type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetAnalysisType
            (
                NXOpen::CAM::NCAssistantBuilder::AnalysisTypes analysisType /** the Analysis Type */
            );
            /**Returns  the Reference Vector 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * ReferenceVector
            (
            );
            /**Sets  the Reference Vector 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetReferenceVector
            (
                NXOpen::Direction * referenceVector /** the Reference Vector */
            );
            /**Returns  the Reference Plane 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Plane * ReferencePlane
            (
            );
            /**Sets  the Reference Plane 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetReferencePlane
            (
                NXOpen::Plane * referencePlane /** the Reference Plane */
            );
            /**Returns  the Minimum Level
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double MinimumLevel
            (
            );
            /**Sets  the Minimum Level
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMinimumLevel
            (
                double minimum /** the Minimum Level*/
            );
            /**Returns  the Maximum Level
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double MaximumLevel
            (
            );
            /**Sets  the Maximum Level
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMaximumLevel
            (
                double maximum /** the Maximum Level*/
            );
            /**Returns  the Minimum Radius
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double MinimumRadius
            (
            );
            /**Sets  the Minimum Radius
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMinimumRadius
            (
                double minimum /** the Minimum Radius*/
            );
            /**Returns  the Maximum Radius
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double MaximumRadius
            (
            );
            /**Sets  the Maximum Radius
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMaximumRadius
            (
                double maximum /** the Maximum Radius*/
            );
            /**Returns  the Minimum Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double MinimumAngle
            (
            );
            /**Sets  the Minimum Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMinimumAngle
            (
                double minimum /** the Minimum Angle*/
            );
            /**Returns  the Maximum Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double MaximumAngle
            (
            );
            /**Sets  the Maximum Angle
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMaximumAngle
            (
                double maximum /** the Maximum Angle*/
            );
            /**Returns  the Distance Tolerance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double DistanceTolerance
            (
            );
            /**Sets  the Distance Tolerance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetDistanceTolerance
            (
                double distanceTolerance /** the Distance Tolerance */
            );
            /**Returns  the Angle Tolerance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double AngleTolerance
            (
            );
            /**Sets  the Angle Tolerance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetAngleTolerance
            (
                double angleTolerance /** the Angle Tolerance */
            );
            /**Returns  the Radius Tolerance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double RadiusTolerance
            (
            );
            /**Sets  the Radius Tolerance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetRadiusTolerance
            (
                double radiusTolerance /** the Radius Tolerance */
            );
            /**Returns  the Save Face Colors on Exit 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool SaveFaceColors
            (
            );
            /**Sets  the Save Face Colors on Exit 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetSaveFaceColors
            (
                bool saveFaceColorsOnExit /** the Save Face Colors on Exit */
            );
            /** The action of Information button. It will bring out a text dialog
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void Information
            (
            );
            /** The action of Analyze Geometry button.
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void AnalyzeGeometry
            (
            );
            /** The analyze result.
                        After analyzing the selected faces,it will return the analyzed faces and the corresponding double 
                        values,including depth, corner or fillets radius or draft angle.
                     @return  success or not
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool GetResults
            (
                std::vector<NXOpen::Face *> & analyzedFaces /** the faces found during analyze run, it is need SM_free*/,
                std::vector<double> & doubleValue /** the corresponding analysis value of the face, depth, corner or fillets radius or draft angle */
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
