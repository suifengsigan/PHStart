#ifndef NXOpen_MECHATRONICS_GRAPHCONTROLBUILDER_HXX_INCLUDED
#define NXOpen_MECHATRONICS_GRAPHCONTROLBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_GraphControlBuilder.ja
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
#include <NXOpen/Expression.hxx>
#include <NXOpen/Mechatronics_PhysicsConstraintBuilder.hxx>
#include <NXOpen/Mechatronics_GraphControlBuilder.hxx>
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
        class GraphControlBuilder;
    }
    class Expression;
    namespace Mechatronics
    {
        class MotionProfile;
    }
    namespace Mechatronics
    {
        class PhysicsConstraintBuilder;
    }
    namespace Mechatronics
    {
        class SelectPhysicsConstraint;
    }
    namespace Mechatronics
    {
        class _GraphControlBuilderBuilder;
        class GraphControlBuilderImpl;
        /** Represents a @link Mechatronics::GraphControl Mechatronics::GraphControl@endlink  builder  <br> To create a new instance of this class, use @link Mechatronics::GraphControlCollection::CreateGraphControlBuilder Mechatronics::GraphControlCollection::CreateGraphControlBuilder@endlink  <br> 
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  GraphControlBuilder : public Mechatronics::PhysicsConstraintBuilder
        {
            /** the action in the end of graph. */
            public: enum EndAction
            {
                EndActionRestartfromBeginning/** restart from the beginning of graph. */,
                EndActionDeactivateGraphControl/** deactivate this graph control. */
            };

            private: GraphControlBuilderImpl * m_graphcontrolbuilder_impl;
            private: friend class  _GraphControlBuilderBuilder;
            protected: GraphControlBuilder();
            public: ~GraphControlBuilder();
            /**Returns  the select axis control. This can be a @link SpeedControl SpeedControl@endlink , @link PositionControl PositionControl@endlink . 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Mechatronics::SelectPhysicsConstraint * SelectAxisControl
            (
            );
            /**Returns  the initial offset. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Expression * InitialTime
            (
            );
            /**Returns  the value offset. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Expression * ValueOffset
            (
            );
            /**Returns  the graph end action. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Mechatronics::GraphControlBuilder::EndAction GraphEndAction
            (
            );
            /**Sets  the graph end action. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetGraphEndAction
            (
                NXOpen::Mechatronics::GraphControlBuilder::EndAction graphEndAction /** graphendaction */ 
            );
            /**Returns  the motion profile. This can be @link MotionProfile MotionProfile@endlink . 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Mechatronics::MotionProfile * MotionProfile
            (
            );
            /**Sets  the motion profile. This can be @link MotionProfile MotionProfile@endlink . 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetMotionProfile
            (
                NXOpen::Mechatronics::MotionProfile * profile /** profile */ 
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
