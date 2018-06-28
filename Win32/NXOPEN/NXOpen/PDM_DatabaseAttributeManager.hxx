#ifndef NXOpen_PDM_DATABASEATTRIBUTEMANAGER_HXX_INCLUDED
#define NXOpen_PDM_DATABASEATTRIBUTEMANAGER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     PDM_DatabaseAttributeManager.ja
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
#include <NXOpen/PDM_DatabaseAttributeManager.hxx>
#include <NXOpen/TransientObject.hxx>
#include <NXOpen/libnxopencpp_pdm_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace PDM
    {
        class DatabaseAttributeManager;
    }
    namespace PDM
    {
        class DatabaseAttributeManagerImpl;
        /** This class is responsible for setting and getting NX Manager database attribute.  <br> Use @link PDM::PartBuilder::NewDatabaseAttributeManager PDM::PartBuilder::NewDatabaseAttributeManager@endlink  or @link PDM::PdmPart::NewDatabaseAttributeManager PDM::PdmPart::NewDatabaseAttributeManager@endlink  to get the instance of this class. <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_PDMEXPORT  DatabaseAttributeManager : public TransientObject
        {
            private: DatabaseAttributeManagerImpl * m_databaseattributemanager_impl;
            /// \cond NX_NO_DOC 
            public: explicit DatabaseAttributeManager(void *ptr);
            /// \endcond 
            /** Free resources associated with the instance. After this method
                    is called, it is illegal to use the object.  In .NET, this method
                    is automatically called when the object is deleted by the garbage
                    collector. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~DatabaseAttributeManager();
            /** Sets the value of a writable database attribute. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAttribute
            (
                const NXString & attributeTitle /** the title of the attribute to be set */,
                const NXString & attributeValue /** the new value the attribute is to be set to */
            );
            /** Sets the value of a writable database attribute. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void SetAttribute
            (
                const char * attributeTitle /** the title of the attribute to be set */,
                const char * attributeValue /** the new value the attribute is to be set to */
            );
            /** Gets the value of a writable database attribute.  @return  the value of the attribute 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXString GetAttribute
            (
                const NXString & attributeTitle /** the title of the attribute */
            );
            /** Gets the value of a writable database attribute.  @return  the value of the attribute 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            NXString GetAttribute
            (
                const char * attributeTitle /** the title of the attribute */
            );
            /** Register DB_PART_NAME and DB_PART_DESC attributes with values set in the attribute_manager 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void StoreAttributes
            (
            );
            /** Force load the Database Attributes from Teamcenter. This removes changes to values made in NX. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void RefreshAttributes
            (
            );
            /** Load the Database Attributes from Teamcenter.
                    This operation will not discard any changes made in this session that aren't committed to Teamcenter.
                    If 'reload' is set to 'true', attributes that have already been loaded will be loaded again, if otherwise allowed.
                     
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void LoadAttributes
            (
                bool reload /** Reload attributes that have already been loaded, if otherwise allowed. */
            );
            /** Recursively load the Database Attributes of this part and all its partially or fully loaded components from Teamcenter. 
                    This operation will not discard any changes made in this session that aren't committed to Teamcenter.
                     
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: void LoadAttributesRecursively
            (
                bool reload /** Reload attributes that have already been loaded, if otherwise allowed. */
            );
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
