#ifndef NXOpen_ANNOTATIONS_CIRCULARTARGET_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_CIRCULARTARGET_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_CircularTarget.ja
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
#include <NXOpen/Annotations.hxx>
#include <NXOpen/Annotations_AreaTarget.hxx>
#include <NXOpen/Annotations_ICircularTarget.hxx>
#include <NXOpen/INXObject.hxx>
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
        class CircularTarget;
    }
    namespace Annotations
    {
        class AreaTarget;
    }
    namespace Annotations
    {
        class ICircularTarget;
    }
    namespace Assemblies
    {
        class Component;
    }
    class BasePart;
    class Expression;
    class INXObject;
    namespace Annotations
    {
        class _CircularTargetBuilder;
        class CircularTargetImpl;
        /** Represents a circular datum target  <br> To create or edit an instance of this class, use @link Annotations::PmiDatumTargetBuilder Annotations::PmiDatumTargetBuilder@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  CircularTarget : public Annotations::AreaTarget, public virtual Annotations::ICircularTarget
        {
            private: CircularTargetImpl * m_circulartarget_impl;
            private: friend class  _CircularTargetBuilder;
            protected: CircularTarget();
            public: ~CircularTarget();
            /** Returns the target diameter  @return  Diameter data 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual NXOpen::Annotations::Value GetDiameter
            (
            );
            /** Sets the target diameter.
                        NOTE: This method should not be used to edit a read-only object such as a Mirrored PMI object.
                              If it is, the changes will be overridden when the part is updated. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") */
            public: virtual void SetDiameter
            (
                const NXOpen::Annotations::Value & diameter /** New diameter data */
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
