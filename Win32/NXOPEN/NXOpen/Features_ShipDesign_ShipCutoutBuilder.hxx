#ifndef NXOpen_FEATURES_SHIPDESIGN_SHIPCUTOUTBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_SHIPCUTOUTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_ShipCutoutBuilder.ja
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
#include <NXOpen/Features_ShipDesign_ShipCutoutBuilder.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SketchExpressionModifierBuilder.hxx>
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
            class ShipCutoutBuilder;
        }
    }
    class CoordinateSystem;
    class Expression;
    namespace Features
    {
        class FeatureBuilder;
    }
    class SelectFace;
    class SelectNXObject;
    class SketchExpressionModifierBuilder;
    namespace Features
    {
        namespace ShipDesign
        {
            class _ShipCutoutBuilderBuilder;
            class ShipCutoutBuilderImpl;
            /**
                    Represents a @link Features::ShipDesign::ShipCutout Features::ShipDesign::ShipCutout@endlink  builder
                     <br> To create a new instance of this class, use @link Features::ShipCollection::CreateShipCutoutBuilder Features::ShipCollection::CreateShipCutoutBuilder@endlink  <br> 
            Default values.
            <table border="1"> 
             
            <tr><th> 
            Property</th>  <th> 
            Value</th> </tr>
            <tr><td> 
             
            SketchBlock.Exp1.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            SketchBlock.Exp10.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            SketchBlock.Exp11.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            SketchBlock.Exp12.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            SketchBlock.Exp2.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            SketchBlock.Exp3.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            SketchBlock.Exp4.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            SketchBlock.Exp5.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            SketchBlock.Exp6.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            SketchBlock.Exp7.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            SketchBlock.Exp8.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            SketchBlock.Exp9.Value </td> <td> 
             
            0 </td> </tr> 

            <tr><td> 
             
            SketchBlock.Sketches </td> <td> 
             
            EndCut1 </td> </tr> 

            </table>  

             <br>  Created in NX7.5.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  ShipCutoutBuilder : public Features::FeatureBuilder
            {
                /** available methods used to place a cutout object
                            */
                public: enum CreationMethod
                {
                    CreationMethodFace2Lines/** 1 face and 2 lines, edges, or datums are used to place this cutout */,
                    CreationMethodSpecifyCSYS/** a csys is used to place this cutout */
                };

                private: ShipCutoutBuilderImpl * m_shipcutoutbuilder_impl;
                private: friend class  _ShipCutoutBuilderBuilder;
                protected: ShipCutoutBuilder();
                public: ~ShipCutoutBuilder();
                /**Returns  the placement type.  
                            The creation method used to place the cutout object. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::ShipCutoutBuilder::CreationMethod PlacementType
                (
                );
                /**Sets  the placement type.  
                            The creation method used to place the cutout object. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetPlacementType
                (
                    NXOpen::Features::ShipDesign::ShipCutoutBuilder::CreationMethod placementType /** placementtype */ 
                );
                /**Returns  the select Target Face.  
                            This target face is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectNXObject * SelectTargetFace
                (
                );
                /**Returns  the keep select target face
                            A toggle used to remember the selected object on apply.
                            The keep select target face is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool KeepSelectTargetFace
                (
                );
                /**Sets  the keep select target face
                            A toggle used to remember the selected object on apply.
                            The keep select target face is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetKeepSelectTargetFace
                (
                    bool keepSelectTargetFace /** keepselecttargetface */ 
                );
                /**Returns  the select Line1.
                            This line 1 is only used for the Face2Lines placement method.
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectNXObject * SelectLine1
                (
                );
                /**Returns  the keep select line1
                            A toggle used to remember the selected object on apply.
                            The keep select line1 is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool KeepSelectLine1
                (
                );
                /**Sets  the keep select line1
                            A toggle used to remember the selected object on apply.
                            The keep select line1 is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetKeepSelectLine1
                (
                    bool keepSelectLine1 /** keepselectline1 */ 
                );
                /**Returns  the select Line2 
                            This line 2 is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectNXObject * SelectLine2
                (
                );
                /**Returns  the keep select line2
                            A toggle used to remember the selected object on apply.
                            The keep select line2 is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool KeepSelectLine2
                (
                );
                /**Sets  the keep select line2
                            A toggle used to remember the selected object on apply.
                            The keep select line2 is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetKeepSelectLine2
                (
                    bool keepSelectLine2 /** keepselectline2 */ 
                );
                /**Returns  the placement CSYS of the cutout. 
                            The coordinate system is only used for the SpecifyCSYS placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::CoordinateSystem * CoordSystem
                (
                );
                /**Sets  the placement CSYS of the cutout. 
                            The coordinate system is only used for the SpecifyCSYS placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetCoordSystem
                (
                    NXOpen::CoordinateSystem * coordSystem /** coordsystem */ 
                );
                /**Returns  the keep coordinate system
                            A toggle used to remember the selected object on apply.
                            The keep coordinate system is only used for the SpecifyCSYS placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool KeepCoordSystem
                (
                );
                /**Sets  the keep coordinate system
                            A toggle used to remember the selected object on apply.
                            The keep coordinate system is only used for the SpecifyCSYS placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetKeepCoordSystem
                (
                    bool keepCoordSystem /** keepcoordsystem */ 
                );
                /**Returns  the selection object for the target face. 
                            This target CSYS face is only used for the SpecifyCSYS placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectFace * SelectCSYSFace
                (
                );
                /**Returns  the keep select csys face
                            A toggle used to remember the selected object on apply.
                            The keep select csys face is only used for the SpecifyCSYS placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool KeepSelectCSYSFace
                (
                );
                /**Sets  the keep select csys face
                            A toggle used to remember the selected object on apply.
                            The keep select csys face is only used for the SpecifyCSYS placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetKeepSelectCSYSFace
                (
                    bool keepSelectCSYSFace /** keepselectcsysface */ 
                );
                /**Returns  the linear offset distance from line1.
                            The linear offset 1 is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * LinearOffset1
                (
                );
                /**Returns  the reverse direction 1.
                            Allows you to reverse the direction used in the linear offset 1.
                            The reverse direction 1 is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool ReverseDirection1
                (
                );
                /**Sets  the reverse direction 1.
                            Allows you to reverse the direction used in the linear offset 1.
                            The reverse direction 1 is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetReverseDirection1
                (
                    bool reverseDirection1 /** reversedirection1 */ 
                );
                /**Returns  the toggle which allows re-use of the previous reverse direction toggle.
                            This is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool KeepReverseDirection1
                (
                );
                /**Sets  the toggle which allows re-use of the previous reverse direction toggle.
                            This is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetKeepReverseDirection1
                (
                    bool keepReverseDirection1 /** keepreversedirection1 */ 
                );
                /**Returns  the linear offset distance from line2.
                            The linear offset 2 is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * LinearOffset2
                (
                );
                /**Returns  the reverse direction 2.
                            Allows you to reverse the direction used in the linear offset 2.
                            The reverse direction 2 is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool ReverseDirection2
                (
                );
                /**Sets  the reverse direction 2.
                            Allows you to reverse the direction used in the linear offset 2.
                            The reverse direction 2 is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetReverseDirection2
                (
                    bool reverseDirection2 /** reversedirection2 */ 
                );
                /**Returns  the toggle which allows re-use of the previous reverse direction toggle.
                            This is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: bool KeepReverseDirection2
                (
                );
                /**Sets  the toggle which allows re-use of the previous reverse direction toggle.
                            This is only used for the Face2Lines placement method. 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : nx_ship_concept ("Ship Concept") */
                public: void SetKeepReverseDirection2
                (
                    bool keepReverseDirection2 /** keepreversedirection2 */ 
                );
                /**Returns  the angular dimension used to rotate the cutout's profile
                            The angular dimension is only used for the Face2Lines placement method.
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * AngularDim
                (
                );
                /**Returns  the library sketch block that defines the Cutout outline 
                 <br>  Created in NX7.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SketchExpressionModifierBuilder * SketchBlock
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
