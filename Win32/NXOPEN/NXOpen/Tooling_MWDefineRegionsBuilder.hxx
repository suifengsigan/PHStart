#ifndef NXOpen_TOOLING_MWDEFINEREGIONSBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_MWDEFINEREGIONSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_MWDefineRegionsBuilder.ja
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
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/Tooling_MWDefineRegionsBuilder.hxx>
#include <NXOpen/libnxopencpp_tooling_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Tooling
    {
        class MWDefineRegionsBuilder;
    }
    class Builder;
    class Face;
    class NXColor;
    class ScCollector;
    class TaggedObject;
    namespace Tooling
    {
        class _MWDefineRegionsBuilderBuilder;
        class MWDefineRegionsBuilderImpl;
        /** The MWDefineRegions builder  <br> To create a new instance of this class, use @link Tooling::MWDefineRegionsCollection::CreateBuilder Tooling::MWDefineRegionsCollection::CreateBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        CreatePartingLinesToggle </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CreateRegionsToggle </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        TranslucencyOption </td> <td> 
         
        SelectedFaces </td> </tr> 

        <tr><td> 
         
        TranslucencyValueScale </td> <td> 
         
        0 </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  MWDefineRegionsBuilder : public Builder
        {
            /** This enum represents the translucency is to be performed on the selected or non-selected region faces */
            public: enum TranslucencyOptionType
            {
                TranslucencyOptionTypeSelectedFaces/** Selected region faces */,
                TranslucencyOptionTypeOtherFaces/** Non-selected region faces */
            };

            private: MWDefineRegionsBuilderImpl * m_mwdefineregionsbuilder_impl;
            private: friend class  _MWDefineRegionsBuilderBuilder;
            protected: MWDefineRegionsBuilder();
            public: ~MWDefineRegionsBuilder();
            /** Button to create a new empty region 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void CreateNewRegionButton
            (
            );
            /**Returns  the region faces for defining region 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::ScCollector * SelectRegionFaces
            (
            );
            /** Button to invoke searching region 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SearchRegionButton
            (
            );
            /**Returns  the create regions toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool CreateRegionsToggle
            (
            );
            /**Sets  the create regions toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetCreateRegionsToggle
            (
                bool createRegionsToggle /** createregionstoggle */ 
            );
            /**Returns  the create parting lines toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool CreatePartingLinesToggle
            (
            );
            /**Sets  the create parting lines toggle 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetCreatePartingLinesToggle
            (
                bool createPartingLinesToggle /** createpartinglinestoggle */ 
            );
            /**Returns  the face color for the selected region faces 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXColor * FaceColor
            (
            );
            /**Sets  the face color for the selected region faces 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFaceColor
            (
                NXOpen::NXColor * faceColor /** facecolor */ 
            );
            /**Returns  the translucency option for the selected or non-selected region faces 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::MWDefineRegionsBuilder::TranslucencyOptionType TranslucencyOption
            (
            );
            /**Sets  the translucency option for the selected or non-selected region faces 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTranslucencyOption
            (
                NXOpen::Tooling::MWDefineRegionsBuilder::TranslucencyOptionType translucencyOption /** translucencyoption */ 
            );
            /**Returns  the translucency value for the selected or non-selected region faces 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int TranslucencyValueScale
            (
            );
            /**Sets  the translucency value for the selected or non-selected region faces 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTranslucencyValueScale
            (
                int translucencyValueScale /** translucencyvaluescale */ 
            );
            /** Setup the UI data for defining regions 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: void SetupRegionsInfo
            (
            );
            /** Display the product body in the part file 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: void DisplayProductBody
            (
            );
            /** Create a new region  @return  new region object created 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: NXString CreateNewRegion
            (
            );
            /** Get or create an empty region  @return  empty region object 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: NXString GetOrCreateEmptyRegion
            (
                int* created /** Return flag indicating if an empty region UDO is created */
            );
            /** Delete a region 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: void DeleteRegion
            (
                const NXString & regionName /** region object to be deleted */
            );
            /** Delete a region 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            void DeleteRegion
            (
                const char * regionName /** region object to be deleted */
            );
            /** Set the current region 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: void SetCurrentRegion
            (
                const NXString & regionName /** current region name */
            );
            /** Set the current region 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            void SetCurrentRegion
            (
                const char * regionName /** current region name */
            );
            /** Change the region name for the current region  @return  return status 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: int ChangeCurrentRegionName
            (
                const NXString & regionName /** region name */
            );
            /** Change the region name for the current region  @return  return status 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            int ChangeCurrentRegionName
            (
                const char * regionName /** region name */
            );
            /** Change the color of the faces of a region 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: void ChangeRegionFacesColor
            (
                const NXString & regionName /** region name */,
                int allOrUndefined /** 1: All faces, 2: Undefined faces when regionUDO is 0 */,
                int color /** color for region faces */
            );
            /** Change the color of the faces of a region 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            void ChangeRegionFacesColor
            (
                const char * regionName /** region name */,
                int allOrUndefined /** 1: All faces, 2: Undefined faces when regionUDO is 0 */,
                int color /** color for region faces */
            );
            /** Change the color of displayable entities 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: void ChangeEntitiesColor
            (
                const std::vector<NXOpen::TaggedObject *> & entities /** an array of entities */,
                int color /** color for entities */
            );
            /** Change the layer of the region 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: void ChangeRegionLayer
            (
                const NXString & regionName /** region name */,
                int layer /** layer for region faces */
            );
            /** Change the layer of the region 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            void ChangeRegionLayer
            (
                const char * regionName /** region name */,
                int layer /** layer for region faces */
            );
            /** Update the undefined faces 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: void UpdateUndefinedFaces
            (
                int changeColor /** indicator for changing color too */
            );
            /** Delete all existing regions 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: void DeleteAllExistingRegions
            (
            );
            /** Update name attribute for the unsew bodies of the cavity and core regions 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: void UpdateUnsewnBodiesNameAttribute
            (
                NXOpen::TaggedObject * unsewFeatureTag /** Unsewn feature object */,
                const std::vector<NXOpen::Face *> & cavityFaces /** an array of cavity faces */
            );
            /** Hook up cavity and core region UDO objects with the corresponding sheet bodies 
             <br>  Created in NX6.0.3.  <br>  
             <br> License requirements : None */
            public: void HookupRegionUdoAndBodyForCavityAndCore
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
