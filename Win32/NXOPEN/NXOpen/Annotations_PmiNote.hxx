#ifndef NXOpen_ANNOTATIONS_PMINOTE_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_PMINOTE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_PmiNote.ja
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
#include <NXOpen/Annotations_BaseNote.hxx>
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
        class PmiNote;
    }
    namespace Annotations
    {
        class BaseNote;
    }
    namespace Annotations
    {
        class _PmiNoteBuilder;
        class PmiNoteImpl;
        /** Represents a PMI note  <br> To create or edit an instance of this class, use @link Annotations::PmiNoteBuilder Annotations::PmiNoteBuilder@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  PmiNote : public Annotations::BaseNote
        {
            private: PmiNoteImpl * m_pminote_impl;
            private: friend class  _PmiNoteBuilder;
            protected: PmiNote();
            public: ~PmiNote();
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
