#ifndef NXOpen_GEOMETRICUTILITIES_INTERACTIVESECTIONBUILDER_HXX_INCLUDED
#define NXOpen_GEOMETRICUTILITIES_INTERACTIVESECTIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricUtilities_InteractiveSectionBuilder.ja
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
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/GeometricUtilities_InteractiveSectionBuilder.hxx>
#include <NXOpen/GeometricUtilities_SectionPlaneData.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_geometricutilities_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace GeometricUtilities
    {
        class InteractiveSectionBuilder;
    }
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    namespace GeometricUtilities
    {
        class SectionPlaneData;
    }
    namespace GeometricUtilities
    {
        class _InteractiveSectionBuilderBuilder;
        class InteractiveSectionBuilderImpl;
        /** Represents a @link GeometricUtilities::InteractiveSectionBuilder GeometricUtilities::InteractiveSectionBuilder@endlink .
                The interactive section block uses 2 points to draw a line or a section.
         <br>  Created in NX7.0.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICUTILITIESEXPORT  InteractiveSectionBuilder : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            private: InteractiveSectionBuilderImpl * m_interactivesectionbuilder_impl;
            private: friend class  _InteractiveSectionBuilderBuilder;
            protected: InteractiveSectionBuilder();
            public: ~InteractiveSectionBuilder();
            /** Appends a plane 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : studio_free_form ("STUDIO FREE FORM") */
            public: void AppendPlane
            (
                const NXOpen::Point3d & point1 /** Point 1 of the interactive line */,
                const NXOpen::Point3d & point2 /** Point 2 of the interactive line */,
                const NXOpen::Point3d & origin /** Origin of the plane */,
                const NXOpen::Vector3d & normal /** Normal of the plane */
            );
            /** Deletes last point or the plane created
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : studio_free_form ("STUDIO FREE FORM") */
            public: void DeleteLast
            (
            );
            /** Get the number of planes  @return  number of planes 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : studio_free_form ("STUDIO FREE FORM") */
            public: int GetNumPlanes
            (
            );
            /** Get the Nth plane  @return  plane found at index
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : studio_free_form ("STUDIO FREE FORM") */
            public: NXOpen::GeometricUtilities::SectionPlaneData * GetNthPlane
            (
                int index /** index of the plane */
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
