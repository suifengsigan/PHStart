#ifndef NXOpen_FEATURES_SHEETMETAL_EDGERIPBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHEETMETAL_EDGERIPBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_SheetMetal_EdgeRipBuilder.ja
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
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        namespace SheetMetal
        {
            class EdgeRipBuilder;
        }
    }
    class Edge;
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace Features
    {
        class SketchFeature;
    }
    class Section;
    namespace Features
    {
        namespace SheetMetal
        {
            class _EdgeRipBuilderBuilder;
            class EdgeRipBuilderImpl;
            /** Represents a Edge Rip feature builder.  <br> To create a new instance of this class, use @link Features::SheetMetal::SheetmetalManager::CreateEdgeRipFeatureBuilder Features::SheetMetal::SheetmetalManager::CreateEdgeRipFeatureBuilder@endlink  <br> 
             <br>  Created in NX4.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  EdgeRipBuilder : public Features::FeatureBuilder
            {
                private: EdgeRipBuilderImpl * m_edgeripbuilder_impl;
                private: friend class  _EdgeRipBuilderBuilder;
                protected: EdgeRipBuilder();
                public: ~EdgeRipBuilder();
                /**Returns  the section used by Edge Rip 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: NXOpen::Section * Section
                (
                );
                /**Sets  the section used by Edge Rip 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: void SetSection
                (
                    NXOpen::Section * section /** section */ 
                );
                /**Returns  the Slave Sketch used by the Edge Rip, If one exists.
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: NXOpen::Features::SketchFeature * Sketch
                (
                );
                /**Sets  the Slave Sketch used by the Edge Rip, If one exists.
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: void SetSketch
                (
                    NXOpen::Features::SketchFeature * sketch /** sketch */ 
                );
                /** Edges to rip 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: void SetRipEdges
                (
                    const std::vector<NXOpen::Edge *> & ripEdges /** Rip Edges */
                );
                /** Edges to rip  @return  Rip Edges 
                 <br>  Created in NX5.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: std::vector<NXOpen::Edge *> GetRipEdges
                (
                );
                /** Verify whether the builder data is valid for creating a Edge Rip or not.
                             <br> 
                                 If the Builder data is valid, returned value shall be 0

                             <br> 
                         @return  Data Validity Flag.
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") */
                public: int ValidateBuilderData
                (
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