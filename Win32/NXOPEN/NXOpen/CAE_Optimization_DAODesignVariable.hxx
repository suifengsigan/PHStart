#ifndef NXOpen_CAE_OPTIMIZATION_DAODESIGNVARIABLE_HXX_INCLUDED
#define NXOpen_CAE_OPTIMIZATION_DAODESIGNVARIABLE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_Optimization_DAODesignVariable.ja
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
#include <NXOpen/CAE_Optimization_DAODesignVariable.hxx>
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
        namespace Optimization
        {
            class DAODesignVariable;
        }
    }
    class NXObject;
    namespace CAE
    {
        namespace Optimization
        {
            class _DAODesignVariableBuilder;
            class DAODesignVariableImpl;
            /** Represents a @link CAE::Optimization::DAODesignVariable CAE::Optimization::DAODesignVariable@endlink .  <br> To create or edit an instance of this class, use @link CAE::Optimization::DAODesignVariableBuilder CAE::Optimization::DAODesignVariableBuilder@endlink  <br> 
             <br>  Created in NX8.0.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  DAODesignVariable : public NXObject
            {
                private: DAODesignVariableImpl * m_daodesignvariable_impl;
                private: friend class  _DAODesignVariableBuilder;
                protected: DAODesignVariable();
                public: ~DAODesignVariable();
                /** Gets the design variable results  @return  Design variable optimization results 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: std::vector<double> GetResults
                (
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
