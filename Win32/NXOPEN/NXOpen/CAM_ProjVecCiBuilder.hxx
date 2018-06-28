#ifndef NXOpen_CAM_PROJVECCIBUILDER_HXX_INCLUDED
#define NXOpen_CAM_PROJVECCIBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_ProjVecCiBuilder.ja
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
        class ProjVecCiBuilder;
    }
    class Direction;
    class Point;
    namespace CAM
    {
        class _ProjVecCiBuilderBuilder;
        class ProjVecCiBuilderImpl;
        /** Represents a tool axis ci Builder 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  ProjVecCiBuilder : public TaggedObject
        {
            /** Available types for Project Vector */
            public: enum DpmProjTypes
            {
                DpmProjTypesProjVecFixed/** Specify Vector */,
                DpmProjTypesProjVecToolAxis/** Tool Axis */,
                DpmProjTypesProjVecFromPoint/** way from Point */,
                DpmProjTypesProjVecToPoint/** Toward Point */,
                DpmProjTypesProjVecFromLine/** Away from Line */,
                DpmProjTypesProjVecToLine/** Toward Line */,
                DpmProjTypesProjVecNormToDrive/** Normal to Drive */,
                DpmProjTypesProjVecToDrive/** Toward Drive */,
                DpmProjTypesProjVecRuling/** Swarf Ruling */,
                DpmProjTypesProjVecUserDefined/** User Function */,
                DpmProjTypesProjVecTotal/** Total */
            };

            private: ProjVecCiBuilderImpl * m_projveccibuilder_impl;
            private: friend class  _ProjVecCiBuilderBuilder;
            protected: ProjVecCiBuilder();
            public: ~ProjVecCiBuilder();
            /** Get the Project Type  @return  the project type value 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ProjVecCiBuilder::DpmProjTypes GetDpmProjType
            (
            );
            /** Set the Project Type 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDpmProjType
            (
                NXOpen::CAM::ProjVecCiBuilder::DpmProjTypes projType /** the project type value */
            );
            /**Returns  the Point  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * Point
            (
            );
            /**Sets  the Point  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetPoint
            (
                NXOpen::Point * pointTag /** the  Point */
            );
            /**Returns  the  Vector 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * Vector
            (
            );
            /**Sets  the  Vector 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetVector
            (
                NXOpen::Direction * vector /** the  Vector */
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
