#ifndef NXOpen_CAM_INSPECTIONPARPLNFEATUREBUILDER_HXX_INCLUDED
#define NXOpen_CAM_INSPECTIONPARPLNFEATUREBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_InspectionParplnFeatureBuilder.ja
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
#include <NXOpen/CAM_OperationBuilder.hxx>
#include <NXOpen/CAM_InspectionOperationEnums.hxx>
#include <NXOpen/CAM_InspectionParplnFeatureBuilder.hxx>
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
        class InspectionParplnFeatureBuilder;
    }
    namespace CAM
    {
        class OperationBuilder;
    }
    class SelectNXObjectList;
    namespace CAM
    {
        class _InspectionParplnFeatureBuilderBuilder;
        class InspectionParplnFeatureBuilderImpl;
        /** Represents a CMM Inspection Parpln Feature Builder.
                A Parpln is an unbounded slot or tab defined by two parallel planes.  <br> To create a new instance of this class, use @link CAM::InspectionOperationCollection::CreateInspectionParplnFeatureBuilder CAM::InspectionOperationCollection::CreateInspectionParplnFeatureBuilder@endlink  <br> 
         <br>  Created in NX7.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  InspectionParplnFeatureBuilder : public CAM::OperationBuilder
        {
            private: InspectionParplnFeatureBuilderImpl * m_inspectionparplnfeaturebuilder_impl;
            private: friend class  _InspectionParplnFeatureBuilderBuilder;
            protected: InspectionParplnFeatureBuilder();
            public: ~InspectionParplnFeatureBuilder();
            /**Returns  the first selected side of the parpln slot/tab 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * SelectedSide1
            (
            );
            /**Returns  the second selected side of the parpln slot/tab 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectNXObjectList * SelectedSide2
            (
            );
            /**Returns  the coordinate system reference type 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::CamInspectionOperationCsysreferencetypes CsysReferenceType
            (
            );
            /**Sets  the coordinate system reference type 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetCsysReferenceType
            (
                NXOpen::CAM::CamInspectionOperationCsysreferencetypes csysReferenceType /** csysreferencetype */ 
            );
            /**Returns  the inspection feature inner outer type (slot/tab) 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::CamInspectionOperationInneroutertypes InnerOuterType
            (
            );
            /**Sets  the inspection feature inner outer type (slot/tab) 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetInnerOuterType
            (
                NXOpen::CAM::CamInspectionOperationInneroutertypes innerOuterType /** inneroutertype */ 
            );
            /**Returns  the width of the parpln slot/tab 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double Width
            (
            );
            /**Sets  the width of the parpln slot/tab 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetWidth
            (
                double width /** width */ 
            );
            /**Returns  the extent type of the slot/tab (bounded or unbounded) 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::CamInspectionOperationExtenttypes ExtentType
            (
            );
            /**Sets  the extent type of the slot/tab (bounded or unbounded) 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetExtentType
            (
                NXOpen::CAM::CamInspectionOperationExtenttypes extentType /** extenttype */ 
            );
            /**Returns  the X coordinate of the center of the plane on the first side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double Side1PointX
            (
            );
            /**Sets  the X coordinate of the center of the plane on the first side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSide1PointX
            (
                double side1PointX /** side1pointx */ 
            );
            /**Returns  the Y coordinate of the center of the plane on the first side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double Side1PointY
            (
            );
            /**Sets  the Y coordinate of the center of the plane on the first side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSide1PointY
            (
                double side1PointY /** side1pointy */ 
            );
            /**Returns  the Z coordinate of the center of the plane on the first side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double Side1PointZ
            (
            );
            /**Sets  the Z coordinate of the center of the plane on the first side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSide1PointZ
            (
                double side1PointZ /** side1pointz */ 
            );
            /**Returns  the I component of the normal vector of the plane on the first side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double Side1NormalVectorI
            (
            );
            /**Sets  the I component of the normal vector of the plane on the first side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSide1NormalVectorI
            (
                double side1NormalVectorI /** side1normalvectori */ 
            );
            /**Returns  the J component of the normal vector of the plane on the first side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double Side1NormalVectorJ
            (
            );
            /**Sets  the J component of the normal vector of the plane on the first side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSide1NormalVectorJ
            (
                double side1NormalVectorJ /** side1normalvectorj */ 
            );
            /**Returns  the K component of the normal vector of the plane on the first side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double Side1NormalVectorK
            (
            );
            /**Sets  the K component of the normal vector of the plane on the first side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSide1NormalVectorK
            (
                double side1NormalVectorK /** side1normalvectork */ 
            );
            /**Returns  the X coordinate of the center of the plane on the second side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double Side2PointX
            (
            );
            /**Sets  the X coordinate of the center of the plane on the second side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSide2PointX
            (
                double side2PointX /** side2pointx */ 
            );
            /**Returns  the Y coordinate of the center of the plane on the second side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double Side2PointY
            (
            );
            /**Sets  the Y coordinate of the center of the plane on the second side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSide2PointY
            (
                double side2PointY /** side2pointy */ 
            );
            /**Returns  the Z coordinate of the center of the plane on the second side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double Side2PointZ
            (
            );
            /**Sets  the Z coordinate of the center of the plane on the second side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSide2PointZ
            (
                double side2PointZ /** side2pointz */ 
            );
            /**Returns  the I component of the normal vector of the plane on the second side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double Side2NormalVectorI
            (
            );
            /**Sets  the I component of the normal vector of the plane on the second side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSide2NormalVectorI
            (
                double side2NormalVectorI /** side2normalvectori */ 
            );
            /**Returns  the J component of the normal vector of the plane on the second side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double Side2NormalVectorJ
            (
            );
            /**Sets  the J component of the normal vector of the plane on the second side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSide2NormalVectorJ
            (
                double side2NormalVectorJ /** side2normalvectorj */ 
            );
            /**Returns  the K component of the normal vector of the plane on the second side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double Side2NormalVectorK
            (
            );
            /**Sets  the K component of the normal vector of the plane on the second side of the parpln 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetSide2NormalVectorK
            (
                double side2NormalVectorK /** side2normalvectork */ 
            );
            /**Returns  the name of the parpln feature 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Name
            (
            );
            /**Sets  the name of the parpln feature 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void SetName
            (
                const NXString & name /** name */ 
            );
            /**Sets  the name of the parpln feature 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            void SetName
            (
                const char * name /** name */ 
            );
            /** Updates parpln inspection feature characteristic parameters based on selected geometry 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
            public: void UpdateParams
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
