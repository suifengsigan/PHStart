#ifndef NXOpen_ROUTING_OFFSETPATH_HXX_INCLUDED
#define NXOpen_ROUTING_OFFSETPATH_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Routing_OffsetPath.ja
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
#include <NXOpen/INXObject.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/Routing_IPath.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_routing_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Routing
    {
        class OffsetPath;
    }
    namespace Assemblies
    {
        class Component;
    }
    class BasePart;
    class INXObject;
    class NXObject;
    namespace Routing
    {
        class ControlPoint;
    }
    namespace Routing
    {
        class IPath;
    }
    namespace Routing
    {
        class ISegment;
    }
    namespace Routing
    {
        class _OffsetPathBuilder;
        class OffsetPathImpl;
        /** The Routing OffsetPath object is the set of information needed to define an offset route.
              <br> To obtain an instance of this class use @link Routing::OffsetPathCollection Routing::OffsetPathCollection@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ROUTINGEXPORT  OffsetPath : public NXObject, public virtual Routing::IPath
        {
            private: OffsetPathImpl * m_offsetpath_impl;
            private: friend class  _OffsetPathBuilder;
            protected: OffsetPath();
            public: ~OffsetPath();
            /** The path segments for an offset object.  @return  segment list for the offset object 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: std::vector<NXOpen::Routing::ISegment *> GetOffsetPathSegments
            (
            );
            /** The path segments for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetOffsetPathSegments
            (
                const std::vector<NXOpen::Routing::ISegment *> & segments /** segment list for the offset object */
            );
            /**Returns  the vector for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXOpen::Vector3d OffsetVector
            (
            );
            /**Sets  the vector for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetOffsetVector
            (
                const NXOpen::Vector3d & vector /** vector for the offset object */
            );
            /** The reference axes for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void GetOffsetReferenceAxes
            (
                NXOpen::Point3d* orgin /** origin for the offset object           */,
                NXOpen::Vector3d* xVector /** X reference axes for the offset object */,
                NXOpen::Vector3d* yVector /** Y reference axes for the offset object */
            );
            /** The reference axes for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetOffsetReferenceAxes
            (
                const NXOpen::Point3d & orgin /** origin for the offset object           */,
                const NXOpen::Vector3d & xVector /** X reference axes for the offset object */,
                const NXOpen::Vector3d & yVector /** Y reference axes for the offset object */
            );
            /** Returns the list of all of the offset paths for a master path  @return  list of all of the offset paths in this master object 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: std::vector<NXOpen::Routing::IPath *> GetOffsetPaths
            (
            );
            /** The master path object for this offset object.  @return  master path for this offset object 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXOpen::Routing::IPath * GetMasterPath
            (
            );
            /** The master path object for this offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetMasterPath
            (
                NXOpen::Routing::IPath * masterPath /** master path for this offset object */
            );
            /**Returns  the isMaster state for this offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: bool IsMaster
            (
            );
            /**Sets  the isMaster state for this offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetMaster
            (
                bool masterState /** the state of the offset path object */
            );
            /**Returns  the isSlave state for this offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: bool IsSlave
            (
            );
            /**Sets  the isSlave state for this offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetSlave
            (
                bool masterState /** the state of the offset path object */
            );
            /**Returns  the bend radius for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: double BendRadius
            (
            );
            /**Sets  the bend radius for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetBendRadius
            (
                double radius /** radius */ 
            );
            /**Returns  the bend ratio for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: double BendRatio
            (
            );
            /**Sets  the bend ratio for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetBendRatio
            (
                double ratio /** ratio */ 
            );
            /**Returns  the use bend ratio flag for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: bool UseBendRatio
            (
            );
            /**Sets  the use bend ratio flag for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetUseBendRatio
            (
                bool ratioState /** ratio state */ 
            );
            /**Returns  the copy corner flag for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: bool CopyCornerFlag
            (
            );
            /**Sets  the copy corner flag for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetCopyCornerFlag
            (
                bool copyCorner /** copy corner */ 
            );
            /**Returns  the use maintain stock flag for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: bool MaintainStockFlag
            (
            );
            /**Sets  the use maintain stock flag for an offset object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetMaintainStockFlag
            (
                bool maintainStock /** maintain stock */ 
            );
            /** Breaks the associativity of a parent ( master ) path to 
                        its immediate children ( slave ) paths. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void RemovePathAssociativityToImmediateChildren
            (
            );
            /** Breaks the associativity of a child ( slave ) path to its parent ( master ) path. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void RemovePathAssociativityFromParent
            (
            );
            /** Returns the list of all of the segments contained in the IPath  @return  list of all of the segments in this IPath object 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual std::vector<NXOpen::Routing::ISegment *> GetSegmentList
            (
            );
            /** Adds segment(s) to an IPath object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void AddSegmentsToList
            (
                const std::vector<NXOpen::Routing::ISegment *> & objs /** list of segments that are to be added */
            );
            /** Removes segment(s) from the IPath object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void DelSegmentsFromList
            (
                const std::vector<NXOpen::Routing::ISegment *> & objs /** list of segments that are to be deleted */
            );
            /**Returns  the start ControlPoint for an IPath object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual NXOpen::Routing::ControlPoint * ControlPointStart
            (
            );
            /**Returns  the end ControlPoint for an IPath object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual NXOpen::Routing::ControlPoint * ControlPointEnd
            (
            );
            /**Sets  the start ControlPoint for an IPath object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void SetControlPointStart
            (
                NXOpen::Routing::ControlPoint * start /** start ControlPoint for the IPath object */
            );
            /**Sets  the end ControlPoint for an IPath object. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void SetControlPointEnd
            (
                NXOpen::Routing::ControlPoint * end /** end ControlPoint for the IPath object */
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
