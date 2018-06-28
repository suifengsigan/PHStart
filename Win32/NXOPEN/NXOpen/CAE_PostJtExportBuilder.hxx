#ifndef NXOpen_CAE_POSTJTEXPORTBUILDER_HXX_INCLUDED
#define NXOpen_CAE_POSTJTEXPORTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_PostJtExportBuilder.ja
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
#include <NXOpen/CAE_PostJtExportBuilder.hxx>
#include <NXOpen/CAE_Result.hxx>
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
        class PostJtExportBuilder;
    }
    class Builder;
    namespace CAE
    {
        class BaseResultType;
    }
    namespace CAE
    {
        class Result;
    }
    namespace CAE
    {
        class _PostJtExportBuilderBuilder;
        class PostJtExportBuilderImpl;
        /**
            Represents a @link CAE::PostJtExportBuilder CAE::PostJtExportBuilder@endlink  used for exporting JTs of Result Types in Post Processing
             <br> To create a new instance of this class, use @link CAE::ResultManager::CreatePostJtBuilder CAE::ResultManager::CreatePostJtBuilder@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  PostJtExportBuilder : public Builder
        {
            private: PostJtExportBuilderImpl * m_postjtexportbuilder_impl;
            private: friend class  _PostJtExportBuilderBuilder;
            protected: PostJtExportBuilder();
            public: ~PostJtExportBuilder();
            /**Returns the result of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::CAE::Result * Result
            (
            );
            /**Sets the result of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetResult
            (
                NXOpen::CAE::Result * result /** result */ 
            );
            /**Returns the result type of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::CAE::BaseResultType * ResultType
            (
            );
            /**Sets the result type of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetResultType
            (
                NXOpen::CAE::BaseResultType * resulttype /** resulttype */ 
            );
            /**Returns the ply and layer of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: int Ply
            (
            );
            /**Sets the ply and layer of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetPly
            (
                int ply /** ply */ 
            );
            /**Returns the layer of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: int Layer
            (
            );
            /**Sets the layer of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetLayer
            (
                int layer /** layer */ 
            );
            /**Returns the component of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::CAE::Result::Component Component
            (
            );
            /**Sets the component of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetComponent
            (
                NXOpen::CAE::Result::Component component /** component */ 
            );
            /**Returns the jtfilename of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXString Jtfilename
            (
            );
            /**Sets the jtfilename of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetJtfilename
            (
                const NXString & jtfilename /** jtfilename */ 
            );
            /**Sets the jtfilename of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            void SetJtfilename
            (
                const char * jtfilename /** jtfilename */ 
            );
            /**Returns the jtdatasetname of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXString Jtdatasetname
            (
            );
            /**Sets the jtdatasetname of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetJtdatasetname
            (
                const NXString & jtdatasetname /** jtdatasetname */ 
            );
            /**Sets the jtdatasetname of the builder 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            void SetJtdatasetname
            (
                const char * jtdatasetname /** jtdatasetname */ 
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
