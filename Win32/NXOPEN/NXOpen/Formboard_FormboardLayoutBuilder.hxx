#ifndef NXOpen_FORMBOARD_FORMBOARDLAYOUTBUILDER_HXX_INCLUDED
#define NXOpen_FORMBOARD_FORMBOARDLAYOUTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Formboard_FormboardLayoutBuilder.ja
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
#include <NXOpen/Formboard_FormboardLayoutBuilder.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/libnxopencpp_formboard_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Formboard
    {
        class FormboardLayoutBuilder;
    }
    class Builder;
    class Expression;
    namespace Formboard
    {
        class LayoutLengthOptions;
    }
    class Point;
    namespace Routing
    {
        class SelectControlPoint;
    }
    namespace Formboard
    {
        class _FormboardLayoutBuilderBuilder;
        class FormboardLayoutBuilderImpl;
        /** Class that performs the "layout" of Formboard geometry.  Creates all geometry
                chosen by the user to flatten into a drawing and orients the geometry to
                match the criteria specified in this builder class.   This builder must only
                be instantiated and used after the harnesses have been specified and stored
                using the @link Formboard::FormboardManager::StoreHarnessesToFlatten Formboard::FormboardManager::StoreHarnessesToFlatten@endlink  method.  <br> To create a new instance of this class, use @link Formboard::FormboardManager::CreateLayoutBuilder Formboard::FormboardManager::CreateLayoutBuilder@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_FORMBOARDEXPORT  FormboardLayoutBuilder : public Builder
        {
            /** Selection method for the set of segments that define the main
                        run of the formboard geometry. */
            public: enum MainRunType
            {
                MainRunTypeLongest/** Path of longest wire. */,
                MainRunTypeThickest/** Path of longest wire contained within the
                                                                        thickest bundle. */,
                MainRunTypeUserSelection/** Manual selection of path. */
            };

            /** Methods for determining which angles to apply at each branch of the Formboard. */
            public: enum BranchAngle
            {
                BranchAngleAsDesigned/** Use the angle equal to the 3D angle
                                                                            of the branch in the 3D harness. */,
                BranchAngleStandardAngles/** Apply a standard angle to the branch,
                                                                            the level of the branch determines
                                                                            which angle to apply. */,
                BranchAngleMaximumAngles/** Apply the largest possible angle values
                                                                            at every branch to force the harness
                                                                            to spread out. */,
                BranchAngleRandomAngles/** Randomly choose an angle for each
                                                                            branch. */
            };

            /** Shape option for the branches. */
            public: enum BranchShape
            {
                BranchShapeStraight/** Each branch forms a straight line. */,
                BranchShapeAngled/** Branch becomes angled at each location
                                                                        that forms a new branch. */
            };

            private: FormboardLayoutBuilderImpl * m_formboardlayoutbuilder_impl;
            private: friend class  _FormboardLayoutBuilderBuilder;
            protected: FormboardLayoutBuilder();
            public: ~FormboardLayoutBuilder();
            /**Returns  the main run method. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Formboard::FormboardLayoutBuilder::MainRunType MainRunMethod
            (
            );
            /**Sets  the main run method. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: void SetMainRunMethod
            (
                NXOpen::Formboard::FormboardLayoutBuilder::MainRunType mainRunType /** mainruntype */ 
            );
            /**Returns  the start of the main run.  Contains the starting control point 
                        that defines the main run of the Formboard if the 
                        @link Formboard::FormboardLayoutBuilder::MainRunType Formboard::FormboardLayoutBuilder::MainRunType@endlink  is 
                        @link Formboard::FormboardLayoutBuilder::MainRunTypeUserSelection Formboard::FormboardLayoutBuilder::MainRunTypeUserSelection@endlink . 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Routing::SelectControlPoint * MainRunStartSelection
            (
            );
            /**Returns  the end of the main run.  Contains the ending control point 
                        that defines the main run of the Formboard if the 
                        @link Formboard::FormboardLayoutBuilder::MainRunType Formboard::FormboardLayoutBuilder::MainRunType@endlink  is 
                        @link Formboard::FormboardLayoutBuilder::MainRunTypeUserSelection Formboard::FormboardLayoutBuilder::MainRunTypeUserSelection@endlink . 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Routing::SelectControlPoint * MainRunEndSelection
            (
            );
            /**Returns  the flag that determines whether the main run is "reversed" or not. If true then
                        the direction and order of the main run path is reversed.   The end of the main
                        run becomes the start and vice-versa.  The list of path segments is not
                        modified or re-ordered, only the order in which the path segments is evaluated
                        when laying out the geometry. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: bool ReverseMainRun
            (
            );
            /**Sets  the flag that determines whether the main run is "reversed" or not. If true then
                        the direction and order of the main run path is reversed.   The end of the main
                        run becomes the start and vice-versa.  The list of path segments is not
                        modified or re-ordered, only the order in which the path segments is evaluated
                        when laying out the geometry. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: void SetReverseMainRun
            (
                bool reverseMainRun /** reversemainrun */ 
            );
            /**Returns  the main run origin.  The location in modeling space of the start 
                        of the main run. The layout operation translates the main run such 
                        that it start RCP is located at this location. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Point * MainRunOrigin
            (
            );
            /**Sets  the main run origin.  The location in modeling space of the start 
                        of the main run. The layout operation translates the main run such 
                        that it start RCP is located at this location. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: void SetMainRunOrigin
            (
                NXOpen::Point * mainRunOrigin /** mainrunorigin */ 
            );
            /**Returns  the length options for the layout operation.  The length options only have
                      any effect if this is the first time that the Formboard geometry is being
                      created in the drawing. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Formboard::LayoutLengthOptions * LengthOptions
            (
            );
            /**Returns  the branch angle type.  Specifies how the layout algorithm determines the angle
                        between each child branch and its parent branch.  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Formboard::FormboardLayoutBuilder::BranchAngle BranchAngleMethod
            (
            );
            /**Sets  the branch angle type.  Specifies how the layout algorithm determines the angle
                        between each child branch and its parent branch.  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: void SetBranchAngleMethod
            (
                NXOpen::Formboard::FormboardLayoutBuilder::BranchAngle branchAngle /** branchangle */ 
            );
            /**Returns  the primary standard angle.   The layout algorithm snaps the angle of the
                     branch to a multiple of this angle.  
                     Only used when the 
                     @link Formboard::FormboardLayoutBuilder::BranchAngleMethod Formboard::FormboardLayoutBuilder::BranchAngleMethod@endlink  is
                     @link Formboard::FormboardLayoutBuilder::BranchAngleStandardAngles Formboard::FormboardLayoutBuilder::BranchAngleStandardAngles@endlink . 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Expression * PrimaryStandardAngle
            (
            );
            /**Returns  the secondary standard angle.   The layout algorithm snaps the angle of the
                     branch to a multiple of this angle when all multiples of the primary angle
                     have been used.  

                     Only used when the 
                     @link Formboard::FormboardLayoutBuilder::BranchAngle Formboard::FormboardLayoutBuilder::BranchAngle@endlink  is
                     @link Formboard::FormboardLayoutBuilder::BranchAngleStandardAngles Formboard::FormboardLayoutBuilder::BranchAngleStandardAngles@endlink . 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Expression * SecondaryStandardAngle
            (
            );
            /**Returns  the tertiary standard angle.   The layout algorithm snaps the angle of the
                     branch to a multiple of this angle when all multiples of the primary and secondary 
                     angles have been used.  

                     Only used when the 
                     @link Formboard::FormboardLayoutBuilder::BranchAngle Formboard::FormboardLayoutBuilder::BranchAngle@endlink  is
                     @link Formboard::FormboardLayoutBuilder::BranchAngleStandardAngles Formboard::FormboardLayoutBuilder::BranchAngleStandardAngles@endlink . 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Expression * TertiaryStandardAngle
            (
            );
            /**Returns  the minimum random angle.  Used when 
                     @link Formboard::FormboardLayoutBuilder::BranchAngle Formboard::FormboardLayoutBuilder::BranchAngle@endlink  is
                     @link Formboard::FormboardLayoutBuilder::BranchAngleRandomAngles Formboard::FormboardLayoutBuilder::BranchAngleRandomAngles@endlink .
                      
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Expression * MinimumRandomAngle
            (
            );
            /**Returns  the maximum random angle.  Used when
                      @link Formboard::FormboardLayoutBuilder::BranchAngle Formboard::FormboardLayoutBuilder::BranchAngle@endlink  is
                     @link Formboard::FormboardLayoutBuilder::BranchAngleRandomAngles Formboard::FormboardLayoutBuilder::BranchAngleRandomAngles@endlink .
                     
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Expression * MaximumRandomAngle
            (
            );
            /**Returns  the branch shape type. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: NXOpen::Formboard::FormboardLayoutBuilder::BranchShape BranchShapeType
            (
            );
            /**Sets  the branch shape type. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: void SetBranchShapeType
            (
                NXOpen::Formboard::FormboardLayoutBuilder::BranchShape branchShape /** branchshape */ 
            );
            /** Creates the initial set of formboard geometry using the current 
                        default values stored in the builder.   This geometry is necessary for the
                        UI to allow the user to see and select formboard geometry, for example to define
                        a Main Run.   Does nothing if the work part already contains formboard
                        geometry.  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: void CreateDefaultGeometry
            (
            );
            /** Updates the orientation and placement of the formboard geometry to match
                        the current set of layout options stored within the builder. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: void UpdateLayout
            (
            );
            /** Translates the formboard geometry so that it matches the new main run origin, this is a more
                        lightweight operation than the full UpdateLayout operation.  The assumption here
                        is that the only change to the builder is with the main run origin. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : routing_harness ("Routing Harness") */
            public: void TranslateToNewOrigin
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
