#ifndef NXOpen_ROUTING_ELECTRICAL_CABLEDEVICE_HXX_INCLUDED
#define NXOpen_ROUTING_ELECTRICAL_CABLEDEVICE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Routing_Electrical_CableDevice.ja
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
#include <NXOpen/Routing_Electrical_ElectricalStockDevice.hxx>
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
        namespace Electrical
        {
            class CableDevice;
        }
    }
    namespace Routing
    {
        namespace Electrical
        {
            class CableDefinition;
        }
    }
    namespace Routing
    {
        namespace Electrical
        {
            class ElectricalStockDevice;
        }
    }
    namespace Routing
    {
        namespace Electrical
        {
            class _CableDeviceBuilder;
            class CableDeviceImpl;
            /** Corresponds to a cable instance of an @link Routing::Electrical::ElectricalStockDevice Routing::Electrical::ElectricalStockDevice@endlink .
                         <br> 
                        A cable consists of both a @link Routing::Electrical::CableDevice Routing::Electrical::CableDevice@endlink 
                        and a @link Routing::Electrical::CableDefinition Routing::Electrical::CableDefinition@endlink .
                        A @link Routing::Electrical::CableDevice Routing::Electrical::CableDevice@endlink  object uses a 
                        @link Routing::Electrical::CableDefinition Routing::Electrical::CableDefinition@endlink  to hold
                        a collection of @link Routing::Electrical::WireDevice Routing::Electrical::WireDevice@endlink  objects and/or
                        @link Routing::Electrical::CableDevice Routing::Electrical::CableDevice@endlink  objects contained
                        by the cable.
                         <br> 
                        See the NX Routing help for detailed information on the Connection data model.
                     <br> Creator not available in KF. <br> 
             <br>  Created in NX4.0.2.  <br>  
            */
            class NXOPENCPP_ROUTINGEXPORT  CableDevice : public Routing::Electrical::ElectricalStockDevice
            {
                private: CableDeviceImpl * m_cabledevice_impl;
                private: friend class  _CableDeviceBuilder;
                protected: CableDevice();
                public: ~CableDevice();
                /** Returns the associated @link Routing::Electrical::CableDefinition Routing::Electrical::CableDefinition@endlink .  @return  
                 <br>  Created in NX4.0.2.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: NXOpen::Routing::Electrical::CableDefinition * GetAssemblyDefinition
                (
                );
                /** Loads the given cable part and imports the connections from given part and adds them as
                                children to the @link Routing::Electrical::CableDevice Routing::Electrical::CableDevice@endlink . 
                 <br>  Created in NX6.0.1.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: void ImportCablePart
                (
                    const NXString & partName /**Must be fullpath and PART_NAME for a regular part and PART_NAME for
                                           part family or part table parts  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
                );
                /** Loads the given cable part and imports the connections from given part and adds them as
                                children to the @link Routing::Electrical::CableDevice Routing::Electrical::CableDevice@endlink . 
                 <br>  Created in NX6.0.1.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                void ImportCablePart
                (
                    const char * partName /**Must be fullpath and PART_NAME for a regular part and PART_NAME for
                                           part family or part table parts  <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
                );
                /** Returns the part number of the conduit applied over this @link Routing::Electrical::CableDevice Routing::Electrical::CableDevice@endlink 
                                object.  @return  
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: NXString GetConduitPartNumber
                (
                );
                /** Sets the part number of the conduit to be applied over this @link Routing::Electrical::CableDevice Routing::Electrical::CableDevice@endlink 
                                object. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: void SetConduitPartNumber
                (
                    const NXString & conduitPartNumber /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
                );
                /** Sets the part number of the conduit to be applied over this @link Routing::Electrical::CableDevice Routing::Electrical::CableDevice@endlink 
                                object. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                void SetConduitPartNumber
                (
                    const char * conduitPartNumber /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
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