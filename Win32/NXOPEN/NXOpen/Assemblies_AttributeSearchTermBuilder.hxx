#ifndef NXOpen_ASSEMBLIES_ATTRIBUTESEARCHTERMBUILDER_HXX_INCLUDED
#define NXOpen_ASSEMBLIES_ATTRIBUTESEARCHTERMBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Assemblies_AttributeSearchTermBuilder.ja
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
#include <NXOpen/Assemblies_SearchTermBuilder.hxx>
#include <NXOpen/Assemblies_AttributeSearchTermBuilder.hxx>
#include <NXOpen/Assemblies_SearchTerm.hxx>
#include <NXOpen/libnxopencpp_assemblies_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Assemblies
    {
        class AttributeSearchTermBuilder;
    }
    namespace Assemblies
    {
        class SearchTermBuilder;
    }
    namespace Assemblies
    {
        class _AttributeSearchTermBuilderBuilder;
        class AttributeSearchTermBuilderImpl;
        /**
                An AttributeSearchTermBuilder is used to create or edit an @link Assemblies::AttributeSearchTerm Assemblies::AttributeSearchTerm@endlink .
             <br> To create a new instance of this class, use @link Assemblies::SubsetCollection::CreateAttributeSearchTermBuilder Assemblies::SubsetCollection::CreateAttributeSearchTermBuilder@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_ASSEMBLIESEXPORT  AttributeSearchTermBuilder : public Assemblies::SearchTermBuilder
        {
            private: AttributeSearchTermBuilderImpl * m_attributesearchtermbuilder_impl;
            private: friend class  _AttributeSearchTermBuilderBuilder;
            protected: AttributeSearchTermBuilder();
            public: ~AttributeSearchTermBuilder();
            /**Returns  the name of the saved query upon which this search term is based.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: NXString QueryName
            (
            );
            /**Sets  the name of the saved query upon which this search term is based.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetQueryName
            (
                const NXString & queryName /** queryname */ 
            );
            /**Sets  the name of the saved query upon which this search term is based.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            void SetQueryName
            (
                const char * queryName /** queryname */ 
            );
            /** Get the entry titles and values that are used to populate the saved query.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void GetCriteria
            (
                std::vector<NXString> & titles /** search criteria titles */,
                std::vector<NXString> & values /** search criteria values */
            );
            /** Set the entry titles and values that are used to populate the saved query.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetCriteria
            (
                std::vector<NXString> & titles /** search criteria titles */,
                std::vector<NXString> & values /** search criteria values */
            );
            /**Returns  the search term logic.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: NXOpen::Assemblies::SearchTerm::SearchTermLogicType SearchTermLogic
            (
            );
            /**Sets  the search term logic.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetSearchTermLogic
            (
                NXOpen::Assemblies::SearchTerm::SearchTermLogicType searchTermLogic /** searchtermlogic */ 
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
