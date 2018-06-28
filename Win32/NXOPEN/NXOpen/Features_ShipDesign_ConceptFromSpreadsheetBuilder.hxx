#ifndef NXOpen_FEATURES_SHIPDESIGN_CONCEPTFROMSPREADSHEETBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_CONCEPTFROMSPREADSHEETBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_ConceptFromSpreadsheetBuilder.ja
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
#include <NXOpen/Features_ShipDesign_ConceptFromSpreadsheetBuilder.hxx>
#include <NXOpen/Features_ShipDesign_ReadDataSetBuilder.hxx>
#include <NXOpen/SelectObject.hxx>
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
        namespace ShipDesign
        {
            class ConceptFromSpreadsheetBuilder;
        }
    }
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace Features
    {
        namespace ShipDesign
        {
            class ReadDataSetBuilder;
        }
    }
    class SelectBody;
    namespace Features
    {
        namespace ShipDesign
        {
            class _ConceptFromSpreadsheetBuilderBuilder;
            class ConceptFromSpreadsheetBuilderImpl;
            /**
                Represents a @link Features::ShipDesign::ConceptFromSpreadsheet Features::ShipDesign::ConceptFromSpreadsheet@endlink  builder
                 <br> To create a new instance of this class, use @link Features::ShipCollection::CreateConceptFromSpreadsheetBuilder Features::ShipCollection::CreateConceptFromSpreadsheetBuilder@endlink  <br> 
            Default values.
            <table border="1"> 
             
            <tr><th> 
            Property</th>  <th> 
            Value</th> </tr>
            <tr><td> 
             
            CreateConcept </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            ReadDataSet.CreateDataSetToggle </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            ReadDataSet.NativeToggle </td> <td> 
             
            0 </td> </tr> 

            </table>  

             <br>  Created in NX8.5.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  ConceptFromSpreadsheetBuilder : public Features::FeatureBuilder
            {
                private: ConceptFromSpreadsheetBuilderImpl * m_conceptfromspreadsheetbuilder_impl;
                private: friend class  _ConceptFromSpreadsheetBuilderBuilder;
                protected: ConceptFromSpreadsheetBuilder();
                public: ~ConceptFromSpreadsheetBuilder();
                /**Returns  The Data Set Builder for reading data sets from Team Center  
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::ReadDataSetBuilder * ReadDataSet
                (
                );
                /**Returns  toggle to control creating concept part
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: bool CreateConcept
                (
                );
                /**Sets  toggle to control creating concept part
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetCreateConcept
                (
                    bool createConcept /** createconcept */ 
                );
                /**Returns  the ship body. 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectBody * ShipBody
                (
                );
                /**Returns  the concept part file name 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXString ConceptPart
                (
                );
                /**Sets  the concept part file name 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetConceptPart
                (
                    const NXString & filename /** filename */ 
                );
                /**Sets  the concept part file name 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                void SetConceptPart
                (
                    const char * filename /** filename */ 
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
