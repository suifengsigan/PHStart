#ifndef NXOpen_FEATURES_SHIPDESIGN_POINTPAIRBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_POINTPAIRBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_PointPairBuilder.ja
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
#include <NXOpen/Features_ShipDesign_PointPairBuilder.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        namespace ShipDesign
        {
            class PointPairBuilder;
        }
    }
    class NXObject;
    class Point;
    namespace Features
    {
        namespace ShipDesign
        {
            class _PointPairBuilderBuilder;
            class PointPairBuilderImpl;
            /**
                  This class is used to define a pair of points in a list.
                
             <br>  Created in NX8.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  PointPairBuilder : public NXObject
            {
                private: PointPairBuilderImpl * m_pointpairbuilder_impl;
                private: friend class  _PointPairBuilderBuilder;
                protected: PointPairBuilder();
                public: ~PointPairBuilder();
                /**Returns  the first point in the point pair list element. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Point * Point1
                (
                );
                /**Sets  the first point in the point pair list element. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_basic ("Ship Basic Design") */
                public: void SetPoint1
                (
                    NXOpen::Point * point1 /** point1 */ 
                );
                /**Returns  the second point in the point pair list element. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Point * Point2
                (
                );
                /**Sets  the second point in the point pair list element. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_basic ("Ship Basic Design") */
                public: void SetPoint2
                (
                    NXOpen::Point * point2 /** point2 */ 
                );
            };
        }
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
