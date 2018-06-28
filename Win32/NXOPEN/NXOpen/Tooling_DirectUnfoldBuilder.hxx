#ifndef NXOpen_TOOLING_DIRECTUNFOLDBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_DIRECTUNFOLDBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_DirectUnfoldBuilder.ja
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
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/Tooling_DirectUnfoldBuilder.hxx>
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
        class DirectUnfoldBuilder;
    }
    namespace Assemblies
    {
        class SelectComponent;
    }
    class Builder;
    class SelectFaceList;
    namespace Tooling
    {
        class _DirectUnfoldBuilderBuilder;
        class DirectUnfoldBuilderImpl;
        /**The builder contains all inputs for direct unfolding. They are:
            name of current design part
            name of bodies in current part
            planar faces for auto-recogniton
            ...
             <br> To create a new instance of this class, use @link Tooling::DirectUnfoldCollection::CreateDirectUnfoldBuilder Tooling::DirectUnfoldCollection::CreateDirectUnfoldBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Angle1 </td> <td> 
         
        30 </td> </tr> 

        <tr><td> 
         
        Angle2 </td> <td> 
         
        30 </td> </tr> 

        <tr><td> 
         
        Angle3 </td> <td> 
         
        30 </td> </tr> 

        <tr><td> 
         
        Angle4 </td> <td> 
         
        30 </td> </tr> 

        <tr><td> 
         
        Angle5 </td> <td> 
         
        30 </td> </tr> 

        <tr><td> 
         
        Angle6 </td> <td> 
         
        30 </td> </tr> 

        <tr><td> 
         
        CurBodies </td> <td> 
         
        None </td> </tr> 

        <tr><td> 
         
        DesignSequence </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        DevLength </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        InterRenameComp </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        Materials </td> <td> 
         
        Steel </td> </tr> 

        <tr><td> 
         
        NumBends </td> <td> 
         
        Two </td> </tr> 

        <tr><td> 
         
        NumInter </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        OrientPitch </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        Pitch </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        StartStation </td> <td> 
         
        2 </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  DirectUnfoldBuilder : public Builder
        {
            /** Specifies the option of direct unfold type */
            public: enum Types
            {
                TypesConvert/** the direct unfold type of convert to Sheet Metal*/,
                TypesMergeBends/** the direct unfold type of merge bends*/,
                TypesDefinePreBends/** the direct unfold type of define pre-bends*/,
                TypesDeleteBends/** the direct unfold type of delete all bends*/
            };

            /** The name list of bodies in current part. It is changed in selecting different part. */
            public: enum BodyList
            {
                BodyListNone/** Default is none. */
            };

            /** The material database defined in PDW. It is added in project initialization. */
            public: enum MatType
            {
                MatTypeSteel/** Default is steel. */
            };

            /** The number of children bends in defining prebend. */
            public: enum Bend
            {
                BendTwo/** two bends */,
                BendThree/** three bends */,
                BendFour/** four bends */,
                BendFive/** five bends */,
                BendSix/** six bends */
            };

            private: DirectUnfoldBuilderImpl * m_directunfoldbuilder_impl;
            private: friend class  _DirectUnfoldBuilderBuilder;
            protected: DirectUnfoldBuilder();
            public: ~DirectUnfoldBuilder();
            /**Returns  the type of direct unfold, the name get_type has been used 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::DirectUnfoldBuilder::Types UnfoldType
            (
            );
            /**Sets  the type of direct unfold, the name get_type has been used 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetUnfoldType
            (
                NXOpen::Tooling::DirectUnfoldBuilder::Types type /** type */ 
            );
            /**Returns  the planar faces selected as the start of automatic recognition. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectFaceList * SelPlanarFaces
            (
            );
            /**Returns  the current body list. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::DirectUnfoldBuilder::BodyList CurBodies
            (
            );
            /**Sets  the current body list. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetCurBodies
            (
                NXOpen::Tooling::DirectUnfoldBuilder::BodyList curBodies /** curbodies */ 
            );
            /**Returns  the selection list that stores bend faces. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectFaceList * SelectBend
            (
            );
            /**Returns  the materials available in PDW. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::DirectUnfoldBuilder::MatType Materials
            (
            );
            /**Sets  the materials available in PDW. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetMaterials
            (
                NXOpen::Tooling::DirectUnfoldBuilder::MatType materials /** materials */ 
            );
            /** Opens process_data Speadsheet in PDW. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void LoadDatabase
            (
            );
            /** Evaluates K factors for every bend by giving material, radius of the bend and thickenss of the part. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void KByMaterial
            (
            );
            /**Returns  the operations of k factor for a single bend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString KFactor
            (
            );
            /**Sets  the operations of k factor for a single bend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetKFactor
            (
                const NXString & kFactor /** kfactor */ 
            );
            /**Sets  the operations of k factor for a single bend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetKFactor
            (
                const char * kFactor /** kfactor */ 
            );
            /**Returns  the operations to developed length of a bend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double DevLength
            (
            );
            /**Sets  the operations to developed length of a bend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDevLength
            (
                double devLength /** devlength */ 
            );
            /**Returns  the number of bends. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::DirectUnfoldBuilder::Bend NumBends
            (
            );
            /**Sets  the number of bends. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetNumBends
            (
                NXOpen::Tooling::DirectUnfoldBuilder::Bend numBends /** numbends */ 
            );
            /**Returns  the first angle of prebend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double Angle1
            (
            );
            /**Sets  the first angle of prebend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAngle1
            (
                double angle1 /** angle1 */ 
            );
            /**Returns  the second angle of prebend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double Angle2
            (
            );
            /**Sets  the second angle of prebend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAngle2
            (
                double angle2 /** angle2 */ 
            );
            /**Returns  the third angle of prebend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double Angle3
            (
            );
            /**Sets  the third angle of prebend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAngle3
            (
                double angle3 /** angle3 */ 
            );
            /**Returns  the fourth angle of prebend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double Angle4
            (
            );
            /**Sets  the fourth angle of prebend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAngle4
            (
                double angle4 /** angle4 */ 
            );
            /**Returns  the fifth angle of prebend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double Angle5
            (
            );
            /**Sets  the fifth angle of prebend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAngle5
            (
                double angle5 /** angle5 */ 
            );
            /**Returns  the sixth angle of prebend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double Angle6
            (
            );
            /**Sets  the sixth angle of prebend. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAngle6
            (
                double angle6 /** angle6 */ 
            );
            /**Returns  the design sequence. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: int DesignSequence
            (
            );
            /**Sets  the design sequence. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetDesignSequence
            (
                int designSequence /** designsequence */ 
            );
            /**Returns  the number of intermediate stages. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int NumInter
            (
            );
            /**Sets  the number of intermediate stages. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetNumInter
            (
                int numInter /** numinter */ 
            );
            /**Returns  the start station. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: int StartStation
            (
            );
            /**Sets  the start station. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetStartStation
            (
                int startStation /** startstation */ 
            );
            /**Returns  the pitch. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: double Pitch
            (
            );
            /**Sets  the pitch. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetPitch
            (
                double pitch /** pitch */ 
            );
            /**Returns  the orientation of pitch. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: int OrientPitch
            (
            );
            /**Sets  the orientation of pitch. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetOrientPitch
            (
                int orientPitch /** orientpitch */ 
            );
            /**Returns  the intermediate stages selected as the reference of insert. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Assemblies::SelectComponent * InterStage
            (
            );
            /**Returns  the edit intermediate stage option. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: int EditOption
            (
            );
            /**Sets  the edit intermediate stage option. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetEditOption
            (
                int editOption /** editoption */ 
            );
            /**Returns  the naming rule of intermediate stages. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString InterNamingRule
            (
            );
            /**Sets  the naming rule of intermediate stages. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetInterNamingRule
            (
                const NXString & interNamingRule /** internamingrule */ 
            );
            /**Sets  the naming rule of intermediate stages. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetInterNamingRule
            (
                const char * interNamingRule /** internamingrule */ 
            );
            /**Returns  the switch of rename components. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool InterRenameComp
            (
            );
            /**Sets  the switch of rename components. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetInterRenameComp
            (
                bool interRenameComp /** interrenamecomp */ 
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
