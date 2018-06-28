#ifndef NXOpen_ASSEMBLIES_SUBSETBUILDER_HXX_INCLUDED
#define NXOpen_ASSEMBLIES_SUBSETBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Assemblies_SubsetBuilder.ja
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
#include <NXOpen/Assemblies_FindInCollaborativeDesign.hxx>
#include <NXOpen/Assemblies_Subset.hxx>
#include <NXOpen/Assemblies_SubsetBuilder.hxx>
#include <NXOpen/Assemblies_SubsetConfigurationBuilder.hxx>
#include <NXOpen/BasicEffectivityBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/CollaborativeDesign.hxx>
#include <NXOpen/ObjectList.hxx>
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
        class SubsetBuilder;
    }
    namespace Assemblies
    {
        class ComponentAssembly;
    }
    namespace Assemblies
    {
        class FindInCollaborativeDesign;
    }
    namespace Assemblies
    {
        class PartitionList;
    }
    namespace Assemblies
    {
        class SearchResultCollection;
    }
    namespace Assemblies
    {
        class Subset;
    }
    namespace Assemblies
    {
        class SubsetConfigurationBuilder;
    }
    namespace Assemblies
    {
        class SubsetRecipe;
    }
    class BasicEffectivityBuilder;
    class Builder;
    class CollaborativeDesign;
    class NXObject;
    namespace Assemblies
    {
        class _SubsetBuilderBuilder;
        class SubsetBuilderImpl;
        /**
                A SubsetBuilder is used to create or edit an @link Assemblies::Subset Assemblies::Subset@endlink .
             <br> To create a new instance of this class, use @link Assemblies::SubsetCollection::CreateSubsetBuilder Assemblies::SubsetCollection::CreateSubsetBuilder@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_ASSEMBLIESEXPORT  SubsetBuilder : public Builder
        {
            private: SubsetBuilderImpl * m_subsetbuilder_impl;
            private: friend class  _SubsetBuilderBuilder;
            protected: SubsetBuilder();
            public: ~SubsetBuilder();
            /**Returns  the @link Assemblies::ComponentAssembly Assemblies::ComponentAssembly@endlink  within which we are 
                        building an @link Assemblies::Subset Assemblies::Subset@endlink . 
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: NXOpen::Assemblies::ComponentAssembly * Workset
            (
            );
            /**Returns  the @link Assemblies::Subset Assemblies::Subset@endlink  that we are building.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: NXOpen::Assemblies::Subset * Subset
            (
            );
            /** Generate the search results for the @link Assemblies::Subset Assemblies::Subset@endlink  according to the current
                        @link Assemblies::SubsetRecipe Assemblies::SubsetRecipe@endlink .
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void GenerateResults
            (
            );
            /**Returns  the @link Assemblies::FindInCollaborativeDesign Assemblies::FindInCollaborativeDesign@endlink  for use in the context
                        determined by this builder.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: NXOpen::Assemblies::FindInCollaborativeDesign * Finder
            (
            );
            /**Returns  the search configuration. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: NXOpen::Assemblies::SubsetConfigurationBuilder * SubsetConfiguration
            (
            );
            /**Returns  the description of the @link Assemblies::Subset Assemblies::Subset@endlink .
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: NXString SubsetDescription
            (
            );
            /**Sets  the description of the @link Assemblies::Subset Assemblies::Subset@endlink .
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetSubsetDescription
            (
                const NXString & description /** description */ 
            );
            /**Sets  the description of the @link Assemblies::Subset Assemblies::Subset@endlink .
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            void SetSubsetDescription
            (
                const char * description /** description */ 
            );
            /**Returns  the name of the @link Assemblies::Subset Assemblies::Subset@endlink .
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: NXString SubsetName
            (
            );
            /**Sets  the name of the @link Assemblies::Subset Assemblies::Subset@endlink .
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetSubsetName
            (
                const NXString & name /** name */ 
            );
            /**Sets  the name of the @link Assemblies::Subset Assemblies::Subset@endlink .
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            void SetSubsetName
            (
                const char * name /** name */ 
            );
            /** Finds the @link NXObject NXObject@endlink  with the given identifier as recorded in a journal. 
                    An object may not return the same value as its JournalIdentifier in different versions of 
                    the software. However newer versions of the software should find the same object when 
                    FindObject is passed older versions of its journal identifier. In general, this method 
                    should not be used in handwritten code and exists to support record and playback of journals.
                
                    An exception will be thrown if no object can be found with the given journal identifier.  @return  Object found, or null if no such object exists 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: NXOpen::NXObject * FindObject
            (
                const NXString & journalIdentifier /** Identifier of the @link NXObject NXObject@endlink  to be found */
            );
            /** Finds the @link NXObject NXObject@endlink  with the given identifier as recorded in a journal. 
                    An object may not return the same value as its JournalIdentifier in different versions of 
                    the software. However newer versions of the software should find the same object when 
                    FindObject is passed older versions of its journal identifier. In general, this method 
                    should not be used in handwritten code and exists to support record and playback of journals.
                
                    An exception will be thrown if no object can be found with the given journal identifier.  @return  Object found, or null if no such object exists 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            NXOpen::NXObject * FindObject
            (
                const char * journalIdentifier /** Identifier of the @link NXObject NXObject@endlink  to be found */
            );
            /**Returns  the @link CollaborativeDesign CollaborativeDesign@endlink  of the subset.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: NXOpen::CollaborativeDesign * CollaborativeDesign
            (
            );
            /**Sets  the @link CollaborativeDesign CollaborativeDesign@endlink  of the subset.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: void SetCollaborativeDesign
            (
                NXOpen::CollaborativeDesign * collaborativeDesign /** collaborativedesign */ 
            );
            /**Returns  the @link BasicEffectivityBuilder BasicEffectivityBuilder@endlink  used to edit the target effectivity of the subset.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: NXOpen::BasicEffectivityBuilder * TargetEffectivity
            (
            );
            /**Returns  the default target @link Partition Partition@endlink s for design elements created within the subset.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_4gd_integration ("4th Generation Design") */
            public: NXOpen::Assemblies::PartitionList * TargetPartitionList
            (
            );


            /** Returns the @link Assemblies::SearchResultCollection Assemblies::SearchResultCollection@endlink  that contains current search results 
                        associated with this subset builder.
                        SearchResults will be populated with the existing subset contents when the builder is created to
                        edit a subset.  These are replaced with results found by the last call to @link SubsetBuilder::GenerateResults SubsetBuilder::GenerateResults@endlink 
                        after that method is first called. 
                        In addition, the last results from @link SubsetBuilder::Finder SubsetBuilder::Finder@endlink  are included in this
                        collection.
             <br>  Created in NX8.5.0.  <br>  
            */
            public: NXOpen::Assemblies::SearchResultCollection *SearchResults();
            /** Returns the @link Assemblies::SubsetRecipe Assemblies::SubsetRecipe@endlink  that contains the @link Assemblies::SearchTerm Assemblies::SearchTerm@endlink s 
                        used to generate the contents of the subset 
             <br>  Created in NX8.5.0.  <br>  
            */
            public: NXOpen::Assemblies::SubsetRecipe *Recipe();
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
