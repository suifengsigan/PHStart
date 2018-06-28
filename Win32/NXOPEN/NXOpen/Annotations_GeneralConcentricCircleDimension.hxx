#ifndef NXOpen_ANNOTATIONS_GENERALCONCENTRICCIRCLEDIMENSION_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_GENERALCONCENTRICCIRCLEDIMENSION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_GeneralConcentricCircleDimension.ja
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
#include <NXOpen/Annotations_BaseConcentricCircleDimension.hxx>
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
        class GeneralConcentricCircleDimension;
    }
    namespace Annotations
    {
        class BaseConcentricCircleDimension;
    }
    namespace Annotations
    {
        class _GeneralConcentricCircleDimensionBuilder;
        class GeneralConcentricCircleDimensionImpl;
        /** Represents a concentric circle dimension  <br> To obtain an instance of this class use @link Annotations::DimensionCollection Annotations::DimensionCollection@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  GeneralConcentricCircleDimension : public Annotations::BaseConcentricCircleDimension
        {
            private: GeneralConcentricCircleDimensionImpl * m_generalconcentriccircledimension_impl;
            private: friend class  _GeneralConcentricCircleDimensionBuilder;
            protected: GeneralConcentricCircleDimension();
            public: ~GeneralConcentricCircleDimension();
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
