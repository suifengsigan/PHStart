#ifndef NXOpen_ROUTING_MANUALROUTEBUILDER_HXX_INCLUDED
#define NXOpen_ROUTING_MANUALROUTEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Routing_ManualRouteBuilder.ja
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
#include <NXOpen/ObjectList.hxx>
#include <NXOpen/Routing_ManualRouteBuilder.hxx>
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
        class ManualRouteBuilder;
    }
    class Builder;
    class Point;
    class PointList;
    namespace Routing
    {
        class Path;
    }
    namespace Routing
    {
        class _ManualRouteBuilderBuilder;
        class ManualRouteBuilderImpl;
        /**  <br> To create a new instance of this class, use @link Routing::RouteManager::CreateManualRouteBuilder Routing::RouteManager::CreateManualRouteBuilder@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_ROUTINGEXPORT  ManualRouteBuilder : public Builder
        {
            private: ManualRouteBuilderImpl * m_manualroutebuilder_impl;
            private: friend class  _ManualRouteBuilderBuilder;
            protected: ManualRouteBuilder();
            public: ~ManualRouteBuilder();
            /**Returns  the point list 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXOpen::PointList * PointList
            (
            );
            /** Cycle paths through filter paths array to enable user select path for routing. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void CyclePaths
            (
            );
            /** This function gets filter paths from builder. These paths are those which passes through selected points
                        in point list. @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: std::vector<NXOpen::Routing::Path *> GetFilterPaths
            (
            );
            /**  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetFilterPaths
            (
                const std::vector<NXOpen::Routing::Path *> & filterPaths /** filterpaths */ 
            );
            /** This function returns all possible paths for stockDevice stored in builder.  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: std::vector<NXOpen::Routing::Path *> GetPaths
            (
            );
            /** This function updates the filter paths in builder, using the given selected point. 
                        It checks all the filter paths stored in builder, and finds paths passing through given point.
                        Then it updates filter paths accordingly in builder.  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: bool UpdateFilterPaths
            (
                NXOpen::Point * point /** point */ 
            );
            /** This function returns all possible paths which are passing through all the given points.  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: std::vector<NXOpen::Routing::Path *> FindPathsFromMultiplePoints
            (
                const std::vector<NXOpen::Point *> & points /** points */ ,
                bool* foundPath /** foundpath */ 
            );
            /** This function returns currently highlighted path stored in builder  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXOpen::Routing::Path * GetHighlightPath
            (
            );
            /** This function sets highlight path amongst all paths, and this highlight path only
                         will be used for routing the stock device 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetHighlightPath
            (
                NXOpen::Routing::Path * path /** path */ 
            );
            /** This function will get all the paths stored in @link Routing::ManualRouteBuilder Routing::ManualRouteBuilder@endlink  and 
                        will create point for any location which lies on any of the paths. Newly created points will be returned
                        as result. It will also return the filter paths found using given locations.  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: std::vector<NXOpen::Routing::Path *> CreateValidPointsOnPaths
            (
                const std::vector<NXOpen::Point3d> & pointLocs /** pointlocs */ ,
                std::vector<NXOpen::Point *> & validPoints /** validpoints */ 
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
