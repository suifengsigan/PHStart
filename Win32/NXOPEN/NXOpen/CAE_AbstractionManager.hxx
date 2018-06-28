#ifndef NXOpen_CAE_ABSTRACTIONMANAGER_HXX_INCLUDED
#define NXOpen_CAE_ABSTRACTIONMANAGER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_AbstractionManager.ja
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
#include <NXOpen/CAE_DeletePolygonFaceBuilder.hxx>
#include <NXOpen/CAE_FaceFromBoundaryBuilder.hxx>
#include <NXOpen/TaggedObject.hxx>
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
        class AbstractionManager;
    }
    namespace CAE
    {
        class FEModel;
    }
    namespace CAE
    {
        class CircularImprintBuilder;
    }
    namespace CAE
    {
        class DeletePolygonFaceBuilder;
    }
    namespace CAE
    {
        class FaceFromBoundaryBuilder;
    }
    namespace CAE
    {
        class PolygonFaceOnMeshBuilder;
    }
    namespace CAE
    {
        class SuppressHoleBuilder;
    }
    namespace CAE
    {
        class AbstractionManagerImpl;
        /**  @brief  Provides method for creating  builder for
            abstraction commands in a fem part  

           <br> To obtain an instance of this class, refer to @link CAE::FEModel CAE::FEModel@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  AbstractionManager
        {
            private: AbstractionManagerImpl * m_abstractionmanager_impl;
            private: NXOpen::CAE::FEModel* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit AbstractionManager(NXOpen::CAE::FEModel *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~AbstractionManager();
            /** Creates a builder for abstraction Command  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::CircularImprintBuilder * CreateCircularImprintBuilder
            (
            );
            /** Creates a builder for Polygon Face On Mesh Command  @return  
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::PolygonFaceOnMeshBuilder * CreatePolygonFaceOnMeshBuilder
            (
            );
            /** Creates a builder for Suppress Hole Command  @return  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::SuppressHoleBuilder * CreateSuppressHoleBuilder
            (
            );
            /** Creates a @link CAE::DeletePolygonFaceBuilder CAE::DeletePolygonFaceBuilder@endlink  @return   
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::DeletePolygonFaceBuilder * CreateDeletePolygonFaceBuilder
            (
            );
            /** Creates a @link CAE::FaceFromBoundaryBuilder CAE::FaceFromBoundaryBuilder@endlink  @return   
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::FaceFromBoundaryBuilder * CreateFaceFromBoundaryBuilder
            (
            );
        }; //lint !e1712 default constructor not defined for class  

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
