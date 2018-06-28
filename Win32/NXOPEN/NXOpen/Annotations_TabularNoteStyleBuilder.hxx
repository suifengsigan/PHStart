#ifndef NXOpen_ANNOTATIONS_TABULARNOTESTYLEBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_TABULARNOTESTYLEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_TabularNoteStyleBuilder.ja
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
#include <NXOpen/Annotations_TabularNoteStyleBuilder.hxx>
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/TaggedObject.hxx>
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
        class TabularNoteStyleBuilder;
    }
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    namespace Annotations
    {
        class _TabularNoteStyleBuilderBuilder;
        class TabularNoteStyleBuilderImpl;
        /**
            Represents a @link Annotations::TabularNoteStyleBuilder Annotations::TabularNoteStyleBuilder@endlink .
            
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  TabularNoteStyleBuilder : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            /** the valid locked deleted row methods */
            public: enum ShowLockedDeletedRowMethod
            {
                ShowLockedDeletedRowMethodStrikethru/** Strike thru */,
                ShowLockedDeletedRowMethodBlank/** Blank */,
                ShowLockedDeletedRowMethodRemove/** Remove */,
                ShowLockedDeletedRowMethodOrdinary/** Ordinary */
            };

            private: TabularNoteStyleBuilderImpl * m_tabularnotestylebuilder_impl;
            private: friend class  _TabularNoteStyleBuilderBuilder;
            protected: TabularNoteStyleBuilder();
            public: ~TabularNoteStyleBuilder();
            /**Returns  the lock table format 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool LockTableFormat
            (
            );
            /**Sets  the lock table format 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") OR drafting ("DRAFTING") */
            public: void SetLockTableFormat
            (
                bool lockedTableFormat /** lockedtableformat */ 
            );
            /**Returns  the lock table contents 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool LockTableContents
            (
            );
            /**Sets  the lock table contents 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") OR drafting ("DRAFTING") */
            public: void SetLockTableContents
            (
                bool lockedTableContents /** lockedtablecontents */ 
            );
            /**Returns  the locked deleted row method 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::TabularNoteStyleBuilder::ShowLockedDeletedRowMethod ShowLockedDeletedContent
            (
            );
            /**Sets  the locked deleted row method 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") OR drafting ("DRAFTING") */
            public: void SetShowLockedDeletedContent
            (
                NXOpen::Annotations::TabularNoteStyleBuilder::ShowLockedDeletedRowMethod showLockedDeletedContent /** showlockeddeletedcontent */ 
            );
            /**Returns  the automatic update 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: bool AutomaticUpdate
            (
            );
            /**Sets  the automatic update 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : geometric_tol ("GDT") OR drafting ("DRAFTING") */
            public: void SetAutomaticUpdate
            (
                bool automaticUpdate /** automaticupdate */ 
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
