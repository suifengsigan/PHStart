#ifndef NXOpen_TOOLING_ASSEMBLYDRAWINGBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_ASSEMBLYDRAWINGBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_AssemblyDrawingBuilder.ja
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
#include <NXOpen/Tooling_AssemblyDrawingBuilder.hxx>
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
        class AssemblyDrawingBuilder;
    }
    class Builder;
    class NXObject;
    class Point;
    namespace Tooling
    {
        class _AssemblyDrawingBuilderBuilder;
        class AssemblyDrawingBuilderImpl;
        /**
              Represents a @link Tooling::AssemblyDrawingBuilder Tooling::AssemblyDrawingBuilder@endlink  which is 
              used to create or edit the Assembly Drawing.
             <br> To create a new instance of this class, use @link Tooling::ToolingDrawingCollection::CreateAssemblyDrawingBuilder Tooling::ToolingDrawingCollection::CreateAssemblyDrawingBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        DoubleViewScale </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        EnumAttributeName </td> <td> 
         
        MwSide </td> </tr> 

        <tr><td> 
         
        EnumAttributeValue </td> <td> 
         
        A </td> </tr> 

        <tr><td> 
         
        EnumDrawingType </td> <td> 
         
        MasterModel </td> </tr> 

        <tr><td> 
         
        EnumSheets </td> <td> 
         
        CreateNew </td> </tr> 

        <tr><td> 
         
        ModelViewToUse </td> <td> 
         
        Top </td> </tr> 

        <tr><td> 
         
        TgShowA </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        TgShowB </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ToggleBlankComponentsWithAttribute </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ToggleListDependents </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ToggleShowOnly </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ViewOption </td> <td> 
         
        DefaultView </td> </tr> 

        </table>  

         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  AssemblyDrawingBuilder : public Builder
        {
            /** Specifies the filter of assembly.*/
            public: enum Types
            {
                TypesVisibility/** visibility */ ,
                TypesDrawing/** drawing */ ,
                TypesView/** view */ 
            };

            /** Specifies the drawing type.*/
            public: enum DrawingTypes
            {
                DrawingTypesMasterModel/** master model */ ,
                DrawingTypesSelfContained/** self contained */ 
            };

            /** Specifies the sheet operation.*/
            public: enum DrawingCreateOrEdit
            {
                DrawingCreateOrEditCreateNew/** create new */ ,
                DrawingCreateOrEditSh1/** sh1 */ 
            };

            /** Specifies the attribute name*/
            public: enum AttributeNames
            {
                AttributeNamesMwSide/** mw side */ ,
                AttributeNamesMwComponentName/** mw component name */ 
            };

            /** Specifies the attribute value.*/
            public: enum AttributeValues
            {
                AttributeValuesA/** a */ ,
                AttributeValuesB/** b */ ,
                AttributeValuesHide/** hide */ 
            };

            /** Specifies the view options.*/
            public: enum ViewOptionValue
            {
                ViewOptionValueDefaultView/** default view */ ,
                ViewOptionValueBaseViewTool/** base view tool */ 
            };

            /** Specifies the model view to use.*/
            public: enum ModelViewToUseValue
            {
                ModelViewToUseValueTop/** top */ ,
                ModelViewToUseValueFront/** front */ ,
                ModelViewToUseValueRight/** right */ ,
                ModelViewToUseValueBack/** back */ ,
                ModelViewToUseValueBottom/** bottom */ ,
                ModelViewToUseValueLeft/** left */ ,
                ModelViewToUseValueIsometric/** isometric */ ,
                ModelViewToUseValueTrimetric/** trimetric */ 
            };

            private: AssemblyDrawingBuilderImpl * m_assemblydrawingbuilder_impl;
            private: friend class  _AssemblyDrawingBuilderBuilder;
            protected: AssemblyDrawingBuilder();
            public: ~AssemblyDrawingBuilder();
            /**Returns  the option for the assembly drawing operation 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::AssemblyDrawingBuilder::DrawingTypes EnumDrawingType
            (
            );
            /**Sets  the option for the assembly drawing operation 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetEnumDrawingType
            (
                NXOpen::Tooling::AssemblyDrawingBuilder::DrawingTypes enumDrawingType /** enumdrawingtype */ 
            );
            /** Create a new master model file 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void NewMasterModelFile
            (
                const NXString & masterModelFileName /** mastermodelfilename */ 
            );
            /** Create a new master model file 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void NewMasterModelFile
            (
                const char * masterModelFileName /** mastermodelfilename */ 
            );
            /** Open the master model file 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void OpenMasterModelFile
            (
                const NXString & masterModelFileName /** mastermodelfilename */ 
            );
            /** Open the master model file 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void OpenMasterModelFile
            (
                const char * masterModelFileName /** mastermodelfilename */ 
            );
            /**Returns  the option for select the sheet 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::AssemblyDrawingBuilder::DrawingCreateOrEdit EnumSheets
            (
            );
            /**Sets  the option for select the sheet 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetEnumSheets
            (
                NXOpen::Tooling::AssemblyDrawingBuilder::DrawingCreateOrEdit enumSheets /** enumsheets */ 
            );
            /**Returns  the sheet name 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString StringSheetName
            (
            );
            /**Sets  the sheet name 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetStringSheetName
            (
                const NXString & stringSheetName /** stringsheetname */ 
            );
            /**Sets  the sheet name 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void SetStringSheetName
            (
                const char * stringSheetName /** stringsheetname */ 
            );
            /** Delete the sheet 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void DeleteSheet
            (
                const NXString & selectedSheetName /** selectedsheetname */ 
            );
            /** Delete the sheet 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void DeleteSheet
            (
                const char * selectedSheetName /** selectedsheetname */ 
            );
            /**Returns  the string name rule 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString StringNameRule
            (
            );
            /**Sets  the string name rule 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetStringNameRule
            (
                const NXString & stringNameRule /** stringnamerule */ 
            );
            /**Sets  the string name rule 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void SetStringNameRule
            (
                const char * stringNameRule /** stringnamerule */ 
            );
            /**Returns  the Filter rule 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString StringFilterRule
            (
            );
            /**Sets  the Filter rule 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetStringFilterRule
            (
                const NXString & stringFilterRule /** stringfilterrule */ 
            );
            /**Sets  the Filter rule 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void SetStringFilterRule
            (
                const char * stringFilterRule /** stringfilterrule */ 
            );
            /**Returns  the List dependents 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool ToggleListDependents
            (
            );
            /**Sets  the List dependents 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetToggleListDependents
            (
                bool toggleListDependents /** togglelistdependents */ 
            );
            /**Returns  the only show components with attribute toggle 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool ToggleShowOnly
            (
            );
            /**Sets  the only show components with attribute toggle 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetToggleShowOnly
            (
                bool showOnly /** showonly */ 
            );
            /**Returns  the blank components with attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool ToggleBlankComponentsWithAttribute
            (
            );
            /**Sets  the blank components with attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetToggleBlankComponentsWithAttribute
            (
                bool toggleBlankComponentsWithAttribute /** toggleblankcomponentswithattribute */ 
            );
            /**Returns  the option for select the attribute name 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::AssemblyDrawingBuilder::AttributeNames EnumAttributeName
            (
            );
            /**Sets  the option for select the attribute name 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetEnumAttributeName
            (
                NXOpen::Tooling::AssemblyDrawingBuilder::AttributeNames enumAttributeName /** enumattributename */ 
            );
            /**Returns  the option for select the attribute value 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::AssemblyDrawingBuilder::AttributeValues EnumAttributeValue
            (
            );
            /**Sets  the option for select the attribute value 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetEnumAttributeValue
            (
                NXOpen::Tooling::AssemblyDrawingBuilder::AttributeValues enumAttributeValue /** enumattributevalue */ 
            );
            /**Returns  the option for view tools 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::AssemblyDrawingBuilder::ViewOptionValue ViewOption
            (
            );
            /**Sets  the option for view tools 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetViewOption
            (
                NXOpen::Tooling::AssemblyDrawingBuilder::ViewOptionValue viewOptionValue /** viewoptionvalue */ 
            );
            /** The option for add section view 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void AddSectionView
            (
            );
            /** The option for add view 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void AddView
            (
                NXOpen::NXObject * viewTag /** viewtag */ ,
                const NXString & attrName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & componentType /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** The option for add view 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void AddView
            (
                NXOpen::NXObject * viewTag /** viewtag */ ,
                const char * attrName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & componentType /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /**Returns  a double view scale 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double DoubleViewScale
            (
            );
            /**Sets  a double view scale 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetDoubleViewScale
            (
                double doubleViewScale /** doubleviewscale */ 
            );
            /**Returns  the A attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool TgShowA
            (
            );
            /**Sets  the A attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetTgShowA
            (
                bool tgShowA /** tgshowa */ 
            );
            /**Returns  the B attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool TgShowB
            (
            );
            /**Sets  the B attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetTgShowB
            (
                bool tgShowB /** tgshowb */ 
            );
            /**Returns  the view location 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * ViewLocation
            (
            );
            /**Sets  the view location 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetViewLocation
            (
                NXOpen::Point * viewLocation /** viewlocation */ 
            );
            /**Returns  the option for model view to use 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::AssemblyDrawingBuilder::ModelViewToUseValue ModelViewToUse
            (
            );
            /**Sets  the option for model view to use 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetModelViewToUse
            (
                NXOpen::Tooling::AssemblyDrawingBuilder::ModelViewToUseValue modelViewToUseValue /** modelviewtousevalue */ 
            );
            /**Returns  the option for the Assembly drawing operation
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::AssemblyDrawingBuilder::Types Type
            (
            );
            /**Sets  the option for the Assembly drawing operation
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetType
            (
                NXOpen::Tooling::AssemblyDrawingBuilder::Types type /** type */ 
            );
            /** Retrieve the sheet 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void RetrieveSheet
            (
                const NXString & selectedSheetName /** selectedsheetname */ 
            );
            /** Retrieve the sheet 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void RetrieveSheet
            (
                const char * selectedSheetName /** selectedsheetname */ 
            );
            /** Create drawing 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void CreateDrawing
            (
                const NXString & sheetName /** sheetname */ ,
                const NXString & templateName /** templatename */ 
            );
            /** Create drawing 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void CreateDrawing
            (
                const char * sheetName /** sheetname */ ,
                const char * templateName /** templatename */ 
            );
            /** Edit drawing 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void EditDrawing
            (
                const NXString & sheetName /** sheetname */ ,
                const NXString & templateName /** templatename */ 
            );
            /** Edit drawing 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void EditDrawing
            (
                const char * sheetName /** sheetname */ ,
                const char * templateName /** templatename */ 
            );
            /** Assign attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void AssignAttr
            (
                const std::vector<NXOpen::NXObject *> & selectdObjs /** selectdobjs */ ,
                const NXString & attrName /** attrname */ ,
                const NXString & attrValue /** attrvalue */ 
            );
            /** Assign attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void AssignAttr
            (
                const std::vector<NXOpen::NXObject *> & selectdObjs /** selectdobjs */ ,
                const char * attrName /** attrname */ ,
                const char * attrValue /** attrvalue */ 
            );
            /** Create view 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void CreateView
            (
                const NXString & viewName /** viewname */ ,
                double viewScale /** viewscale */ 
            );
            /** Create view 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void CreateView
            (
                const char * viewName /** viewname */ ,
                double viewScale /** viewscale */ 
            );
            /** Delete view 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void DeleteView
            (
                const NXString & viewName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Delete view 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void DeleteView
            (
                const char * viewName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Create section view 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void CreateSectionView
            (
                const NXString & viewName /** viewname */ ,
                NXOpen::NXObject * parentView /** parentview */ ,
                const std::vector<double> & stepDirection /** stepdirection */ ,
                const std::vector<double> & arrowdirection /** arrowdirection */ ,
                const std::vector<double> & pointX /** pointx */ ,
                const std::vector<double> & pointY /** pointy */ ,
                const std::vector<double> & pointZ /** pointz */ ,
                const std::vector<int> & segmentType /** segmenttype */ ,
                const NXString & attrName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & attrValueList /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Create section view 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            void CreateSectionView
            (
                const char * viewName /** viewname */ ,
                NXOpen::NXObject * parentView /** parentview */ ,
                const std::vector<double> & stepDirection /** stepdirection */ ,
                const std::vector<double> & arrowdirection /** arrowdirection */ ,
                const std::vector<double> & pointX /** pointx */ ,
                const std::vector<double> & pointY /** pointy */ ,
                const std::vector<double> & pointZ /** pointz */ ,
                const std::vector<int> & segmentType /** segmenttype */ ,
                const char * attrName /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                std::vector<NXString> & attrValueList /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Create view to show components  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::NXObject * CreateViewToShowComponents
            (
                const NXString & viewName /** viewname */ 
            );
            /** Create view to show components  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            NXOpen::NXObject * CreateViewToShowComponents
            (
                const char * viewName /** viewname */ 
            );
            /**Returns  the section view button clicked attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool SectionViewButtonClicked
            (
            );
            /**Sets  the section view button clicked attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetSectionViewButtonClicked
            (
                bool sectionViewButtonClicked /** sectionviewbuttonclicked */ 
            );
            /**Returns  the delete button clicked attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool DeleteButtonClicked
            (
            );
            /**Sets  the delete button clicked attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetDeleteButtonClicked
            (
                bool deleteButtonClicked /** deletebuttonclicked */ 
            );
            /**Returns  the scale modified attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool ScaleModified
            (
            );
            /**Sets  the scale modified attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetScaleModified
            (
                bool scaleModified /** scalemodified */ 
            );
            /**Returns  the wizard type attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: int WizardType
            (
            );
            /**Sets  the wizard type attribute 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetWizardType
            (
                int wizardType /** wizardtype */ 
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
