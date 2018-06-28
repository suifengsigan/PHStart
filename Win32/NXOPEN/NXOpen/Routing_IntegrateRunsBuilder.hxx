#ifndef NXOpen_ROUTING_INTEGRATERUNSBUILDER_HXX_INCLUDED
#define NXOpen_ROUTING_INTEGRATERUNSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Routing_IntegrateRunsBuilder.ja
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
#include <NXOpen/Routing_IntegrateRunsBuilder.hxx>
#include <NXOpen/SelectObject.hxx>
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
        class IntegrateRunsBuilder;
    }
    class Builder;
    class NXObject;
    class SelectNXObject;
    namespace Routing
    {
        class _IntegrateRunsBuilderBuilder;
        class IntegrateRunsBuilderImpl;
        /** Builder Class for Integrate Runs Object  <br> To create a new instance of this class, use @link Routing::RouteManager::IntegrateRunsBuilder Routing::RouteManager::IntegrateRunsBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        RunAttributes </td> <td> 
         
        FirstRun </td> </tr> 

        </table>  

         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_ROUTINGEXPORT  IntegrateRunsBuilder : public Builder
        {
            /** RunAttributes from which Run */
            public: enum Enum
            {
                EnumFirstRun/** first run */ ,
                EnumSecondRun/** second run */ 
            };

            /** Enums to distinguish callback's for from/to/member Item buttons*/
            public: enum Button
            {
                ButtonFromItems/** Set as FromItem for selected node in tree list*/,
                ButtonToItems/** Set as ToItem for selected node in tree list*/,
                ButtonMemberItems/** Set as MemberItem for selected node in tree list*/,
                ButtonUnknown = -1/** unknown button ID */
            };

            private: IntegrateRunsBuilderImpl * m_integraterunsbuilder_impl;
            private: friend class  _IntegrateRunsBuilderBuilder;
            protected: IntegrateRunsBuilder();
            public: ~IntegrateRunsBuilder();
            /**Returns  the first run 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXOpen::SelectNXObject * FirstRun
            (
            );
            /**Returns  the second run 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXOpen::SelectNXObject * SecondRun
            (
            );
            /** Updates the selected nodes in Specify From/To item tree list to From/To/Member item based on buttonType 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void ModifyItemsButton
            (
                const std::vector<NXOpen::NXObject *> & objects /** object of From/To/Member Items of a Run */,
                NXOpen::Routing::IntegrateRunsBuilder::Button buttonType /** Modify the selected nodes to  From,To,Member Items*/
            );
            /**Returns  the user mentioned run name for Integrated Run
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXString RunName
            (
            );
            /**Sets  the user mentioned run name for Integrated Run
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetRunName
            (
                const NXString & runName /** runname */ 
            );
            /**Sets  the user mentioned run name for Integrated Run
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            void SetRunName
            (
                const char * runName /** runname */ 
            );
            /**Returns  the run attributes 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: NXOpen::Routing::IntegrateRunsBuilder::Enum RunAttributes
            (
            );
            /**Sets  the run attributes 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : routing_advanced ("Routing Advanced"), routing_base ("Routing Basic") */
            public: void SetRunAttributes
            (
                NXOpen::Routing::IntegrateRunsBuilder::Enum runAttributes /** runattributes */ 
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
