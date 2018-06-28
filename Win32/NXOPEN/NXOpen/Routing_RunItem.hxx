#ifndef NXOpen_ROUTING_RUNITEM_HXX_INCLUDED
#define NXOpen_ROUTING_RUNITEM_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Routing_RunItem.ja
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
#include <NXOpen/Routing_CharacteristicList.hxx>
#include <NXOpen/TransientObject.hxx>
#include <NXOpen/libnxopencpp_routing_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Routing
    {
        class RunItem;
    }
    namespace Routing
    {
        class CharacteristicList;
    }
    namespace Routing
    {
        class RunItemImpl;
        /** Routing Run Item object references components which comprise a piping run. 
         <br>  Created in NX7.5.4.  <br>  
        */
        class NXOPENCPP_ROUTINGEXPORT  RunItem : public TransientObject
        {
            /** Represents the type of Run Item */
            public: enum Type
            {
                TypeFrom/** A "From" item type.  */,
                TypeTo/** A "To" item type     */,
                TypeMember/** A "Member" item type */
            };

            private: RunItemImpl * m_runitem_impl;
            /// \cond NX_NO_DOC 
            public: explicit RunItem(void *ptr);
            /// \endcond 
            /**Returns  the unique reference identifier for this Run Item. 
             <br>  Created in NX7.5.4.  <br>  
             <br> License requirements : None */
            public: NXString ReferenceId
            (
            );
            /**Sets  the unique reference identifier for this Run Item. 
             <br>  Created in NX7.5.4.  <br>  
             <br> License requirements : None */
            public: void SetReferenceId
            (
                const NXString & referenceId /** Unique reference identifier of this Run Item */
            );
            /**Sets  the unique reference identifier for this Run Item. 
             <br>  Created in NX7.5.4.  <br>  
             <br> License requirements : None */
            void SetReferenceId
            (
                const char * referenceId /** Unique reference identifier of this Run Item */
            );
            /**Returns  the Run Item type such as "From", "To", or "Member" item. 
             <br>  Created in NX7.5.4.  <br>  
             <br> License requirements : None */
            public: NXOpen::Routing::RunItem::Type ItemType
            (
            );
            /**Sets  the Run Item type such as "From", "To", or "Member" item. 
             <br>  Created in NX7.5.4.  <br>  
             <br> License requirements : None */
            public: void SetItemType
            (
                NXOpen::Routing::RunItem::Type itemType /** Run Item type */
            );
            /**Returns  the attributes on the Run Item. 
             <br>  Created in NX7.5.4.  <br>  
             <br> License requirements : None */
            public: NXOpen::Routing::CharacteristicList * Attributes
            (
            );
            /**Sets  the attributes on the Run Item. 
             <br>  Created in NX7.5.4.  <br>  
             <br> License requirements : None */
            public: void SetAttributes
            (
                NXOpen::Routing::CharacteristicList * attributes /** Run Item attributes */
            );
            /** Free resources associated with this instance of Run Item class.
                    After calling this method, it is illegal to use the object.  In .NET,
                    this method is automatically called when the object is deleted by the
                    garbage collector. 
             <br>  Created in NX7.5.4.  <br>  
             <br> License requirements : None */
            public: virtual ~RunItem();
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
