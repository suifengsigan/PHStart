#ifndef NXOpen_FEATURES_USERDEFINEDFEATUREAPPLICATIONDATA_HXX_INCLUDED
#define NXOpen_FEATURES_USERDEFINEDFEATUREAPPLICATIONDATA_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_UserDefinedFeatureApplicationData.ja
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
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        class UserDefinedFeatureApplicationData;
    }
    namespace Features
    {
        class UserDefinedFeatureApplicationField;
    }
    namespace Features
    {
        class _UserDefinedFeatureApplicationDataBuilder;
        class UserDefinedFeatureApplicationDataImpl;
        /** JA interface for UserDefinedFeatureApplicationData object 
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  UserDefinedFeatureApplicationData : public TaggedObject
        {
            private: UserDefinedFeatureApplicationDataImpl * m_userdefinedfeatureapplicationdata_impl;
            private: friend class  _UserDefinedFeatureApplicationDataBuilder;
            protected: UserDefinedFeatureApplicationData();
            public: ~UserDefinedFeatureApplicationData();
            /** Gets all of the fields  @return  Array of fields 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::Features::UserDefinedFeatureApplicationField *> GetFields
            (
            );
            /** Adds named field. Returns existing field if one exists.  @return  the field 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::UserDefinedFeatureApplicationField * AddField
            (
                const NXString & name /** name of the field   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Adds named field. Returns existing field if one exists.  @return  the field 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            NXOpen::Features::UserDefinedFeatureApplicationField * AddField
            (
                const char * name /** name of the field   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Gets named field. Creates field if it doesnt exist.  @return  the field 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::UserDefinedFeatureApplicationField * GetField
            (
                const NXString & name /** name of the field   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Gets named field. Creates field if it doesnt exist.  @return  the field 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            NXOpen::Features::UserDefinedFeatureApplicationField * GetField
            (
                const char * name /** name of the field   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Removes named field. This removes the field and deletes it. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void RemoveField
            (
                NXOpen::Features::UserDefinedFeatureApplicationField * field /** the field */
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
