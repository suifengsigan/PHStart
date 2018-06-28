#ifndef NXOpen_ROUTING_ELECTRICAL_ELECTRICALSTOCKDEFINITION_HXX_INCLUDED
#define NXOpen_ROUTING_ELECTRICAL_ELECTRICALSTOCKDEFINITION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Routing_Electrical_ElectricalStockDefinition.ja
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
#include <NXOpen/Routing_StockDefinition.hxx>
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
            class ElectricalStockDefinition;
        }
    }
    namespace Routing
    {
        class StockDefinition;
    }
    namespace Routing
    {
        namespace Electrical
        {
            class _ElectricalStockDefinitionBuilder;
            class ElectricalStockDefinitionImpl;
            /** Represents @link Routing::Electrical::ElectricalStockDefinition Routing::Electrical::ElectricalStockDefinition@endlink  object  <br> Creator not available in KF. <br> 
             <br>  Created in NX4.0.2.  <br>  
            */
            class NXOPENCPP_ROUTINGEXPORT  ElectricalStockDefinition : public Routing::StockDefinition
            {
                /** Stock section type. 
                 <br>  Created in NX4.0.2.  <br>  
                */
                public: enum SectionType
                {
                    SectionTypeCircular/** circular */ ,
                    SectionTypeRectangular/** rectangular */ 
                };

                private: ElectricalStockDefinitionImpl * m_electricalstockdefinition_impl;
                private: friend class  _ElectricalStockDefinitionBuilder;
                protected: ElectricalStockDefinition();
                public: ~ElectricalStockDefinition();
                /**Returns  the width of stock 
                 <br>  Created in NX4.0.2.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: double Width
                (
                );
                /**Sets  the width of stock 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: void SetWidth
                (
                    double widthValue /** widthvalue */ 
                );
                /**Returns   the height of stock 
                 <br>  Created in NX4.0.2.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: double Height
                (
                );
                /**Sets   the height of stock 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: void SetHeight
                (
                    double heightValue /** heightvalue */ 
                );
                /**Returns   the gauge of stock 
                 <br>  Created in NX4.0.2.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: double Gauge
                (
                );
                /**Sets   the gauge of stock 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: void SetGauge
                (
                    double gaugeValue /** gaugevalue */ 
                );
                /**Returns   the wire type of stock 
                 <br>  Created in NX4.0.2.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: NXString WireType
                (
                );
                /**Sets   the wire type of stock 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: void SetWireType
                (
                    const NXString & wireType /** wiretype */ 
                );
                /**Sets   the wire type of stock 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                void SetWireType
                (
                    const char * wireType /** wiretype */ 
                );
                /**Returns   the linear density of stock  
                 <br>  Created in NX4.0.2.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: double LinearDensity
                (
                );
                /**Sets   the linear density of stock  
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: void SetLinearDensity
                (
                    double densityValue /** densityvalue */ 
                );
                /**Returns   the min bend radius of stock 
                 <br>  Created in NX4.0.2.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: double MinBendRadius
                (
                );
                /**Sets   the min bend radius of stock 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: void SetMinBendRadius
                (
                    double radiusValue /** radiusvalue */ 
                );
                /**Returns   the cross section type of stock 
                 <br>  Created in NX4.0.2.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: NXOpen::Routing::Electrical::ElectricalStockDefinition::SectionType CrossSectionType
                (
                );
                /**Sets   the cross section type of stock 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
                public: void SetCrossSectionType
                (
                    NXOpen::Routing::Electrical::ElectricalStockDefinition::SectionType sectionType /** sectiontype */ 
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
