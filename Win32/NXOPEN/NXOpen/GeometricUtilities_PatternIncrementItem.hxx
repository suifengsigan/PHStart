#ifndef NXOpen_GEOMETRICUTILITIES_PATTERNINCREMENTITEM_HXX_INCLUDED
#define NXOpen_GEOMETRICUTILITIES_PATTERNINCREMENTITEM_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricUtilities_PatternIncrementItem.ja
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
#include <NXOpen/Expression.hxx>
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/GeometricUtilities_PatternIncrementItem.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_geometricutilities_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace GeometricUtilities
    {
        class PatternIncrementItem;
    }
    class Expression;
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    namespace GeometricUtilities
    {
        class _PatternIncrementItemBuilder;
        class PatternIncrementItemImpl;
        /** variational for one master expression of the input object(s) being patterned.  <br> To create a new instance of this class, use @link GeometricUtilities::PatternIncrementsList::CreatePatternIncrementItem GeometricUtilities::PatternIncrementsList::CreatePatternIncrementItem@endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICUTILITIESEXPORT  PatternIncrementItem : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            /** increment operation option. */
            public: enum OperationEnum
            {
                OperationEnumAdd/** add the increment to the master value. */,
                OperationEnumMultiply/** multiply the increment to the master value. */
            };

            private: PatternIncrementItemImpl * m_patternincrementitem_impl;
            private: friend class  _PatternIncrementItemBuilder;
            protected: PatternIncrementItem();
            public: ~PatternIncrementItem();
            /**Returns  the master expression 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * MasterExpression
            (
            );
            /**Returns  the increment or variation to be applied to master expression 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * IncrementExpression
            (
            );
            /**Returns  the increment operation 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::PatternIncrementItem::OperationEnum Operation
            (
            );
            /**Sets  the increment operation 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetOperation
            (
                NXOpen::GeometricUtilities::PatternIncrementItem::OperationEnum operation /** operation */ 
            );
            /** Validate whether the inputs to the component are sufficient for 
                        commit to be called.  If the component is not in a state to commit
                        then an exception is thrown.  For example, if the component requires
                        you to set some property, this method will throw an exception if
                        you haven't set it.  This method throws a not-yet-implemented
                        NXException for some components.
                     @return  Was self validation successful 
             <br>  Created in NX3.0.1.  <br>  
             <br> License requirements : None */
            public: virtual bool Validate
            (
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
