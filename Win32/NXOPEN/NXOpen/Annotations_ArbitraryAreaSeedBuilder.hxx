#ifndef NXOpen_ANNOTATIONS_ARBITRARYAREASEEDBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_ARBITRARYAREASEEDBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_ArbitraryAreaSeedBuilder.ja
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
#include <NXOpen/Annotations_ArbitraryAreaSeedBuilder.hxx>
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class ArbitraryAreaSeedBuilder;
    }
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    class Point;
    class SelectDisplayableObjectList;
    namespace Annotations
    {
        class _ArbitraryAreaSeedBuilderBuilder;
        class ArbitraryAreaSeedBuilderImpl;
        /**
            Represents a @link Annotations::ArbitraryAreaSeedBuilder Annotations::ArbitraryAreaSeedBuilder@endlink 
             <br> To create a new instance of this class, use @link Annotations::PmiManager::CreateArbitraryAreaSeedBuilder Annotations::PmiManager::CreateArbitraryAreaSeedBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  ArbitraryAreaSeedBuilder : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            private: ArbitraryAreaSeedBuilderImpl * m_arbitraryareaseedbuilder_impl;
            private: friend class  _ArbitraryAreaSeedBuilderBuilder;
            protected: ArbitraryAreaSeedBuilder();
            public: ~ArbitraryAreaSeedBuilder();
            /**Returns  the select face 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectDisplayableObjectList * SelectFace
            (
            );
            /**Returns  the specify curves 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectDisplayableObjectList * SpecifyCurves
            (
            );
            /**Returns  the specify point 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * SpecifyPoint
            (
            );
            /**Sets  the specify point 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            public: void SetSpecifyPoint
            (
                NXOpen::Point * specifyPoint /** specifypoint */ 
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
