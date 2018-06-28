#ifndef NXOpen_MECHATRONICS_PREVENTCOLLISIONBUILDER_HXX_INCLUDED
#define NXOpen_MECHATRONICS_PREVENTCOLLISIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_PreventCollisionBuilder.ja
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
#include <NXOpen/Mechatronics_PhysicsConstraintBuilder.hxx>
#include <NXOpen/Mechatronics_PreventCollisionBuilder.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/libnxopencpp_mechatronics_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Mechatronics
    {
        class PreventCollisionBuilder;
    }
    class DisplayableObject;
    namespace Mechatronics
    {
        class PhysicsConstraintBuilder;
    }
    class SelectDisplayableObject;
    namespace Mechatronics
    {
        class _PreventCollisionBuilderBuilder;
        class PreventCollisionBuilderImpl;
        /** Represents a @link Mechatronics::PreventCollision Mechatronics::PreventCollision@endlink  builder.  <br> To create a new instance of this class, use @link Mechatronics::PreventCollisionCollection::CreatePreventCollisionBuilder Mechatronics::PreventCollisionCollection::CreatePreventCollisionBuilder@endlink  <br> 
         <br>  Created in NX7.5.1.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  PreventCollisionBuilder : public Mechatronics::PhysicsConstraintBuilder
        {
            private: PreventCollisionBuilderImpl * m_preventcollisionbuilder_impl;
            private: friend class  _PreventCollisionBuilderBuilder;
            protected: PreventCollisionBuilder();
            public: ~PreventCollisionBuilder();
            /**Returns  the first object. This can be a @link RigidBody RigidBody@endlink , @link CollisionBody CollisionBody@endlink  
                    or @link CollisionSensor CollisionSensor@endlink . 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::SelectDisplayableObject * FirstBody
            (
            );
            /** Sets the first object. This can be a @link RigidBody RigidBody@endlink , @link CollisionBody CollisionBody@endlink  
                    or @link CollisionSensor CollisionSensor@endlink . 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetFirstBody
            (
                NXOpen::DisplayableObject * firstBody /** first body */ 
            );
            /**Returns  the second object. This can be a @link RigidBody RigidBody@endlink , @link CollisionBody CollisionBody@endlink  
                    or @link CollisionSensor CollisionSensor@endlink . 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::SelectDisplayableObject * SecondBody
            (
            );
            /** Sets the second object. This can be a @link RigidBody RigidBody@endlink , @link CollisionBody CollisionBody@endlink  
                    or @link CollisionSensor CollisionSensor@endlink . 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetSecondBody
            (
                NXOpen::DisplayableObject * secondBody /** second body */ 
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
