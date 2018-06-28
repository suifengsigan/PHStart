#ifndef NXOpen_CAM_OPPOSITEDIRECTION_HXX_INCLUDED
#define NXOpen_CAM_OPPOSITEDIRECTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_OppositeDirection.ja
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
#include <NXOpen/CAM_OppositeDirection.hxx>
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
        class OppositeDirection;
    }
    namespace CAM
    {
        class _OppositeDirectionBuilder;
        class OppositeDirectionImpl;
        /** Represents OppositeDirection 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  OppositeDirection : public TaggedObject
        {
            private: OppositeDirectionImpl * m_oppositedirection_impl;
            private: friend class  _OppositeDirectionBuilder;
            protected: OppositeDirection();
            public: ~OppositeDirection();
            /**Returns  the opposite direction  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool Value
            (
            );
            /**Sets  the opposite direction  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetValue
            (
                bool newValue /** the opposite direction */
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
