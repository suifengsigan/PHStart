#ifndef NXOpen_COLLABORATIVECONTENTMANAGER_HXX_INCLUDED
#define NXOpen_COLLABORATIVECONTENTMANAGER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CollaborativeContentManager.ja
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
#include <NXOpen/Assemblies_DesignElementBuilder.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class CollaborativeContentManager;
    class Session;
    namespace Assemblies
    {
        class DesignElementBuilder;
    }
    class CollaborativeDesignCollection;
    class Part;
    class CollaborativeContentManagerImpl;
    /**
        Represents the manager for the various collaborative design contents and this class is usable only when NX is running in managed mode.
        An instance of this class can be obtained from the @link Session Session@endlink . 
     <br> To obtain an instance of this class, refer to @link Session Session@endlink  <br> 
     <br>  Created in NX8.5.0.  <br>  
    */
    class NXOPENCPPEXPORT  CollaborativeContentManager
    {
        private: CollaborativeContentManagerImpl * m_collaborativecontentmanager_impl;
        private: NXOpen::Session* m_owner;
        /// \cond NX_NO_DOC 
        public: explicit CollaborativeContentManager(NXOpen::Session *owner);


        /// \endcond 
        public: 
        /**Returns the tag of this object.  */
        tag_t Tag() const; 
        public: ~CollaborativeContentManager();
        /** Creates a @link Assemblies::DesignElementBuilder Assemblies::DesignElementBuilder@endlink  for creating or revising design elements   @return  
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : nx_4gd_integration ("4th Generation Design") */
        public: NXOpen::Assemblies::DesignElementBuilder * CreateDesignElementBuilder
        (
            NXOpen::Part * workset /** workset */ ,
            NXOpen::Assemblies::DesignElementBuilder::OperationType operation /** operation */ 
        );


        /** Returns the @link CollaborativeDesignCollection CollaborativeDesignCollection@endlink  belonging to the CollaborativeContentManager. 
         <br>  Created in NX8.5.0.  <br>  
        */
        public: NXOpen::CollaborativeDesignCollection *CollaborativeDesigns();
    }; //lint !e1712 default constructor not defined for class  

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