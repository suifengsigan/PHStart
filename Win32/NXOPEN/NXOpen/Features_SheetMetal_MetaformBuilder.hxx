#ifndef NXOpen_FEATURES_SHEETMETAL_METAFORMBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHEETMETAL_METAFORMBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_SheetMetal_MetaformBuilder.ja
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
#include <NXOpen/Expression.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_SheetMetal_MetaformBuilder.hxx>
#include <NXOpen/Features_SheetMetal_SMBoundaryConditionBuilder.hxx>
#include <NXOpen/ObjectList.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/SelectObjectList.hxx>
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
            class MetaformBuilder;
        }
    }
    class Expression;
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace Features
    {
        namespace SheetMetal
        {
            class SMBoundaryConditionBuilder;
        }
    }
    namespace Features
    {
        namespace SheetMetal
        {
            class SMBoundaryConditionBuilderList;
        }
    }
    class ScCollector;
    class SelectNXObjectList;
    namespace Features
    {
        namespace SheetMetal
        {
            class _MetaformBuilderBuilder;
            class MetaformBuilderImpl;
            /**
                Represents a @link Features::Metaform Features::Metaform@endlink  builder
                 <br> To create a new instance of this class, use @link Features::SheetMetal::SheetmetalManager::CreateMetaformBuilder Features::SheetMetal::SheetmetalManager::CreateMetaformBuilder@endlink  <br> 
            Default values.
            <table border="1"> 
             
            <tr><th> 
            Property</th>  <th> 
            Value</th> </tr>
            <tr><td> 
             
            AngularTolerance.Value </td> <td> 
             
            90 </td> </tr> 

            <tr><td> 
             
            ChordalTolerance.Value </td> <td> 
             
            0.75 (millimeters part), 0 (inches part) </td> </tr> 

            <tr><td> 
             
            ElasticModulus.Value </td> <td> 
             
            210000000 </td> </tr> 

            <tr><td> 
             
            HoleRemovalMinModulus.Value </td> <td> 
             
            6.9e-008 </td> </tr> 

            <tr><td> 
             
            InferThickness </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            LinearTolerance.Value </td> <td> 
             
            25 (millimeters part), 0 (inches part) </td> </tr> 

            <tr><td> 
             
            NeutralFactor.Value </td> <td> 
             
            0.33 </td> </tr> 

            <tr><td> 
             
            OutputLayer </td> <td> 
             
            1 </td> </tr> 

            <tr><td> 
             
            PoissonsRatio.Value </td> <td> 
             
            0.3 </td> </tr> 

            <tr><td> 
             
            RValue.Value </td> <td> 
             
            1 </td> </tr> 

            <tr><td> 
             
            RemoveHoles </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            TangentModulus.Value </td> <td> 
             
            6900 </td> </tr> 

            <tr><td> 
             
            Thickness.Value </td> <td> 
             
            3 (millimeters part), 0 (inches part) </td> </tr> 

            <tr><td> 
             
            YieldStress.Value </td> <td> 
             
            190000 (millimeters part), 0 (inches part) </td> </tr> 

            </table>  

             <br>  Created in NX7.5.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  MetaformBuilder : public Features::FeatureBuilder
            {
                private: MetaformBuilderImpl * m_metaformbuilder_impl;
                private: friend class  _MetaformBuilderBuilder;
                protected: MetaformBuilder();
                public: ~MetaformBuilder();
                /**Returns  the start region. Metaform feature will map geometry "From" surfaces "To" surfaces. The Start
                            Region defines the "From" surface. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::ScCollector * StartRegion
                (
                );
                /**Returns  the end region Metaform feature will map geometry "From" surfaces "To" surfaces. The End
                            Region defines the "To" surface. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::ScCollector * EndRegion
                (
                );
                /**Returns  the transform geometry Metaform feature will map geometry "From" surfaces "To" surfaces. The Start
                            Region defines the "From" surface and the End Region defines the "To" surface. Transform Geometry 
                            is the actual geometry on the "From" surfaces that will be produced as output geometry.
                        
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectNXObjectList * TransformGeometry
                (
                );
                /**Returns  the output layer. Layer on which the Transform Geometry will be created. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: int OutputLayer
                (
                );
                /**Sets  the output layer. Layer on which the Transform Geometry will be created. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : adv_sheet_metal_dsgn ("ADVANCED SHEET METAL DESIGN") */
                public: void SetOutputLayer
                (
                    int outputLayer /** outputlayer */ 
                );
                /**Returns  the boundary conditions 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::SheetMetal::SMBoundaryConditionBuilderList * SMBoundaryConditions
                (
                );
                /** Create a new boundary condition.  @return  
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : adv_sheet_metal_dsgn ("ADVANCED SHEET METAL DESIGN") */
                public: NXOpen::Features::SheetMetal::SMBoundaryConditionBuilder * CreateSMBoundaryCondition
                (
                );
                /**Returns  the option to infer thickness from the Start Region. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool InferThickness
                (
                );
                /**Sets  the option to infer thickness from the Start Region. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : adv_sheet_metal_dsgn ("ADVANCED SHEET METAL DESIGN") */
                public: void SetInferThickness
                (
                    bool inferThickness /** inferthickness */ 
                );
                /**Returns  the thickness 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * Thickness
                (
                );
                /**Returns  the thickness direction 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool ReverseThicknessDirection
                (
                );
                /**Sets  the thickness direction 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : adv_sheet_metal_dsgn ("ADVANCED SHEET METAL DESIGN") */
                public: void SetReverseThicknessDirection
                (
                    bool reverseThicknessDirection /** reversethicknessdirection */ 
                );
                /**Returns  the yield stress 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * YieldStress
                (
                );
                /**Returns  the elastic modulus 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * ElasticModulus
                (
                );
                /**Returns  the tangent modulus 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * TangentModulus
                (
                );
                /**Returns  the Poisson's ratio 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * PoissonsRatio
                (
                );
                /**Returns  the r value 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * RValue
                (
                );
                /**Returns  the neutral factor 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * NeutralFactor
                (
                );
                /**Returns  the remove holes 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool RemoveHoles
                (
                );
                /**Sets  the remove holes 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : adv_sheet_metal_dsgn ("ADVANCED SHEET METAL DESIGN") */
                public: void SetRemoveHoles
                (
                    bool removeHoles /** removeholes */ 
                );
                /**Returns  the hole removal min modulus 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * HoleRemovalMinModulus
                (
                );
                /**Returns  the chordal tolerance 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * ChordalTolerance
                (
                );
                /**Returns  the angular tolerance 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * AngularTolerance
                (
                );
                /**Returns  the linear tolerance 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * LinearTolerance
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
