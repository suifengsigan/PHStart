#ifndef NXOpen_TOOLING_FORMINGINSERTBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_FORMINGINSERTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_FormingInsertBuilder.ja
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
#include <NXOpen/Expression.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/Tooling_FormingInsertBuilder.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_tooling_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Tooling
    {
        class FormingInsertBuilder;
    }
    class Builder;
    class Expression;
    class ScCollector;
    class Section;
    class SelectBody;
    class TaggedObject;
    namespace Tooling
    {
        class _FormingInsertBuilderBuilder;
        class FormingInsertBuilderImpl;
        /** Progressive Die Wizard  builder to design forming punch and die insert  <br> To create a new instance of this class, use @link Tooling::FormingInsertCollection::CreateFormingInsertBuilder Tooling::FormingInsertCollection::CreateFormingInsertBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        AngleToleranceValue </td> <td> 
         
        45 </td> </tr> 

        <tr><td> 
         
        BlankPosition </td> <td> 
         
        PunchPlate </td> </tr> 

        <tr><td> 
         
        BlankType </td> <td> 
         
        Standard </td> </tr> 

        <tr><td> 
         
        BottomPlateClearance </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        DesignOption </td> <td> 
         
        FormingPunch </td> </tr> 

        <tr><td> 
         
        DiePlateClearance </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        HeightValue.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        ParentPart </td> <td> 
         
        DieBase </td> </tr> 

        <tr><td> 
         
        PunchPlateClearance </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        SameWithPlate </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        StripperPlateClearance </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        TangentEdgeAngle </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        TraverseInteriorEdges </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        UseBottomPlateClearance </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        UseDiePlateClearance </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        UsePunchPlateClearance </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        UseStripperPlateClearance </td> <td> 
         
        0 </td> </tr> 

        </table>  

         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  FormingInsertBuilder : public Builder
        {
            /** Specifies the parent part type. */
            public: enum ParentTypes
            {
                ParentTypesControl/** use PDW project's control part as parent part*/,
                ParentTypesDieBase/** use PDW project's die base part as parent part*/,
                ParentTypesSubDie/** use PDW project's sub-die base as parent part*/,
                ParentTypesDie/** use PDW project's die part as parent part */
            };

            /** Specifies the blank type. */
            public: enum BlankTypes
            {
                BlankTypesStandard/** standard blank. */,
                BlankTypesUserDefined/** user Defined blank. */
            };

            /** Specifies the blank position. */
            public: enum BlankPositions
            {
                BlankPositionsPunchPlate/** the blank is on the punch plate*/,
                BlankPositionsStripperPlate/** the blank is on the stripper plate*/,
                BlankPositionsDiePlate/** the blank is on the die plate*/
            };

            /** Specifies the design type. */
            public: enum DesignOptions
            {
                DesignOptionsFormingPunch/** design the forming punch*/,
                DesignOptionsFormingDie/** design the forming die*/
            };

            private: FormingInsertBuilderImpl * m_forminginsertbuilder_impl;
            private: friend class  _FormingInsertBuilderBuilder;
            protected: FormingInsertBuilder();
            public: ~FormingInsertBuilder();
            /**Returns  the seed face of forming region. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::ScCollector * SeedFace
            (
            );
            /**Returns  the boundary faces of forming region. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::ScCollector * BoundaryFaces
            (
            );
            /**Returns  the forming faces of forming region. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::ScCollector * SelectFormingFaces
            (
            );
            /**Returns  the indication to traverse interior edges of forming region. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool TraverseInteriorEdges
            (
            );
            /**Sets  the indication to traverse interior edges of forming region. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetTraverseInteriorEdges
            (
                bool traverseInteriorEdges /** traverseinterioredges */ 
            );
            /**Returns  the tangent edge angle of forming region. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool TangentEdgeAngle
            (
            );
            /**Sets  the tangent edge angle of forming region. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetTangentEdgeAngle
            (
                bool tangentEdgeAngle /** tangentedgeangle */ 
            );
            /**Returns  the tangent edge angle tolerance value of forming region. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double AngleToleranceValue
            (
            );
            /**Sets  the tangent edge angle tolerance value of forming region. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetAngleToleranceValue
            (
                double angleToleranceValue /** angletolerancevalue */ 
            );
            /**Returns  the parent part to create blank. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::FormingInsertBuilder::ParentTypes ParentPart
            (
            );
            /**Sets  the parent part to create blank. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetParentPart
            (
                NXOpen::Tooling::FormingInsertBuilder::ParentTypes parentPart /** parentpart */ 
            );
            /**Returns  the blank type for punch or die. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::FormingInsertBuilder::BlankTypes BlankType
            (
            );
            /**Sets  the blank type for punch or die. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetBlankType
            (
                NXOpen::Tooling::FormingInsertBuilder::BlankTypes blankType /** blanktype */ 
            );
            /**Returns  the blank position in punch plate or stripper plate. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::FormingInsertBuilder::BlankPositions BlankPosition
            (
            );
            /**Sets  the blank position in punch plate or stripper plate. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetBlankPosition
            (
                NXOpen::Tooling::FormingInsertBuilder::BlankPositions blankPosition /** blankposition */ 
            );
            /**Returns  the punch same with plate 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool SameWithPlate
            (
            );
            /**Sets  the punch same with plate 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetSameWithPlate
            (
                bool sameWithPlate /** samewithplate */ 
            );
            /**Returns  the blank profile to extrude the punch or die. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * BlankProfile
            (
            );
            /**Returns  the height value of blank. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * HeightValue
            (
            );
            /**Returns  the lower value of blank. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * LowerValue
            (
            );
            /**Returns  the option to use punch plate clearance. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool UsePunchPlateClearance
            (
            );
            /**Sets  the option to use punch plate clearance. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetUsePunchPlateClearance
            (
                bool usePPClearance /** useppclearance */ 
            );
            /**Returns  the clearance value of punch plate . 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double PunchPlateClearance
            (
            );
            /**Sets  the clearance value of punch plate . 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetPunchPlateClearance
            (
                double punchPlateClr /** punchplateclr */ 
            );
            /**Returns  the option to use bottom backing plate clearance. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool UseBottomPlateClearance
            (
            );
            /**Sets  the option to use bottom backing plate clearance. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetUseBottomPlateClearance
            (
                bool useBPClearance /** usebpclearance */ 
            );
            /**Returns  the clearance value of bottom backing plate . 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double BottomPlateClearance
            (
            );
            /**Sets  the clearance value of bottom backing plate . 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetBottomPlateClearance
            (
                double bottomPlateClr /** bottomplateclr */ 
            );
            /**Returns  the option to use stripper plate clearance. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool UseStripperPlateClearance
            (
            );
            /**Sets  the option to use stripper plate clearance. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetUseStripperPlateClearance
            (
                bool useSPClearance /** usespclearance */ 
            );
            /**Returns  the option to use the stripper plate clearance. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double StripperPlateClearance
            (
            );
            /**Sets  the option to use the stripper plate clearance. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetStripperPlateClearance
            (
                double stripperPlateClr /** stripperplateclr */ 
            );
            /**Returns  the option to use die plate clearance. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool UseDiePlateClearance
            (
            );
            /**Sets  the option to use die plate clearance. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetUseDiePlateClearance
            (
                bool useDPClearance /** usedpclearance */ 
            );
            /**Returns  the clearance value of die plate. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double DiePlateClearance
            (
            );
            /**Sets  the clearance value of die plate. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetDiePlateClearance
            (
                double diePlateClr /** dieplateclr */ 
            );
            /**Returns  the design option to design punch or die. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::FormingInsertBuilder::DesignOptions DesignOption
            (
            );
            /**Sets  the design option to design punch or die. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetDesignOption
            (
                NXOpen::Tooling::FormingInsertBuilder::DesignOptions designOption /** designoption */ 
            );
            /**Returns  the option to reverse trim direction. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: bool ReverseDirection
            (
            );
            /**Sets  the option to reverse trim direction. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetReverseDirection
            (
                bool reverseDirection /** reversedirection */ 
            );
            /**Returns  the option whether rename component. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool RenameComponent
            (
            );
            /**Sets  the option whether rename component. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetRenameComponent
            (
                bool renameComponent /** renamecomponent */ 
            );
            /**Returns  the parent part name to create blank. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString ParentPartName
            (
            );
            /**Sets  the parent part name to create blank. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetParentPartName
            (
                const NXString & parentPart /** Specifies the parent part name */
            );
            /**Sets  the parent part name to create blank. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            void SetParentPartName
            (
                const char * parentPart /** Specifies the parent part name */
            );
            /** Create new component.  @return  the new part instance 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::TaggedObject * CreateNewComponent
            (
                NXOpen::TaggedObject * parentTag /** the parent part */,
                const NXOpen::Point3d & origin /** the origin point to add */
            );
            /** Reverse trim direction. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void ReverseTrimDirection
            (
            );
            /** Extract forming region. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void ExtractFormingRegion
            (
            );
            /**Returns  the punch or die to edit 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectBody * PunchOrDieToEdit
            (
            );
            /** The action to delete the selected punch or die component 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void DeletePunchOrDieComponent
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