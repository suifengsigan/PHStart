#ifndef NXOpen_VALIDATE_RESULTOBJECT_HXX_INCLUDED
#define NXOpen_VALIDATE_RESULTOBJECT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Validate_ResultObject.ja
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
#include <NXOpen/NXObject.hxx>
#include <NXOpen/Validate_OverrideBuilder.hxx>
#include <NXOpen/Validation.hxx>
#include <NXOpen/libnxopencpp_validate_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Validate
    {
        class ResultObject;
    }
    class NXObject;
    namespace Validate
    {
        class Override;
    }
    namespace Validate
    {
        class OverrideBuilder;
    }
    namespace Validate
    {
        class _ResultObjectBuilder;
        class ResultObjectImpl;
        /** @brief  Represents a check-mate result object.  

         
            
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_VALIDATEEXPORT  ResultObject : public NXObject
        {
            /** The type of check result */
            public: enum ResultTypes
            {
                ResultTypesPart/** Part */,
                ResultTypesProfile/** Profile */,
                ResultTypesTest/** Test */,
                ResultTypesObject/** Object */,
                ResultTypesObjectSet/** Object Set */
            };

            private: ResultObjectImpl * m_resultobject_impl;
            private: friend class  _ResultObjectBuilder;
            protected: ResultObject();
            public: ~ResultObject();
            /**Returns  the type of check result 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Validate::ResultObject::ResultTypes Type
            (
            );
            /**Sets  the type of check result 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetType
            (
                NXOpen::Validate::ResultObject::ResultTypes type /** The result type */
            );
            /**Returns  the error status of check result 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Validation::Result Status
            (
            );
            /**Sets  the error status of check result 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetStatus
            (
                NXOpen::Validation::Result status /** The error level */
            );
            /**Returns  the name of check result 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXString Name
            (
            );
            /**Sets  the name of check result 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetName
            (
                const NXString & name /** The name of check result */
            );
            /**Sets  the name of check result 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            void SetName
            (
                const char * name /** The name of check result */
            );
            /**Returns  the out of date status of check result.
                    Returns error code if part is unloaded. Result of unloaded part is assumed up to date. The program may not be able to detect the modifications in the part.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool OutOfDate
            (
            );
            /** Creates a @link Validate::OverrideBuilder Validate::OverrideBuilder@endlink   @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_checkmate ("UG Check Mate") */
            public: NXOpen::Validate::OverrideBuilder * CreateOverrideBuilder
            (
                NXOpen::Validate::Override * overrideRequest /** override request */ 
            );
            /** Deletes user override request @link Validate::Override Validate::Override@endlink . 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_checkmate ("UG Check Mate") */
            public: void DeleteOverride
            (
            );
            /**Returns  the override request object of check result 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Validate::Override * Override
            (
            );
            /**Returns  the total objects count of check result.
                        Return zero if the ResultObject has no this property.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: int TotalObjectsCount
            (
            );
            /**Returns  the disabled status of check result. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: bool Disabled
            (
            );
            /**Returns  the class name of check result.
                        Return empty if the ResultObject has no this property.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString ClassName
            (
            );
            /**Returns  the category name of check result.
                        Return empty if the ResultObject has no this property.
                    
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXString CategoryName
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
