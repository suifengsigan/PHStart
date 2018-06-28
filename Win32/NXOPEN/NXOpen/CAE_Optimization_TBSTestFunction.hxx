#ifndef NXOpen_CAE_OPTIMIZATION_TBSTESTFUNCTION_HXX_INCLUDED
#define NXOpen_CAE_OPTIMIZATION_TBSTESTFUNCTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_Optimization_TBSTestFunction.ja
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
#include <NXOpen/CAE_Optimization_TBSTestFunction.hxx>
#include <NXOpen/Expression.hxx>
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
            class TBSTestFunction;
        }
    }
    class Expression;
    class NXObject;
    namespace CAE
    {
        namespace Optimization
        {
            class _TBSTestFunctionBuilder;
            class TBSTestFunctionImpl;
            /** Represents a test displacement for shape optimization or bead optimization  
             <br>  Created in NX8.5.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  TBSTestFunction : public NXObject
            {
                /**the direction of test displacements */
                public: enum Direction
                {
                    DirectionGrow/** Standard growth */,
                    DirectionShrink/** Standard Shrinkage */,
                    DirectionRandom/** Non-standard nodal random displacement */
                };

                private: TBSTestFunctionImpl * m_tbstestfunction_impl;
                private: friend class  _TBSTestFunctionBuilder;
                protected: TBSTestFunction();
                public: ~TBSTestFunction();
                /**Returns  the direction of test displacements 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::CAE::Optimization::TBSTestFunction::Direction TestDirectionOption
                (
                );
                /**Sets  the direction of test displacements 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : cae_opt_topobead ("NX Bead Optimization") OR cae_opt_toposhape ("NX Shape Optimization") */
                public: void SetTestDirectionOption
                (
                    NXOpen::CAE::Optimization::TBSTestFunction::Direction direction /** direction */ 
                );
                /**Returns  the maximum value of test displacements 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Expression * MaximumDisplacement
                (
                );
                /**Returns  the number of increments 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: int NumberOfIncrements
                (
                );
                /**Sets  the number of increments 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : cae_opt_topobead ("NX Bead Optimization") OR cae_opt_toposhape ("NX Shape Optimization") */
                public: void SetNumberOfIncrements
                (
                    int incrementsNum /** incrementsnum */ 
                );
                /**Returns  the option whether to run test solving 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: bool RunTest
                (
                );
                /**Sets  the option whether to run test solving 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : cae_opt_topobead ("NX Bead Optimization") OR cae_opt_toposhape ("NX Shape Optimization") */
                public: void SetRunTest
                (
                    bool useTestFunction /** usetestfunction */ 
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
