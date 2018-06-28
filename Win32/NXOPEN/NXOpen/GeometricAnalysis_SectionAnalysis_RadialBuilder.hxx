#ifndef NXOpen_GEOMETRICANALYSIS_SECTIONANALYSIS_RADIALBUILDER_HXX_INCLUDED
#define NXOpen_GEOMETRICANALYSIS_SECTIONANALYSIS_RADIALBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricAnalysis_SectionAnalysis_RadialBuilder.ja
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
#include <NXOpen/GeometricAnalysis_SectionAnalysis_RadialBuilder.hxx>
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_geometricanalysis_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace GeometricAnalysis
    {
        namespace SectionAnalysis
        {
            class RadialBuilder;
        }
    }
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    class Point;
    class SelectPoint;
    namespace GeometricAnalysis
    {
        namespace SectionAnalysis
        {
            class _RadialBuilderBuilder;
            class RadialBuilderImpl;
            /** Represents the Radial specification for a @link GeometricAnalysis::SectionAnalysis::SectionAnalysisExBuilder GeometricAnalysis::SectionAnalysis::SectionAnalysisExBuilder@endlink .
             <br>  Created in NX7.0.0.  <br>  
            */
            class NXOPENCPP_GEOMETRICANALYSISEXPORT  RadialBuilder : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
            {
                /** The type of the rotation axis*/
                public: enum RotationAxisType
                {
                    RotationAxisTypeXc/** XC axis */,
                    RotationAxisTypeYc/** YC axis */,
                    RotationAxisTypeZc/** ZC axis */,
                    RotationAxisTypeView/** View direction */,
                    RotationAxisTypeArbitraryVector/** A user specified vector */
                };

                private: RadialBuilderImpl * m_radialbuilder_impl;
                private: friend class  _RadialBuilderBuilder;
                protected: RadialBuilder();
                public: ~RadialBuilder();
                /**Returns  a value indicating the type of the rotation axis
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::GeometricAnalysis::SectionAnalysis::RadialBuilder::RotationAxisType RotationAxis
                (
                );
                /**Sets  a value indicating the type of the rotation axis
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
                public: void SetRotationAxis
                (
                    NXOpen::GeometricAnalysis::SectionAnalysis::RadialBuilder::RotationAxisType rotationAxis /** rotationaxis */ 
                );
                /**Returns  the user specified rotation vector 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Vector3d RotationVector
                (
                );
                /**Sets  the user specified rotation vector 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
                public: void SetRotationVector
                (
                    const NXOpen::Vector3d & rotationVector /** rotationvector */ 
                );
                /**Returns  the rotation point 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Point * SpecifiedRotationPoint
                (
                );
                /**Sets  the rotation point 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
                public: void SetSpecifiedRotationPoint
                (
                    NXOpen::Point * specifiedRotationPoint /** specifiedrotationpoint */ 
                );
                /**Returns  the start position 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectPoint * StartPosition
                (
                );
                /**Returns  a value indicating how many sections should created 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : None */
                public: int Number
                (
                );
                /**Sets  a value indicating how many sections should created 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
                public: void SetNumber
                (
                    int number /** number */ 
                );
                /**Returns  a value indicating whether the spacing is applied 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : None */
                public: bool IsSpacingEnabled
                (
                );
                /**Sets  a value indicating whether the spacing is applied 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
                public: void SetSpacingEnabled
                (
                    bool isSpacingEnabled /** isspacingenabled */ 
                );
                /**Returns  a value indicating the space between sections 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : None */
                public: double Spacing
                (
                );
                /**Sets  a value indicating the space between sections 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
                public: void SetSpacing
                (
                    double spacing /** spacing */ 
                );
                /**Returns  a value indicating the distance from the start position 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : None */
                public: double Offset
                (
                );
                /**Sets  a value indicating the distance from the start position 
                 <br>  Created in NX7.0.0.  <br>  
                 <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
                public: void SetOffset
                (
                    double offset /** offset */ 
                );
                /** Validate whether the inputs to the component are sufficient for 
                            commit to be called.  If the component is not in a state to commit
                            then an exception is thrown.  For example, if the component requires
                            you to set some property, this method will throw an exception if
                            you haven't set it.  This method throws a not-yet-implemented
                            NXException for some components.
                         @return  Was self validation successful 
                 <br>  Created in NX3.0.1.  <br>  
                 <br> License requirements : None */
                public: virtual bool Validate
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
