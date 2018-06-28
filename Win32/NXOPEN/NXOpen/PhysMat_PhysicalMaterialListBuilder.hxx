#ifndef NXOpen_PHYSMAT_PHYSICALMATERIALLISTBUILDER_HXX_INCLUDED
#define NXOpen_PHYSMAT_PHYSICALMATERIALLISTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     PhysMat_PhysicalMaterialListBuilder.ja
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
#include <NXOpen/libnxopencpp_physmat_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace PhysMat
    {
        class PhysicalMaterialListBuilder;
    }
    class Builder;
    namespace PhysMat
    {
        class _PhysicalMaterialListBuilderBuilder;
        class PhysicalMaterialListBuilderImpl;
        /** This builder is used by the Materials list component that allows copying, editing, deleting. etc.
             materials.
             <br> To create a new instance of this class, use @link PhysicalMaterialCollection::CreateListBlockBuilder PhysicalMaterialCollection::CreateListBlockBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_PHYSMATEXPORT  PhysicalMaterialListBuilder : public Builder
        {
            private: PhysicalMaterialListBuilderImpl * m_physicalmateriallistbuilder_impl;
            private: friend class  _PhysicalMaterialListBuilderBuilder;
            protected: PhysicalMaterialListBuilder();
            public: ~PhysicalMaterialListBuilder();
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
