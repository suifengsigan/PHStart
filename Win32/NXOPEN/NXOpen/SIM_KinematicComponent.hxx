#ifndef NXOpen_SIM_KINEMATICCOMPONENT_HXX_INCLUDED
#define NXOpen_SIM_KINEMATICCOMPONENT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SIM_KinematicComponent.ja
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
#include <NXOpen/libnxopencpp_sim_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace SIM
    {
        class KinematicComponent;
    }
    class NXObject;
    namespace SIM
    {
        class KinematicJunction;
    }
    namespace SIM
    {
        class _KinematicComponentBuilder;
        class KinematicComponentImpl;
        /**  @brief  Represents the KinematicComponent class object  

            <br> Use the @link KinematicConfigurator KinematicConfigurator@endlink  class to create a KinematicComponent object. <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_SIMEXPORT  KinematicComponent : public NXObject
        {
            private: KinematicComponentImpl * m_kinematiccomponent_impl;
            private: friend class  _KinematicComponentBuilder;
            protected: KinematicComponent();
            public: ~KinematicComponent();
            /** Adds a new child component 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void InsertComponent
            (
                NXOpen::SIM::KinematicComponent * newChild /** The child component to add */
            );
            /** Deletes a child component 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void DeleteComponent
            (
                NXOpen::SIM::KinematicComponent * oldChild /** The old child component to remove */
            );
            /** Adds a new junction to the component 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void InsertJunction
            (
                NXOpen::SIM::KinematicJunction * junction /** The junction to add */
            );
            /** Deletes ca config properties 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void DeleteCaConfigProperties
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
