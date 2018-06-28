#ifndef NXOpen_MEASUREMENT_HXX_INCLUDED
#define NXOpen_MEASUREMENT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Measurement.ja
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
#include <NXOpen/ugmath.hxx>
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
    class Measurement;
    class Session;
    class Curve;
    class DisplayableObject;
    class Edge;
    class Face;
    class ICurve;
    class NXObject;
    class Point;
    namespace Routing
    {
        class ISegment;
    }
    class MeasurementImpl;
    /**
    Provides methods for calculating and displaying the measurement information.
     <br> To obtain an instance of this class, refer to @link Session Session@endlink  <br> 
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  Measurement
    {
        /** 
            Describes type of the 'Deviation Checking' report. 
            */
        public: enum DeviationReportType
        {
            DeviationReportTypeNoDeviation/** No Deviation*/,
            DeviationReportTypeAllDeviation/** All Deviation*/,
            DeviationReportTypeMaximumDistance/** Maximum Distance*/,
            DeviationReportTypeMinimumDistance/** Minimum Distance*/,
            DeviationReportTypeMaximumAngle/** Maximum Angle*/,
            DeviationReportTypeMinimumAngle/** Minimum Angle*/
        };

        private: MeasurementImpl * m_measurement_impl;
        private: NXOpen::Session* m_owner;
        /// \cond NX_NO_DOC 
        public: explicit Measurement(NXOpen::Session *owner);


        /// \endcond 
        public: 
        /**Returns the tag of this object.  */
        tag_t Tag() const; 
        public: ~Measurement();
        /** 
            Calculates and displays 'Total Arc Length' of all the selected objects.
             <br> Type of allowed input objects  are - @link Edge Edge@endlink ,@link Line Line@endlink ,@link Arc Arc@endlink ,@link Spline Spline@endlink ,and @link Curve Curve@endlink   <br> 
             <br> In Interactive mode, output will be displayed in the listing window <br> 
             <br> In Batch mode, output will be displayed to the standard output (stdout) <br> 
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void DisplayArcLength
        (
            const std::vector<NXOpen::DisplayableObject *> & selectedObjects /** Array of objects for which length to be calculated */
        );
        /** 
            Calculates and returns 'Total Arc Length' of all the selected objects.
             <br> Type of allowed input objects  are - @link Edge Edge@endlink ,@link Line Line@endlink ,@link Arc Arc@endlink ,@link Spline Spline@endlink ,and @link Curve Curve@endlink   <br> 
             @return  Total Arc Length 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: double GetArcLength
        (
            const std::vector<NXOpen::DisplayableObject *> & selectedObjects /** Array of objects for which length to be calculated */
        );
        /** 
            Calculates and displays 'Minimum Distance " between objects.
            Start points are NOT specified for any of the objects.
             <br> Type of allowed input objects  are -  Curve, Edge, Face, Body, Plane, or Csys etc. <br> 
             <br> In Interactive mode, output will be displayed in the listing window <br> 
             <br> In Batch mode, output will be displayed to the standard output (stdout) <br> 
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void DisplayMinimumDistance
        (
            NXOpen::DisplayableObject * object1 /** First object */,
            NXOpen::DisplayableObject * object2 /** Second object*/,
            NXOpen::Point3d* closePoint1 /** Close point on first object */,
            NXOpen::Point3d* closePoint2 /** Close point on second object */
        );
        /** 
            Calculates and displays 'Minimum Distance' between objects.
            Start points are specified for both the objects. If any of object is Point,Pass NULL to the object
            and pass a point co-ordinates as a start point.
             <br> Type of allowed input objects  are -  Point, Curve, Edge, Face, Body, Plane, or Csys etc. <br> 
             <br> In Interactive mode, output will be displayed in the listing window <br> 
             <br> In Batch mode, output will be displayed to the standard output (stdout) <br> 
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void DisplayMinimumDistance
        (
            NXOpen::NXObject * object1 /** First object */,
            const NXOpen::Point3d & startPointForObject1 /**Start point for first object */,
            NXOpen::NXObject * object2 /** Second object */,
            const NXOpen::Point3d & startPointForObject2 /**Start point for second object */,
            NXOpen::Point3d* closePoint1 /** Close point on first object */,
            NXOpen::Point3d* closePoint2 /** Close point on second object */
        );
        /** 
            Calculates and displays 'Minimum Distance' between objects.
            Start points are specified only for object1.If any of object is Point,Pass NULL to the object1
            and pass a point co-ordinates as a start_point_for_object_1.
             <br> Type of allowed input objects  are -  Point, Curve, Edge, Face, Body, Plane, or Csys etc. <br> 
             <br> In Interactive mode, output will be displayed in the listing window <br> 
             <br> In Batch mode, output will be displayed to the standard output (stdout) <br> 
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void DisplayMinimumDistance
        (
            NXOpen::NXObject * object1 /** First object */,
            const NXOpen::Point3d & startPointForObject1 /**Start point for first object */,
            NXOpen::NXObject * object2 /** Second object */,
            NXOpen::Point3d* closePoint1 /** Close point on first object */,
            NXOpen::Point3d* closePoint2 /** Close point on second object */
        );
        /** 
            Calculates and displays 'Minimum Distance' between objects.
            Start points are specified only for object2.If any of object is Point,Pass NULL to the object2
            and pass a point co-ordinates as a start_point_for_object_2.
             <br> Type of allowed input objects  are -  Point, Curve, Edge, Face, Body, Plane, or Csys etc. <br> 
             <br> In Interactive mode, output will be displayed in the listing window <br> 
             <br> In Batch mode, output will be displayed to the standard output (stdout) <br> 
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void DisplayMinimumDistance
        (
            NXOpen::NXObject * object1 /** First object */,
            NXOpen::NXObject * object2 /** Second object */,
            const NXOpen::Point3d & startPointForObject2 /**Start point for second object */,
            NXOpen::Point3d* closePoint1 /** Close point on first object */,
            NXOpen::Point3d* closePoint2 /** Close point on second object */
        );
        /** 
            Calculates and returns 'Minimum Distance " between objects.
            Start points are NOT specified for any of the objects.
             <br> Type of allowed input objects  are -  Curve, Edge, Face, Body, Plane, or Csys etc. <br> 
             @return  minimum distance between two objects
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: double GetMinimumDistance
        (
            NXOpen::NXObject * object1 /** First object */,
            NXOpen::NXObject * object2 /** Second object */,
            NXOpen::Point3d* closePoint1 /** Close point on first object */,
            NXOpen::Point3d* closePoint2 /** Close point on second object */,
            double* accuracy /**Accuracy of calculation */
        );
        /** 
            Calculates and returns 'Minimum Distance " between objects.
            Start points are specified for both the objects. 
            If any of object is Point,Pass NULL to the object and pass a point co-ordinates as a start point.
             <br> Type of allowed input objects  are -  Point, Curve, Edge, Face, Body, Plane, or Csys etc. <br> 
             @return  minimum distance between two objects
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: double GetMinimumDistance
        (
            NXOpen::NXObject * object1 /** First object */,
            const NXOpen::Point3d & startPointForObject1 /**Start point for first object */,
            NXOpen::NXObject * object2 /** Second object */,
            const NXOpen::Point3d & startPointForObject2 /**Start point for second object */,
            NXOpen::Point3d* closePoint1 /** Close point on first object */,
            NXOpen::Point3d* closePoint2 /** Close point on second object */,
            double* accuracy /**Accuracy of calculation */
        );
        /** 
            Calculates and returns 'Minimum Distance " between objects.
            Start points are specified only for first object.
            If any of object is Point,Pass NULL to the object1 and pass a point co-ordinates as a start_point_for_object_1.
             <br> Type of allowed input objects  are -  Point, Curve, Edge, Face, Body, Plane, or Csys etc. <br> 
             @return  minimum distance between two objects
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: double GetMinimumDistance
        (
            NXOpen::NXObject * object1 /** First object */,
            const NXOpen::Point3d & startPointForObject1 /**Start point for first object */,
            NXOpen::NXObject * object2 /** Second object */,
            NXOpen::Point3d* closePoint1 /** Close point on first object */,
            NXOpen::Point3d* closePoint2 /** Close point on second object */,
            double* accuracy /**Accuracy of calculation */
        );
        /** 
            Calculates and returns 'Minimum Distance " between objects.
            Start points are specified only for second object.
            If any of object is Point,Pass NULL to the object2 and pass a point co-ordinates as a start_point_for_object_2.
             <br> Type of allowed input objects  are -  Point, Curve, Edge, Face, Body, Plane, or Csys etc. <br> 
             @return  Minimum distance between two objects
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: double GetMinimumDistance
        (
            NXOpen::NXObject * object1 /** First object */,
            NXOpen::NXObject * object2 /** Second object */,
            const NXOpen::Point3d & startPointForObject2 /**Start point for second object */,
            NXOpen::Point3d* closePoint1 /** Close point on first object */,
            NXOpen::Point3d* closePoint2 /** Close point on second object */,
            double* accuracy /**Accuracy of calculation */
        );
        /** 
            Calculates and displays 'Angle' between objects.
             <br> Type of allowed input objects  are -  Edge, Face, Body, Curve, Direction or Feature etc. <br> 
             <br> In Interactive mode, output will be displayed in the listing window <br> 
             <br> In Batch mode, output will be displayed to the standard output (stdout) <br> 
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void DisplayAngle
        (
            NXOpen::NXObject * object1 /**First object */,
            const NXOpen::Point3d & position1 /** Point position on first object*/,
            NXOpen::NXObject * object2 /**Second object*/,
            const NXOpen::Point3d & position2 /** Point position on second object*/
        );
        /** 
            Calculates and returns 'True Angle' between objects.
             <br> Type of allowed input objects  are -  Edge, Face, Body, Curve, Direction or Feature etc. <br> 
             @return  Angle between object1 and object2
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: double GetAngle
        (
            NXOpen::NXObject * object1 /**First object */,
            const NXOpen::Point3d & position1 /** Point position on first object*/,
            NXOpen::NXObject * object2 /**Second object*/,
            const NXOpen::Point3d & position2 /** Point position on second object*/
        );
        /** 
            Checks deviations between curves (curve to curve),and displays the report.
             <br> In Interactive mode, output will be displayed in the listing window <br> 
             <br> In Batch mode, output will be displayed to the standard output (stdout) <br> 
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void DisplayDeviationChecking
        (
            NXOpen::ICurve * curve1 /** Curve used for deviation checking */,
            NXOpen::ICurve * curve2 /** Curve used for deviation checking */,
            int numOfCheckPoints /** Number of equally spaced sample check points */,
            double distanceTolerance /** Distance Tolerance */,
            double angularTolerance /** Angle Tolerance */,
            NXOpen::Measurement::DeviationReportType reportType /** Type of the report */
        );
        /** 
            Checks deviations between a curve and a face (curve to face), and displays the report.
             <br> In Interactive mode, output will be displayed in the listing window <br> 
             <br> In Batch mode, output will be displayed to the standard output (stdout) <br> 
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void DisplayDeviationChecking
        (
            NXOpen::Curve * curve1 /** Curve used for deviation checking */,
            NXOpen::Face * face2 /** Face used for deviation checking */,
            int numOfCheckPoints /** Number of equally spaced sample check points*/,
            double distanceTolerance /** Distance Tolerance */,
            double angularTolerance /** Angle Tolerance */,
            NXOpen::Measurement::DeviationReportType reportType /** Type of the report */
        );
        /** 
            Checks deviations between a edge and a face (edge to face), and displays the report.
             <br> In Interactive mode, output will be displayed in the listing window <br> 
             <br> In Batch mode, output will be displayed to the standard output (stdout) <br> 
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void DisplayDeviationChecking
        (
            NXOpen::Face * face1 /** Face on which edge1 lies */,
            NXOpen::Edge * edge1 /** Edge used for deviation checking */,
            NXOpen::Face * face2 /** Face used for deviation checking */,
            int numOfCheckPoints /** Number of equally spaced sample check points */,
            double distanceTolerance /** Distance Tolerance */,
            double angularTolerance /** Angle Tolerance */,
            NXOpen::Measurement::DeviationReportType reportType /** Type of the report */
        );
        /** 
            Checks deviations between faces (face to face), and displays the report.
             <br> In Interactive mode, output will be displayed in the listing window <br> 
             <br> In Batch mode, output will be displayed to the standard output (stdout) <br> 
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void DisplayDeviationChecking
        (
            NXOpen::Face * face1 /** First face used for deviation checking */,
            NXOpen::Face * face2 /** Second face used for deviation checking */,
            int numOfCheckPointsU /** Number of equally spaced sample check points in u direction */,
            int numOfCheckPointsV /** Number of equally spaced sample check points in v direction */,
            double distanceTolerance /** Distance Tolerance */,
            double angularTolerance /** Angle Tolerance */,
            NXOpen::Measurement::DeviationReportType reportType /** Type of the report */
        );
        /** 
            Checks deviations between edges (edge to edge), and displays the report.
             <br> In Interactive mode, output will be displayed in the listing window <br> 
             <br> In Batch mode, output will be displayed to the standard output (stdout) <br> 
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void DisplayDeviationChecking
        (
            NXOpen::Face * face1 /** Face on which edge1 lies */,
            NXOpen::Edge * edge1 /** First edge used for deviation checking */,
            NXOpen::Face * face2 /** Face on which edge2 lies */,
            NXOpen::Edge * edge2 /** Second edge used for deviation checking */,
            int numOfCheckPoints /** Number of equally spaced sample check points */,
            double distanceTolerance /** Distance Tolerance */,
            double angularTolerance /** Angle Tolerance */,
            NXOpen::Measurement::DeviationReportType reportType /** Type of the report */
        );
        /** 
            Calculates and displays the arc length between two points on curves.  The points may be
            on a single curve or a set of connected curves.
             <br> Type of allowed input objects is @link Point Point@endlink  <br> 
             <br> In Interactive mode, output will be displayed in the listing window <br> 
             <br> In Batch mode, output will be displayed to the standard output (stdout) <br> 
            
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void DisplayArcLengthBetweenPoints
        (
            NXOpen::Point * point1 /** First point on curve */,
            NXOpen::Point * point2 /** Second point on curve */
        );
        /** 
            Calculates and returns the arc length between two points on curves.  The points may be
            on a single curve or a set of connected curves.  Also returns the curves that is the
            shortest path between the two points.
             <br> Type of allowed input objects is @link Point Point@endlink  <br> 
            
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void GetArcLengthBetweenPoints
        (
            NXOpen::Point * point1 /** First point on curve */,
            NXOpen::Point * point2 /** Second point on curve */,
            double* length /** Arc length between the two points*/,
            std::vector<NXOpen::Curve *> & curves /** The curves of the shortest path */
        );
        /** 
            Calculates and displays the Routing path length.  If the path is disconnected, not all of
            the @link Routing::ISegment Routing::ISegment@endlink s can be arranged end to end, the length
            returned is the sum of the lengths of the segments.
             <br> Type of allowed input objects is @link Routing::ISegment Routing::ISegment@endlink  <br> 
             <br> In Interactive mode, output will be displayed in the listing window <br> 
             <br> In Batch mode, output will be displayed to the standard output (stdout) <br> 
            
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void DisplayRoutingPathLength
        (
            const std::vector<NXOpen::Routing::ISegment *> & selectedObjects /** Array of @link Routing::ISegment Routing::ISegment@endlink s for which length is calculated */,
            std::vector<NXOpen::Routing::ISegment *> & usedObjects /** Array of USED @link Routing::ISegment Routing::ISegment@endlink s for which length is calculated */
        );
        /** 
            Calculates and returns the Routing path length.  If the path is disconnected, not all of
            the @link Routing::ISegment Routing::ISegment@endlink s can be arranged end to end, the length
            returned is the sum of the lengths of the segments.
             <br> Type of allowed input objects is @link Routing::ISegment Routing::ISegment@endlink  <br> 
             @return  Sum of the individual lengths 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: double GetRoutingPathLength
        (
            const std::vector<NXOpen::NXObject *> & selectedObjects /** Array of @link Routing::ISegment Routing::ISegment@endlink s and @link Assemblies::Component Assemblies::Component@endlink s for which length is calculated */,
            std::vector<NXOpen::NXObject *> & usedObjects /** The routing objects used in the path length computation */,
            std::vector<double> & individualLengths /** individuallengths */ 
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
