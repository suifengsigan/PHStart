#ifndef NXOpen_TOOLING_CREATEBOXBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_CREATEBOXBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_CreateBoxBuilder.ja
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
#include <NXOpen/Tooling_CreateBoxBuilder.hxx>
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
        class CreateBoxBuilder;
    }
    class Builder;
    class Expression;
    class NXObject;
    class ScCollector;
    namespace Tooling
    {
        class _CreateBoxBuilderBuilder;
        class CreateBoxBuilderImpl;
        /** Represents a box creation operation <br> To create a new instance of this class, use @link Tooling::CreateBoxCollection::CreateBoxBuilder Tooling::CreateBoxCollection::CreateBoxBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Clearance.Value </td> <td> 
         
        1.0 (millimeters part), 0.1 (inches part) </td> </tr> 

        <tr><td> 
         
        OffsetNegativeX.Value </td> <td> 
         
        1.0 (millimeters part), 0.1 (inches part) </td> </tr> 

        <tr><td> 
         
        OffsetNegativeY.Value </td> <td> 
         
        1.0 (millimeters part), 0.1 (inches part) </td> </tr> 

        <tr><td> 
         
        OffsetNegativeZ.Value </td> <td> 
         
        1.0 (millimeters part), 0.1 (inches part) </td> </tr> 

        <tr><td> 
         
        OffsetPositiveX.Value </td> <td> 
         
        1.0 (millimeters part), 0.1 (inches part) </td> </tr> 

        <tr><td> 
         
        OffsetPositiveY.Value </td> <td> 
         
        1.0 (millimeters part), 0.1 (inches part) </td> </tr> 

        <tr><td> 
         
        OffsetPositiveZ.Value </td> <td> 
         
        1.0 (millimeters part), 0.1 (inches part) </td> </tr> 

        <tr><td> 
         
        XValue.Value </td> <td> 
         
        10 (millimeters part), 1.0 (inches part) </td> </tr> 

        <tr><td> 
         
        YValue.Value </td> <td> 
         
        10 (millimeters part), 1.0 (inches part) </td> </tr> 

        <tr><td> 
         
        ZValue.Value </td> <td> 
         
        10 (millimeters part), 1.0 (inches part) </td> </tr> 

        </table>  

         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  CreateBoxBuilder : public Builder
        {
            /** the type for creating box*/
            public: enum BoxType
            {
                BoxTypeGeneral/** general box*/,
                BoxTypeBounding/** bounding box*/
            };

            private: CreateBoxBuilderImpl * m_createboxbuilder_impl;
            private: friend class  _CreateBoxBuilderBuilder;
            protected: CreateBoxBuilder();
            public: ~CreateBoxBuilder();
            /**Returns  the objects used for bounding box creation. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::ScCollector * Objects
            (
            );
            /**Returns  the edge length in X direction for general box.  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::Expression * XValue
            (
            );
            /**Returns  the edge length in Y direction for general box.  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::Expression * YValue
            (
            );
            /**Returns  the edge length in Z direction for general box.  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::Expression * ZValue
            (
            );
            /**Returns  the clearance value for box in six directions. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::Expression * Clearance
            (
            );
            /**Returns  the offset value for box in +X direction. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::Expression * OffsetPositiveX
            (
            );
            /**Returns  the offset value for box in -X direction. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::Expression * OffsetNegativeX
            (
            );
            /**Returns  the offset value for box in +Y direction. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::Expression * OffsetPositiveY
            (
            );
            /**Returns  the offset value for box in -Y direction. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::Expression * OffsetNegativeY
            (
            );
            /**Returns  the offset value for box in +Z direction. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::Expression * OffsetPositiveZ
            (
            );
            /**Returns  the offset value for box in -Z direction. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::Expression * OffsetNegativeZ
            (
            );
            /**Returns  the box type. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::Tooling::CreateBoxBuilder::BoxType Type
            (
            );
            /**Sets  the box type. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetType
            (
                NXOpen::Tooling::CreateBoxBuilder::BoxType type /** type */ 
            );
            /** Sets box csys matrix. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetBoxMatrixAndPosition
            (
                const NXOpen::Matrix3x3 & matrix /** matrix */ ,
                const NXOpen::Point3d & position /** position */ 
            );
            /** Convert feature record data to builder. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void ConvertFrecToBuilderData
            (
                NXOpen::NXObject * featTag /** bounding box kf feature tag */
            );
            /**Returns  the box color. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: int BoxColor
            (
            );
            /**Sets  the box color. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetBoxColor
            (
                int colorValue /** colorvalue */ 
            );
            /** Sets box color. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetBoxColorValue
            (
                const NXOpen::Point3d & value /** value */ 
            );
            /** Sets point position of csys for box. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetBoxCsysPosition
            (
                const NXOpen::Point3d & value /** value */ 
            );
            /** Gets point position of csys for box.  @return  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::Point3d GetBoxCsysPosition
            (
            );
            /** Sets selected object occurrences. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetSelectedOccs
            (
                const std::vector<NXOpen::NXObject *> & selections /** Last selected objects. */,
                const std::vector<NXOpen::NXObject *> & deselections /** Last deselected objects. */
            );
            /** Gets kf box feature tag.  @return  bounding box kf feature 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR nx_electrode_wizard ("NX Electrode Wizard") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::NXObject * GetBoxFeatTag
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
