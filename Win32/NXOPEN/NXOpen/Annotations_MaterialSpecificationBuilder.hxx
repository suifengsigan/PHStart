#ifndef NXOpen_ANNOTATIONS_MATERIALSPECIFICATIONBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_MATERIALSPECIFICATIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_MaterialSpecificationBuilder.ja
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
#include <NXOpen/Annotations_PmiAttributeBuilder.hxx>
#include <NXOpen/Annotations_MaterialSpecificationBuilder.hxx>
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
        class MaterialSpecificationBuilder;
    }
    namespace Annotations
    {
        class PmiAttributeBuilder;
    }
    namespace Annotations
    {
        class _MaterialSpecificationBuilderBuilder;
        class MaterialSpecificationBuilderImpl;
        /** Represents a @link Annotations::MaterialSpecification Annotations::MaterialSpecification@endlink  builder  <br> To create a new instance of this class, use @link Annotations::PmiAttributeCollection::CreateMaterialSpecificationBuilder Annotations::PmiAttributeCollection::CreateMaterialSpecificationBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  MaterialSpecificationBuilder : public Annotations::PmiAttributeBuilder
        {
            private: MaterialSpecificationBuilderImpl * m_materialspecificationbuilder_impl;
            private: friend class  _MaterialSpecificationBuilderBuilder;
            protected: MaterialSpecificationBuilder();
            public: ~MaterialSpecificationBuilder();
            /**Returns  the str title 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Title
            (
            );
            /**Sets  the str title 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTitle
            (
                const NXString & title /** title */ 
            );
            /**Sets  the str title 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetTitle
            (
                const char * title /** title */ 
            );
            /**Returns  the category 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Category
            (
            );
            /**Sets  the category 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetCategory
            (
                const NXString & category /** category */ 
            );
            /**Sets  the category 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetCategory
            (
                const char * category /** category */ 
            );
            /**Returns  the material type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString MaterialType
            (
            );
            /**Sets  the material type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetMaterialType
            (
                const NXString & materialType /** materialtype */ 
            );
            /**Sets  the material type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetMaterialType
            (
                const char * materialType /** materialtype */ 
            );
            /**Returns  the revision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString AvailableMaterial
            (
            );
            /**Sets  the revision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAvailableMaterial
            (
                const NXString & availableMaterial /** availablematerial */ 
            );
            /**Sets  the revision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetAvailableMaterial
            (
                const char * availableMaterial /** availablematerial */ 
            );
            /** Returns the material properties  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXString> GetMaterialProperties
            (
            );
            /** Sets the material properties 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetMaterialProperties
            (
                const std::vector<NXString> & materialProperties /** materialproperties */ 
            );
            /**Returns  the revision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Revision
            (
            );
            /**Sets  the revision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetRevision
            (
                const NXString & revision /** revision */ 
            );
            /**Sets  the revision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetRevision
            (
                const char * revision /** revision */ 
            );
            /** Returns the nomenclature  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXString> GetNomenclature
            (
            );
            /** Sets the nomenclature 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetNomenclature
            (
                const std::vector<NXString> & nomenclature /** nomenclature */ 
            );
            /** Returns the open field  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXString> GetOpenField
            (
            );
            /** Sets the open field 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetOpenField
            (
                const std::vector<NXString> & openField /** openfield */ 
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
