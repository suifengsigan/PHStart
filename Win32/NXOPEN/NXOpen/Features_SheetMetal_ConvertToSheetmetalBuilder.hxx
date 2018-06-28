#ifndef NXOpen_FEATURES_SHEETMETAL_CONVERTTOSHEETMETALBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHEETMETAL_CONVERTTOSHEETMETALBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_SheetMetal_ConvertToSheetmetalBuilder.ja
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
#include <NXOpen/Features_SheetMetal_SheetmetalBaseBuilder.hxx>
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
            class ConvertToSheetmetalBuilder;
        }
    }
    class Edge;
    class Expression;
    class Face;
    namespace Features
    {
        namespace SheetMetal
        {
            class SheetmetalBaseBuilder;
        }
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
            class _ConvertToSheetmetalBuilderBuilder;
            class ConvertToSheetmetalBuilderImpl;
            /** This is the feature builder for the convert to sheetmetal feature.  <br> To create a new instance of this class, use @link Features::SheetMetal::SheetmetalManager::CreateConvertToSheetmetalFeatureBuilder Features::SheetMetal::SheetmetalManager::CreateConvertToSheetmetalFeatureBuilder@endlink  <br> 
             <br>  Created in NX4.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  ConvertToSheetmetalBuilder : public Features::SheetMetal::SheetmetalBaseBuilder
            {
                /** This enum represents the bend relief type. */
                public: enum BendReliefTypeOptions
                {
                    BendReliefTypeOptionsNone/** none */ ,
                    BendReliefTypeOptionsSquare/** square */ ,
                    BendReliefTypeOptionsRound/** round */ 
                };

                private: ConvertToSheetmetalBuilderImpl * m_converttosheetmetalbuilder_impl;
                private: friend class  _ConvertToSheetmetalBuilderBuilder;
                protected: ConvertToSheetmetalBuilder();
                public: ~ConvertToSheetmetalBuilder();
                /**Returns  the base face from which the thickness of the part is determined.
                        
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: NXOpen::Face * BaseFace
                (
                );
                /**Sets  the base face from which the thickness of the part is determined.
                        
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: void SetBaseFace
                (
                    NXOpen::Face * baseFace /** base face */ 
                );
                /**Returns  the section containing curves that need to be ripped while converting to sheetmetal.
                        
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: NXOpen::Section * RipSection
                (
                );
                /**Sets  the section containing curves that need to be ripped while converting to sheetmetal.
                        
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: void SetRipSection
                (
                    NXOpen::Section * section /** section */ 
                );
                /** Gets the array of edges selected for ripping while converting to sheetmetal.
                         @return  
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: std::vector<NXOpen::Edge *> GetRipEdges
                (
                );
                /**  Sets the array of edges that need to be ripped while converting to sheetmetal.
                        
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: void SetRipEdges
                (
                    const std::vector<NXOpen::Edge *> & ripEdges /** rip edges */ 
                );
                /**Returns  the bend relief type.
                        
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: NXOpen::Features::SheetMetal::ConvertToSheetmetalBuilder::BendReliefTypeOptions BendReliefType
                (
                );
                /**Sets  the bend relief type.
                        
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: void SetBendReliefType
                (
                    NXOpen::Features::SheetMetal::ConvertToSheetmetalBuilder::BendReliefTypeOptions bendReliefType /** bend relief type */ 
                );
                /**Returns  the bend relief width.
                        
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: NXOpen::Expression * BendReliefWidth
                (
                );
                /** 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: void SetBendReliefWidth
                (
                    const NXString & bendReliefWidth /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
                );
                /** 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                void SetBendReliefWidth
                (
                    const char * bendReliefWidth /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
                );
                /**Returns  the bend relief depth.
                        
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: NXOpen::Expression * BendReliefDepth
                (
                );
                /** 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: void SetBendReliefDepth
                (
                    const NXString & bendReliefDepth /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
                );
                /** 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                void SetBendReliefDepth
                (
                    const char * bendReliefDepth /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
                );
                /**Returns  the internal sketch (used to specify rip curves), if it exists.
                        
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: NXOpen::Features::SketchFeature * Sketch
                (
                );
                /**Sets  the internal sketch (used to specify rip curves), if it exists.
                        
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: void SetSketch
                (
                    NXOpen::Features::SketchFeature * sketch /** sketch */ 
                );
                /** Verify that the builder data is valid for feature creation. 
                             <br> 
                                 If the builder data is valid, it returns a value of 0.
                             <br> 
                         @return  data validity flag (0 - valid, 1 - invalid) 
                 <br>  Created in NX4.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") OR nx_ship_detail ("Ship Detail Design") */
                public: int ValidateBuilderData
                (
                );
                /**Returns  the option for Maintain zero bend radius. If the option is set to true,
                            a tiny 0.02 mm radius bend will be created on inside sharp edge (for the 
                            features created in NX8 or later releases); else the radius value from 
                            NXSM Preferences will be used.
                        
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") */
                public: bool MaintainZeroBendRadius
                (
                );
                /**Sets  the option for Maintain zero bend radius. If the option is set to true,
                            a tiny 0.02 mm radius bend will be created on inside sharp edge (for the 
                            features created in NX8 or later releases); else the radius value from 
                            NXSM Preferences will be used.
                        
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_sheet_metal ("NX Sheet Metal") OR nx_flexible_pcb ("NX Flexible PCB") */
                public: void SetMaintainZeroBendRadius
                (
                    bool maintainZeroBendRadius /** maintain zero bend radius */ 
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
