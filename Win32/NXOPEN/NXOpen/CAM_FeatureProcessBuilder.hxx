#ifndef NXOpen_CAM_FEATUREPROCESSBUILDER_HXX_INCLUDED
#define NXOpen_CAM_FEATUREPROCESSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_FeatureProcessBuilder.ja
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
#include <NXOpen/CAM_FeatureProcessBuilder.hxx>
#include <NXOpen/FeatureProcessBuilderStatus.hxx>
#include <NXOpen/libnxopencpp_cam_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAM
    {
        class FeatureProcessBuilder;
    }
    class Builder;
    namespace CAM
    {
        class CAMFeature;
    }
    namespace CAM
    {
        class FeatureGeometryGroup;
    }
    namespace CAM
    {
        class Operation;
    }
    class FeatureProcessBuilderStatus;
    namespace CAM
    {
        class _FeatureProcessBuilderBuilder;
        class FeatureProcessBuilderImpl;
        /** The Create Feature Process Builder class creates operations and features groups  <br> To create a new instance of this class, use @link CAM::CAMSetup::CreateFeatureProcessBuilder CAM::CAMSetup::CreateFeatureProcessBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        FeatureGrouping </td> <td> 
         
        UseExisting </td> </tr> 

        <tr><td> 
         
        Type </td> <td> 
         
        RuleBased </td> </tr> 

        </table>  

         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  FeatureProcessBuilder : public Builder
        {
            /** Type of creation */
            public: enum FeatureProcessType
            {
                FeatureProcessTypeRuleBased/** Rule based operation creation */,
                FeatureProcessTypeTemplateBased/** Template based operation creation */
            };

            /** Determines how features are allocated to feature groups */
            public: enum FeatureGroupingType
            {
                FeatureGroupingTypeAlwaysCreateNew/** Always create a new feature group */,
                FeatureGroupingTypePerFeature/** Create a feature group per feature */,
                FeatureGroupingTypeUseExisting/** Try to use existing feature groups */
            };

            private: FeatureProcessBuilderImpl * m_featureprocessbuilder_impl;
            private: friend class  _FeatureProcessBuilderBuilder;
            protected: FeatureProcessBuilder();
            public: ~FeatureProcessBuilder();
            /**Returns  the type of feature process creation 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            public: NXOpen::CAM::FeatureProcessBuilder::FeatureProcessType Type
            (
            );
            /**Sets  the type of feature process creation 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            public: void SetType
            (
                NXOpen::CAM::FeatureProcessBuilder::FeatureProcessType type /** type */ 
            );
            /** Gets the template name and the feature process template
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            public: void GetTemplate
            (
                NXString* activeTemplate /** the template used */,
                NXString* featureProcesTemplate /** the feature process sub type used */
            );
            /** Sets the active template name and the feature process template
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            public: void SetTemplate
            (
                const NXString & activeTemplate /** the template used */,
                const NXString & featureProcesTemplate /** the feature process sub type used */
            );
            /** Sets the active template name and the feature process template
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            void SetTemplate
            (
                const char * activeTemplate /** the template used */,
                const char * featureProcesTemplate /** the feature process sub type used */
            );
            /** Sets the active rule libraries
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            public: void SetRuleLibraries
            (
                std::vector<NXString> & ruleLibraries /** rulelibraries */ 
            );
            /** Gets the active rule libraries
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            public: void GetRuleLibraries
            (
                std::vector<NXString> & ruleLibraries /** rulelibraries */ 
            );
            /** Returns the name of the geometry location of the generated feature processes  @return  The parent group 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            public: NXString GetGeometryLocation
            (
            );
            /** Returns the name of the geometry location of the generated feature processes 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            public: void SetGeometryLocation
            (
                const NXString & geometryLocation /** The parent group */
            );
            /** Returns the name of the geometry location of the generated feature processes 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            void SetGeometryLocation
            (
                const char * geometryLocation /** The parent group */
            );
            /**Returns  the way features are grouped in feature processes 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            public: NXOpen::CAM::FeatureProcessBuilder::FeatureGroupingType FeatureGrouping
            (
            );
            /**Sets  the way features are grouped in feature processes 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            public: void SetFeatureGrouping
            (
                NXOpen::CAM::FeatureProcessBuilder::FeatureGroupingType featureGrouping /** featuregrouping */ 
            );
            /** Creates operations for a set of features based of the current setting of the builder  @return  List with created operations, 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            public: std::vector<NXOpen::CAM::Operation *> CreateFeatureProcesses
            (
                const std::vector<NXOpen::CAM::CAMFeature *> & features /** The manufacturing features*/,
                NXOpen::FeatureProcessBuilderStatus ** resultStatus /** Result status of creating processes. */
            );
            /** Creates operations for a set of features based of the current setting of the builder  @return  List with created operations, 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_holemaking ("UG Holemaking") */
            public: std::vector<NXOpen::CAM::Operation *> RecreateFeatureProcesses
            (
                const std::vector<NXOpen::CAM::FeatureGeometryGroup *> & groups /** The feature groups*/,
                NXOpen::FeatureProcessBuilderStatus ** resultStatus /** Result status of creating processes. */
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
