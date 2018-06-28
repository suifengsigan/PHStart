#ifndef NXOpen_MOTION_JOINT_HXX_INCLUDED
#define NXOpen_MOTION_JOINT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Motion_Joint.ja
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
#include <NXOpen/Motion_MotionObject.hxx>
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
        class Joint;
    }
    namespace Motion
    {
        class MotionObject;
    }
    namespace Motion
    {
        class _JointBuilder;
        class JointImpl;
        /** Represents a motion joint object  <br> To create or edit an instance of this class, use @link Motion::JointBuilder Motion::JointBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_MOTIONEXPORT  Joint : public Motion::MotionObject
        {
            private: JointImpl * m_joint_impl;
            private: friend class  _JointBuilder;
            protected: Joint();
            public: ~Joint();
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
