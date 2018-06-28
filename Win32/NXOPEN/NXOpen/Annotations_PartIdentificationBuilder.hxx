#ifndef NXOpen_ANNOTATIONS_PARTIDENTIFICATIONBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_PARTIDENTIFICATIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_PartIdentificationBuilder.ja
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
#include <NXOpen/Annotations_PartIdentificationBuilder.hxx>
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
        class PartIdentificationBuilder;
    }
    namespace Annotations
    {
        class PmiAttributeBuilder;
    }
    namespace Annotations
    {
        class _PartIdentificationBuilderBuilder;
        class PartIdentificationBuilderImpl;
        /** Represents a @link Annotations::PartIdentification Annotations::PartIdentification@endlink  builder  <br> To create a new instance of this class, use @link Annotations::PmiAttributeCollection::CreatePartIdentificationBuilder Annotations::PmiAttributeCollection::CreatePartIdentificationBuilder@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  PartIdentificationBuilder : public Annotations::PmiAttributeBuilder
        {
            private: PartIdentificationBuilderImpl * m_partidentificationbuilder_impl;
            private: friend class  _PartIdentificationBuilderBuilder;
            protected: PartIdentificationBuilder();
            public: ~PartIdentificationBuilder();
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
            /**Returns  the part identifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString PartIdentifier
            (
            );
            /**Sets  the part identifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetPartIdentifier
            (
                const NXString & partIdentifier /** partidentifier */ 
            );
            /**Sets  the part identifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetPartIdentifier
            (
                const char * partIdentifier /** partidentifier */ 
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
            /**Returns  the item name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString ItemName
            (
            );
            /**Sets  the item name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetItemName
            (
                const NXString & itemName /** itemname */ 
            );
            /**Sets  the item name 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetItemName
            (
                const char * itemName /** itemname */ 
            );
            /**Returns  the item name modifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString ItemNameModifier
            (
            );
            /**Sets  the item name modifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetItemNameModifier
            (
                const NXString & itemNameModifier /** itemnamemodifier */ 
            );
            /**Sets  the item name modifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetItemNameModifier
            (
                const char * itemNameModifier /** itemnamemodifier */ 
            );
            /**Returns  the descriptive modifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString DescriptiveModifier
            (
            );
            /**Sets  the descriptive modifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDescriptiveModifier
            (
                const NXString & descriptiveModifier /** descriptivemodifier */ 
            );
            /**Sets  the descriptive modifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetDescriptiveModifier
            (
                const char * descriptiveModifier /** descriptivemodifier */ 
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
