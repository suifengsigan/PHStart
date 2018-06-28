#ifndef NXOpen_FEATUREGENERALPROPERTIESBUILDER_HXX_INCLUDED
#define NXOpen_FEATUREGENERALPROPERTIESBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     FeatureGeneralPropertiesBuilder.ja
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
#include <NXOpen/FeatureGeneralPropertiesBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/ugmath.hxx>
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
    class FeatureGeneralPropertiesBuilder;
    class Builder;
    class NXObject;
    class SelectNXObjectList;
    class _FeatureGeneralPropertiesBuilderBuilder;
    class FeatureGeneralPropertiesBuilderImpl;
    /**
        Represents a @link FeatureGeneralPropertiesBuilder FeatureGeneralPropertiesBuilder@endlink  to be used for modifying
        the names of features and general objects.  
         <br> To create a new instance of this class, use @link PropertiesManager::CreateFeatureGeneralPropertiesBuilder PropertiesManager::CreateFeatureGeneralPropertiesBuilder@endlink  <br> 
     <br>  Created in NX8.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  FeatureGeneralPropertiesBuilder : public Builder
    {
        private: FeatureGeneralPropertiesBuilderImpl * m_featuregeneralpropertiesbuilder_impl;
        private: friend class  _FeatureGeneralPropertiesBuilderBuilder;
        protected: FeatureGeneralPropertiesBuilder();
        public: ~FeatureGeneralPropertiesBuilder();
        /**Returns  the selected object(s) list.  This list should only contain one object 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::SelectNXObjectList * SelectedObjects
        (
        );
        /**Returns  the general object.  This is the general object to be modified. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::NXObject * GeneralObject
        (
        );
        /**Sets  the general object.  This is the general object to be modified. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetGeneralObject
        (
            NXOpen::NXObject * generalObject /** generalobject */ 
        );
        /**Returns  the general name.  This is the new name of the general object. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXString GeneralName
        (
        );
        /**Sets  the general name.  This is the new name of the general object. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetGeneralName
        (
            const NXString & generalName /** generalname */ 
        );
        /**Sets  the general name.  This is the new name of the general object. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        void SetGeneralName
        (
            const char * generalName /** generalname */ 
        );
        /** Delete the name of the general object. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void DeleteGeneralName
        (
        );
        /**Returns  the feature.  This is the feature object to be modified. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::NXObject * FeatureObject
        (
        );
        /**Sets  the feature.  This is the feature object to be modified. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetFeatureObject
        (
            NXOpen::NXObject * featureObject /** featureobject */ 
        );
        /**Returns  the feature name.  This is the new name of the feature. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXString FeatureName
        (
        );
        /**Sets  the feature name.  This is the new name of the feature. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetFeatureName
        (
            const NXString & featureName /** featurename */ 
        );
        /**Sets  the feature name.  This is the new name of the feature. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        void SetFeatureName
        (
            const char * featureName /** featurename */ 
        );
        /** Delete the name of the feature. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void DeleteFeatureName
        (
        );
        /**Returns  the name location specified.  This states whether the name location will be changed. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: bool NameLocationSpecified
        (
        );
        /**Sets  the name location specified.  This states whether the name location will be changed. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetNameLocationSpecified
        (
            bool nameLocationSpecified /** namelocationspecified */ 
        );
        /** Gets the name location  @return  
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Point3d GetNameLocation
        (
        );
        /** Sets the name location.  If name location specified is true, this value will be used
                    to change the name location of the general object. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetNameLocation
        (
            const NXOpen::Point3d & nameLocation /** the name location */
        );
        /**Returns  the option to apply the name change to the work part. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: bool ApplyToWorkPart
        (
        );
        /**Sets  the option to apply the name change to the work part. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void SetApplyToWorkPart
        (
            bool applyToWorkPart /** applytoworkpart */ 
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
