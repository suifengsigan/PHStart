#ifndef NXOpen_OMATTRIBUTE_HXX_INCLUDED
#define NXOpen_OMATTRIBUTE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     OMAttribute.ja
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
#include <NXOpen/IOMName.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopenjamtestcpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class OMAttribute;
    class IOMName;
    class OMClass;
    class OMSchema;
    class _OMAttributeBuilder;
    class OMAttributeImpl;
    /**
    Represents a OMAttribute.  This is for internal testing only.
     <br> This class is for internal testing only. <br> 
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENJAMTESTCPPEXPORT  OMAttribute : public TaggedObject, public virtual IOMName
    {
        /** For internal testing */
        public: enum Type
        {
            TypeInt/** For internal testing */,
            TypeTag/** For internal testing */
        };

         /** For internal testing */
        public:
        struct  Info
        {
            public: /** name */ NXString Name;
            public: /** defining class */ NXOpen::OMClass * DefiningClass;
            public: /** defining schema */ NXOpen::OMSchema * DefiningSchema;
            public: /** type */ NXOpen::OMAttribute::Type Type;
            public: Info() :
                Name(),
                DefiningClass(),
                DefiningSchema(),
                Type((NXOpen::OMAttribute::Type)0)
            {
            }
            /** Constructor for the Info struct. */ 
            public: Info(const NXString &nameInitial /** name */ , 
                    NXOpen::OMClass * definingClassInitial /** defining class */ , 
                    NXOpen::OMSchema * definingSchemaInitial /** defining schema */ , 
                    NXOpen::OMAttribute::Type typeInitial /** type */ ) :
                Name(nameInitial),
                DefiningClass(definingClassInitial),
                DefiningSchema(definingSchemaInitial),
                Type(typeInitial)
            {
            }
        };

        private: OMAttributeImpl * m_omattribute_impl;
        private: friend class  _OMAttributeBuilder;
        protected: OMAttribute();
        public: ~OMAttribute();
        /** Returns the info   @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::OMAttribute::Info GetInfo
        (
        );
        /** Returns the object name  @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: virtual NXString GetObjectName
        (
        );
        /** Compare with  @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: virtual bool CompareWith
        (
            NXOpen::IOMName * other /** other */ 
        );
    };
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
