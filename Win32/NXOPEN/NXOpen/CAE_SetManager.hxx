#ifndef NXOpen_CAE_SETMANAGER_HXX_INCLUDED
#define NXOpen_CAE_SETMANAGER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_SetManager.ja
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
#include <NXOpen/CAE_CAESet.hxx>
#include <NXOpen/CAE_SetObject.hxx>
#include <NXOpen/NXObject.hxx>
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
        class SetManager;
    }
    namespace CAE
    {
        class CAESet;
    }
    namespace CAE
    {
        class CaeGroup;
    }
    class NXObject;
    class TaggedObject;
    namespace CAE
    {
        class _SetManagerBuilder;
        class SetManagerImpl;
        /**  @brief  Represents a group of CAE object sets. The objects in each set
                can be used to create loads, constraints ..etc 

           <br> This is a sub object <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  SetManager : public NXObject
        {
            private: SetManagerImpl * m_setmanager_impl;
            private: friend class  _SetManagerBuilder;
            protected: SetManager();
            public: ~SetManager();
            /**Returns  the count of objects in the set 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: int TargetSetCount
            (
            );
            /** Creates a CAE.CAESet  @return  the cae set created 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::CAE::CAESet * CreateCaeSet
            (
            );
            /** Sets the CAE group in the specified set
                     
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetTargetSetGroup
            (
                int setIndex /** index of the set */,
                NXOpen::CAE::CaeSetGroupFilterType filterType /** filter to extract type of objects from the group */,
                NXOpen::CAE::CaeGroup * group /** group to add to set */
            );
            /** Gets the CAE group in the specified set
                      @return  group object from set. may be NULL 
             <br>  Created in NX8.0.1.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::CAE::CaeGroup * GetTargetSetGroup
            (
                int setIndex /** index of the set */
            );
            /** Sets the CAE objects in the specified set
                     
             <br>  Created in NX4.0.1.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetTargetSetMembers
            (
                int setIndex /** index of the set */,
                const std::vector<NXOpen::CAE::SetObject> & objects /** objects to add to set */
            );
            /** Sets the CAE objects in the specified target set exclude set
                     
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetTargetSetExcludedMembers
            (
                int setIndex /** index of the set */,
                const std::vector<NXOpen::CAE::SetObject> & excludedObjects /** excluded objects to add to set */
            );
            /** Gets the objects for the specified target set
                     
             <br>  Created in NX4.0.1.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void GetTargetSetMembers
            (
                int setIndex /** index of the set */,
                NXOpen::NXObject ** displayCoordinateSystem /** display coordinate system */,
                std::vector<NXOpen::CAE::SetObject> & objects /** objects in set */
            );
            /** Gets the objects for the specified target set excluded set
                     
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void GetTargetSetExcludedMembers
            (
                int setIndex /** index of the set */,
                std::vector<NXOpen::CAE::SetObject> & objects /** objects in set */
            );
            /** Clears the objects stored in the set specified in
                        the set manager
                     
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void CleanTargetSet
            (
                int setIndex /** index of the set in the set manager*/
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