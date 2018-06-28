#ifndef NXOpen_GEOMETRICUTILITIES_PATTERNINCREMENTSLIST_HXX_INCLUDED
#define NXOpen_GEOMETRICUTILITIES_PATTERNINCREMENTSLIST_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricUtilities_PatternIncrementsList.ja
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
#include <NXOpen/GeometricUtilities_PatternIncrementsList.hxx>
#include <NXOpen/ObjectList.hxx>
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
        class PatternIncrementsList;
    }
    class Expression;
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    namespace GeometricUtilities
    {
        class PatternIncrementItem;
    }
    namespace GeometricUtilities
    {
        class PatternIncrementItemList;
    }
    namespace GeometricUtilities
    {
        class _PatternIncrementsListBuilder;
        class PatternIncrementsListImpl;
        /** list of @link GeometricUtilities::PatternIncrementItem GeometricUtilities::PatternIncrementItem@endlink  objects. 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICUTILITIESEXPORT  PatternIncrementsList : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            private: PatternIncrementsListImpl * m_patternincrementslist_impl;
            private: friend class  _PatternIncrementsListBuilder;
            protected: PatternIncrementsList();
            public: ~PatternIncrementsList();
            /**Returns  the list of @link GeometricUtilities::PatternIncrementItem GeometricUtilities::PatternIncrementItem@endlink  objects. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::PatternIncrementItemList * List
            (
            );
            /** This is the default creator for @link GeometricUtilities::PatternIncrementItem GeometricUtilities::PatternIncrementItem@endlink .
                        Caution: This should never be called!  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::PatternIncrementItem * CreatePatternIncrementItem
            (
            );
            /** This is the actual creator for @link GeometricUtilities::PatternIncrementItem GeometricUtilities::PatternIncrementItem@endlink .  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::PatternIncrementItem * CreatePatternIncrementItem
            (
                NXOpen::Expression * masterExpression /** the master expression */
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
