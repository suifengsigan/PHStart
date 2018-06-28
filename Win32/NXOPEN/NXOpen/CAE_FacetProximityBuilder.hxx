#ifndef NXOpen_CAE_FACETPROXIMITYBUILDER_HXX_INCLUDED
#define NXOpen_CAE_FACETPROXIMITYBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_FacetProximityBuilder.ja
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
#include <NXOpen/CAE_FacetProximityBuilder.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/libnxopendebugsessioncpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAE
    {
        class FacetProximityBuilder;
    }
    class Builder;
    namespace CAE
    {
        class SelectCAEBodyList;
    }
    class Expression;
    namespace CAE
    {
        class _FacetProximityBuilderBuilder;
        class FacetProximityBuilderImpl;
        /** Represents a @link CAE::FacetProximityBuilder CAE::FacetProximityBuilder@endlink  builder  <br> To create a new instance of this class, use @link DebugSession::CreateFacetProximityBuilder DebugSession::CreateFacetProximityBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        DisplayONOFFtoggle </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        DisplayOptionsEnum </td> <td> 
         
        LinearFacets </td> </tr> 

        <tr><td> 
         
        FacetCheckTolerance.Value </td> <td> 
         
        0.01 (millimeters part), 0.003937 (inches part) </td> </tr> 

        <tr><td> 
         
        ListOptionsEnum </td> <td> 
         
        Summary </td> </tr> 

        </table>  

         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENDEBUGSESSIONCPPEXPORT  FacetProximityBuilder : public Builder
        {
            /** List option for facet proximity to UG CAD : NX7.5 onwards  */
            public: enum ListOptionsType
            {
                ListOptionsTypeSummary/** summary */ ,
                ListOptionsTypeFullList/** full list */ 
            };

            /** List option for facet proximity to UG CAD : NX7.5 onwards  */
            public: enum DisplayOptions
            {
                DisplayOptionsLinearFacets/** linear facets */ ,
                DisplayOptionsParabolicFacets/** parabolic facets */ 
            };

            private: FacetProximityBuilderImpl * m_facetproximitybuilder_impl;
            private: friend class  _FacetProximityBuilderBuilder;
            protected: FacetProximityBuilder();
            public: ~FacetProximityBuilder();
            /**Returns  the select geometry 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::SelectCAEBodyList * SelectGeometry
            (
            );
            /**Returns  the facet check tolerance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * FacetCheckTolerance
            (
            );
            /**Returns  the list options enum 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::FacetProximityBuilder::ListOptionsType ListOptionsEnum
            (
            );
            /**Sets  the list options enum 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetListOptionsEnum
            (
                NXOpen::CAE::FacetProximityBuilder::ListOptionsType listOptionsEnum /** listoptionsenum */ 
            );
            /**Returns  the display onofftoggle 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool DisplayONOFFtoggle
            (
            );
            /**Sets  the display onofftoggle 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetDisplayONOFFtoggle
            (
                bool displayONOFFtoggle /** displayonofftoggle */ 
            );
            /**Returns  the display options enum 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::FacetProximityBuilder::DisplayOptions DisplayOptionsEnum
            (
            );
            /**Sets  the display options enum 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetDisplayOptionsEnum
            (
                NXOpen::CAE::FacetProximityBuilder::DisplayOptions displayOptionsEnum /** displayoptionsenum */ 
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
