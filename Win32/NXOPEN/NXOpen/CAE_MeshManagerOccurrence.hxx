#ifndef NXOpen_CAE_MESHMANAGEROCCURRENCE_HXX_INCLUDED
#define NXOpen_CAE_MESHMANAGEROCCURRENCE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_MeshManagerOccurrence.ja
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
#include <NXOpen/CAE_IMeshManager.hxx>
#include <NXOpen/libnxopencpp_cae_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAE
    {
        class MeshManagerOccurrence;
    }
    namespace CAE
    {
        class IMeshManager;
    }
    namespace CAE
    {
        class MeshCollectorOccurrence;
    }
    namespace CAE
    {
        class MeshCollectorOccurrenceBuilder;
    }
    namespace CAE
    {
        class _MeshManagerOccurrenceBuilder;
        class MeshManagerOccurrenceImpl;
        /**  @brief  Manages MeshOccurrencs and MeshCollectorOccurrences in a fem part  

          
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  MeshManagerOccurrence : public CAE::IMeshManager
        {
            private: MeshManagerOccurrenceImpl * m_meshmanageroccurrence_impl;
            private: friend class  _MeshManagerOccurrenceBuilder;
            protected: MeshManagerOccurrence();
            public: ~MeshManagerOccurrence();
            /** Creates a mesh collector occurrence builder for the mesh collector occurrence overrides
                      @return  MeshCollector Occurrence Builder 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::MeshCollectorOccurrenceBuilder * CreateOccurrenceBuilder
            (
                NXOpen::CAE::MeshCollectorOccurrence * meshCollector /** @link MeshCollectorOccurrence MeshCollectorOccurrence@endlink  to be edited */
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
