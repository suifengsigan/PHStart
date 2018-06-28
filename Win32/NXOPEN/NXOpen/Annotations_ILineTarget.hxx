#ifndef NXOpen_ANNOTATIONS_ILINETARGET_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_ILINETARGET_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_ILineTarget.ja
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
#include <NXOpen/INXObject.hxx>
#include <NXOpen/ugmath.hxx>
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
        class ILineTarget;
    }
    class INXObject;
    namespace Annotations
    {
        /** Represents interface class for line datum target 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  ILineTarget : public virtual INXObject
        {
            public: virtual ~ILineTarget() {}
            /**Returns  the target start point coordinates 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual NXOpen::Point3d StartPointCoordinates
            (
            ) = 0;
            /**Returns  the target end point coordinates 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual NXOpen::Point3d EndPointCoordinates
            (
            ) = 0;
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
