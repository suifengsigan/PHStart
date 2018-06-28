#ifndef NXOpen_ROUTING_FITTINGPORT_HXX_INCLUDED
#define NXOpen_ROUTING_FITTINGPORT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Routing_FittingPort.ja
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
#include <NXOpen/Routing_IAxisPort.hxx>
#include <NXOpen/Routing_ICharacteristic.hxx>
#include <NXOpen/Routing_IRoutePosition.hxx>
#include <NXOpen/Routing_Port.hxx>
#include <NXOpen/Routing_CharacteristicList.hxx>
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
        class FittingPort;
    }
    namespace Assemblies
    {
        class Component;
    }
    class Axis;
    class BasePart;
    class DisplayableObject;
    class Expression;
    class INXObject;
    class Point;
    namespace Routing
    {
        class CharacteristicList;
    }
    namespace Routing
    {
        class IAxisPort;
    }
    namespace Routing
    {
        class ICharacteristic;
    }
    namespace Routing
    {
        class IRoutePosition;
    }
    namespace Routing
    {
        class Port;
    }
    namespace Routing
    {
        class _FittingPortBuilder;
        class FittingPortImpl;
        /** Represents a Routing Fitting Port Object@link FittingPort FittingPort@endlink .
                These objects are ones to which segments are routed to or from when
                creating a routing path.
               <br> To create an instance of this class use @link Routing::FittingPortCollection Routing::FittingPortCollection@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ROUTINGEXPORT  FittingPort : public Routing::Port, public virtual Routing::IAxisPort
        {
            private: FittingPortImpl * m_fittingport_impl;
            private: friend class  _FittingPortBuilder;
            protected: FittingPort();
            public: ~FittingPort();
            /** Sets the align vector of Port 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void SetAlignVector
            (
                const NXOpen::Vector3d & vector /** Vector direction in absolute co-ordinate system */
            );
            /** Sets the rotation vector of Port 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void SetRotationVector
            (
                const NXOpen::Vector3d & vector /** Vector direction in absolute co-ordinate system */
            );
            /** Sets the object used to derive the rotation vector of Port 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void SetRotationObject
            (
                NXOpen::DisplayableObject * rotationObject /** Object used to derive the rotation vector */
            );
            /** Sets the forward extension value of a port, i.e. the minimum length that
                        a segment must remain straight coming out of a @link Port Port@endlink 
                      
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void SetForwardExtension
            (
                double forwardExtension /** Port extension */
            );
            /**Returns  the forward extension object of a port, i.e. an expression representing the minimum
                        length that a segment must remain straight coming out of a @link Port Port@endlink 
                      
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual NXOpen::Expression * ForwardExtensionObject
            (
            );
            /**Sets  the forward extension object of a port, i.e. an expression representing the minimum
                        length that a segment must remain straight coming out of a @link Port Port@endlink 
                      
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void SetForwardExtensionObject
            (
                NXOpen::Expression * forwardExtension /** Forward Extension Expression */
            );
            /** The engagment distance of a @link IAxisPort IAxisPort@endlink , i.e. the distance 
                        behind the port that another fitting or stock may engage
                      
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void SetEngagement
            (
                double engagement /** Engagement distance */
            );
            /**Returns  the engagement object of a port, i.e. an expression representing the
                        distance behind the port that another fitting or stock may engage
                      
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual NXOpen::Expression * EngagementObject
            (
            );
            /**Sets  the engagement object of a port, i.e. an expression representing the
                        distance behind the port that another fitting or stock may engage
                      
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void SetEngagementObject
            (
                NXOpen::Expression * engagement /** Engagement Expression */
            );
            /** Sets the cutback length of a port, i.e. the length along the wire from
                        the port where individual wires leave a bundle to attach to pins
                      
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void SetCutbackLength
            (
                double cutbackLength /** Cutback Length */
            );
            /**Returns  the cutback length object of a port, i.e. an expression representing the length
                        along the wire from the port where individual wires leave a bundle to attach to pins
                      
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual NXOpen::Expression * CutbackLengthObject
            (
            );
            /**Sets  the cutback length object of a port, i.e. an expression representing the length
                        along the wire from the port where individual wires leave a bundle to attach to pins
                      
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void SetCutbackLengthObject
            (
                NXOpen::Expression * cutbackLength /** Cutback Length Expression */
            );
            /**Returns   the axis that defines the port
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual NXOpen::Axis * Axis
            (
            );
            /**Sets   the axis that defines the port
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: virtual void SetAxis
            (
                NXOpen::Axis * axis /** axis */ 
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
