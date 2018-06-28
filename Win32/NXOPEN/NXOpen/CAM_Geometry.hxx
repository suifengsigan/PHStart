#ifndef NXOpen_CAM_GEOMETRY_HXX_INCLUDED
#define NXOpen_CAM_GEOMETRY_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_Geometry.ja
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
#include <NXOpen/CAM_Geometry.hxx>
#include <NXOpen/CAM_GeometrySet.hxx>
#include <NXOpen/CAM_Topology.hxx>
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/ObjectList.hxx>
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
        class Geometry;
    }
    namespace CAM
    {
        class GeometrySet;
    }
    namespace CAM
    {
        class GeometrySetList;
    }
    namespace CAM
    {
        class Topology;
    }
    class DisplayableObject;
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    namespace CAM
    {
        class _GeometryBuilder;
        class GeometryImpl;
        /** Represents a CAM geometry object 
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  Geometry : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            private: GeometryImpl * m_geometry_impl;
            private: friend class  _GeometryBuilder;
            protected: Geometry();
            public: ~Geometry();
            /** Prepare and update geometry data
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void InitializeData
            (
                bool reloadGeometry /** the flag to reload the geometry list if it has been changed somewhere.*/
            );
            /**Returns  the geometry list 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::GeometrySetList * GeometryList
            (
            );
            /** Create an empty geometry set @return  the geometry set object 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::GeometrySet * CreateGeometrySet
            (
            );
            /** Append an geometry set with dumb rules @return  the appended geometry set object 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: NXOpen::CAM::GeometrySet * AppendGeometrySet
            (
                NXOpen::CAM::GeometrySet * templateSet /** the template set for copying custom data */,
                const std::vector<NXOpen::DisplayableObject *> & entities /** array of the geometry entities for appending. The entities must be from same component part */
            );
            /**Returns  the topology builder 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::Topology * Topology
            (
            );
            /** Expanding the geometry sets
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void ExpandSets
            (
                const std::vector<NXOpen::CAM::GeometrySet *> & sets /** array of sets */
            );
            /** Pre-select the wall geometry 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void PreselectGeometry
            (
            );
            /** Validate whether the inputs to the component are sufficient for 
                        commit to be called.  If the component is not in a state to commit
                        then an exception is thrown.  For example, if the component requires
                        you to set some property, this method will throw an exception if
                        you haven't set it.  This method throws a not-yet-implemented
                        NXException for some components.
                     @return  Was self validation successful 
             <br>  Created in NX3.0.1.  <br>  
             <br> License requirements : None */
            public: virtual bool Validate
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
