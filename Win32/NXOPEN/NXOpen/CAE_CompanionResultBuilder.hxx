#ifndef NXOpen_CAE_COMPANIONRESULTBUILDER_HXX_INCLUDED
#define NXOpen_CAE_COMPANIONRESULTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_CompanionResultBuilder.ja
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
#include <NXOpen/CAE_CompanionResult.hxx>
#include <NXOpen/CAE_CompanionResultBuilder.hxx>
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
        class CompanionResultBuilder;
    }
    class Builder;
    namespace CAE
    {
        class CompanionResult;
    }
    namespace CAE
    {
        class _CompanionResultBuilderBuilder;
        class CompanionResultBuilderImpl;
        /** Represents a @link CAE::CompanionResult CAE::CompanionResult@endlink  builder and can 
                be used to create or edit an @link CAE::CompanionResult CAE::CompanionResult@endlink   <br> To create a new instance of this class, use @link CAE::CompanionResultCollection::CreateCompanionResultBuilder CAE::CompanionResultCollection::CreateCompanionResultBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        AppendMethod </td> <td> 
         
        CreateNewLoadCases </td> </tr> 

        <tr><td> 
         
        Disposition </td> <td> 
         
        Delete </td> </tr> 

        </table>  

         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  CompanionResultBuilder : public Builder
        {
            /** Companion results appending method which indicates how Companion results will be appended to the existing primary results.
                      */
            public: enum ResultAppendMethod
            {
                ResultAppendMethodCreateNewLoadCases/** Companion results will be created in new separate load cases  */,
                ResultAppendMethodMergeWithPrimaryResultsData/** Companion results will be merged with existing load cases if possible, else new load cases will be created */
            };

            /** Companion result disposition indicates how the Companion result will be disposed of when primary result is deleted.
                      */
            public: enum CompanionResultDisposition
            {
                CompanionResultDispositionDelete/** Companion Result Object will be deleted when primary results are deleted */,
                CompanionResultDispositionKeep/** The Companion Result Object will be keep when primary results are deleted so that when the primary results are later regenerated these companion results will again be available. */
            };

            private: CompanionResultBuilderImpl * m_companionresultbuilder_impl;
            private: friend class  _CompanionResultBuilderBuilder;
            protected: CompanionResultBuilder();
            public: ~CompanionResultBuilder();
            /**Returns  the companion results file name. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString CompanionResultsFile
            (
            );
            /**Sets  the companion results file name. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetCompanionResultsFile
            (
                const NXString & filename /** filename */ 
            );
            /**Sets  the companion results file name. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            void SetCompanionResultsFile
            (
                const char * filename /** filename */ 
            );
            /**Returns  the name given to this Solutions Companion Result object.  Used for user display 
                        and identification purposes.
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString Name
            (
            );
            /**Sets  the name given to this Solutions Companion Result object.  Used for user display 
                        and identification purposes.
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetName
            (
                const NXString & name /** name */ 
            );
            /**Sets  the name given to this Solutions Companion Result object.  Used for user display 
                        and identification purposes.
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            void SetName
            (
                const char * name /** name */ 
            );
            /**Returns  the append method indicate how the companion results data will be presented 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::CompanionResultBuilder::ResultAppendMethod AppendMethod
            (
            );
            /**Sets  the append method indicate how the companion results data will be presented 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetAppendMethod
            (
                NXOpen::CAE::CompanionResultBuilder::ResultAppendMethod appendMethod /** appendmethod */ 
            );
            /**Returns  the file disposition  attribute indicates how the companion result file will be disposed of when the primary results are gone.
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAE::CompanionResultBuilder::CompanionResultDisposition Disposition
            (
            );
            /**Sets  the file disposition  attribute indicates how the companion result file will be disposed of when the primary results are gone.
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetDisposition
            (
                NXOpen::CAE::CompanionResultBuilder::CompanionResultDisposition disposition /** disposition */ 
            );
            /** Commits any edits that have been applied to the builder, This method must be used instead of commit 
                        if you want to get the @link CAE::CompanionResult CAE::CompanionResult@endlink  returned. This is because the  
                        @link CAE::CompanionResult CAE::CompanionResult@endlink  is not an @link NXObject NXObject@endlink  which is returned 
                        by the standard builder  @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::CompanionResult * CommitResult
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
