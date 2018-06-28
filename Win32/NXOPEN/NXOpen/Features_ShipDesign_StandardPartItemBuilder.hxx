#ifndef NXOpen_FEATURES_SHIPDESIGN_STANDARDPARTITEMBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_STANDARDPARTITEMBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_StandardPartItemBuilder.ja
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
#include <NXOpen/Features_ShipDesign_StandardPartItemBuilder.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/SelectObject.hxx>
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
        namespace ShipDesign
        {
            class StandardPartItemBuilder;
        }
    }
    class Builder;
    class DisplayableObject;
    class ScCollector;
    class SelectDisplayableObject;
    namespace Features
    {
        namespace ShipDesign
        {
            class _StandardPartItemBuilderBuilder;
            class StandardPartItemBuilderImpl;
            /**  Represents the ship standard part item builder.  <br> This class cannot be directly instantiated and has to be created by CreateStandardPartItem. <br> 
             <br>  Created in NX8.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  StandardPartItemBuilder : public Builder
            {
                /** Represents the ship standard part installation direction and thickness direction. */
                public: enum Direction
                {
                    DirectionFore/** fore  */,
                    DirectionAft/** aft  */,
                    DirectionUp/** up  */,
                    DirectionDown/** down  */,
                    DirectionPort/** port  */,
                    DirectionStarboard/** starboard */,
                    DirectionIn/** in  */,
                    DirectionOut/** out  */,
                    DirectionCenter/** center  */
                };

                private: StandardPartItemBuilderImpl * m_standardpartitembuilder_impl;
                private: friend class  _StandardPartItemBuilderBuilder;
                protected: StandardPartItemBuilder();
                public: ~StandardPartItemBuilder();
                /**Returns  the first chain selected object. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::ScCollector * FirstChainObject
                (
                );
                /**Returns  the second chain selected object. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::ScCollector * SecondChainObject
                (
                );
                /**Returns  the first selected object. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectDisplayableObject * FirstObject
                (
                );
                /**Returns  the second selected object. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectDisplayableObject * SecondObject
                (
                );
                /**Returns  the third selected object. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectDisplayableObject * ThirdObject
                (
                );
                /**Returns  the fourth selected object. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectDisplayableObject * FourthObject
                (
                );
                /**Returns  the fifth selected object. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectDisplayableObject * FifthObject
                (
                );
                /**Returns  the first selected plane. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectDisplayableObject * FirstPlane
                (
                );
                /**Returns  the second selected plane.
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectDisplayableObject * SecondPlane
                (
                );
                /** 
                            Updates and relinks the external references. bToUpdateGeometry is used to decide if the input 
                            geometries need to be recalculated.
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void UpdateReferences
                (
                    bool bToUpdateGeometry /** btoupdategeometry */ 
                );
                /** 
                            Checks the registration context string when an object is selected. 
                             @return  
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: NXString LookupRegistration
                (
                );
                /** 
                            Sets one geometry for input selection which has multiple options. Multiple options could come from 
                            selection configuration setting, or several geometries with the same attributes.
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetOptionalGeometry
                (
                    NXOpen::DisplayableObject * selectedGeometry /** selectedgeometry */ 
                );
                /** 
                            Checks the scallop size by enabling the predefined requirement check inside the standard part,
                            and resets to original state afterwards. If there is no vialation of the requirement, 
                            nothing will happen.
                             @return  
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: bool CheckScallopSize
                (
                );
                /** 
                            Resets the standard part item builder to its intial state. 
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void ResetItem
                (
                );
                /** 
                            Sets the transition geometry given the index.
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetTransitionGeometry
                (
                    int index /** index */ ,
                    NXOpen::DisplayableObject * transitionGeometry /** transitiongeometry */ 
                );
                /**Returns  
                            the flag to indicate whether to flip the direction of the first selected object or not. 
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::StandardPartItemBuilder::Direction InstallFirstDirection
                (
                );
                /**Sets  
                            the flag to indicate whether to flip the direction of the first selected object or not. 
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetInstallFirstDirection
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder::Direction firstDirectionInstall /** firstdirectioninstall */ 
                );
                /**Returns  
                            the flag to indicate whether to flip the direction of the second selected object or not. 
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::StandardPartItemBuilder::Direction InstallSecondDirection
                (
                );
                /**Sets  
                            the flag to indicate whether to flip the direction of the second selected object or not. 
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetInstallSecondDirection
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder::Direction secondDirectionInstall /** seconddirectioninstall */ 
                );
                /**Returns  
                            the flag to indicate whether to flip the direction of the third selected object or not. 
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::StandardPartItemBuilder::Direction InstallThirdDirection
                (
                );
                /**Sets  
                            the flag to indicate whether to flip the direction of the third selected object or not. 
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetInstallThirdDirection
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder::Direction thirdDirectionInstall /** thirddirectioninstall */ 
                );
                /**Returns  
                            the flag to indicate whether to flip the direction of the fourth selected object or not. 
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::StandardPartItemBuilder::Direction InstallFourthDirection
                (
                );
                /**Sets  
                            the flag to indicate whether to flip the direction of the fourth selected object or not. 
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetInstallFourthDirection
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder::Direction fourthDirectionInstall /** fourthdirectioninstall */ 
                );
                /**Returns  
                            the flag to indicate whether to flip the direction of the fifth selected object or not. 
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::StandardPartItemBuilder::Direction InstallFifthDirection
                (
                );
                /**Sets  
                            the flag to indicate whether to flip the direction of the fifth selected object or not. 
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetInstallFifthDirection
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder::Direction fifthDirectionInstall /** fifthdirectioninstall */ 
                );
            };
        }
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
