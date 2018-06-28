#ifndef NXOpen_CAE_AUTOPAIRSBUILDER_HXX_INCLUDED
#define NXOpen_CAE_AUTOPAIRSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_AutoPairsBuilder.ja
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
#include <NXOpen/CAE_AutoPairsBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/libnxopencpp_cae_exports.hxx>

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
        class AutoPairsBuilder;
    }
    class Builder;
    namespace CAE
    {
        class PropertyTable;
    }
    namespace CAE
    {
        class SelectCAEFaceList;
    }
    namespace CAE
    {
        class _AutoPairsBuilderBuilder;
        class AutoPairsBuilderImpl;
        /**
            Builds a @link CAE::AutoPairs CAE::AutoPairs@endlink  object which 
            represets a recipe for generating face pairs from a selected set of faces
            or solids in the model whose distance is less than a specified tolerance. 
             <br> To create a new instance of this class, use @link CAE::SimSimulation::CreateAutoPairsBuilder CAE::SimSimulation::CreateAutoPairsBuilder@endlink  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  AutoPairsBuilder : public Builder
        {
            private: AutoPairsBuilderImpl * m_autopairsbuilder_impl;
            private: friend class  _AutoPairsBuilderBuilder;
            protected: AutoPairsBuilder();
            public: ~AutoPairsBuilder();
            /**Returns  the geometry selection 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::SelectCAEFaceList * GeometrySelection
            (
            );
            /**Returns  the AutoPair's property table 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::PropertyTable * PropertyTable
            (
            );
            /** Preview the list of face-pairs  
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void PreviewButton
            (
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
