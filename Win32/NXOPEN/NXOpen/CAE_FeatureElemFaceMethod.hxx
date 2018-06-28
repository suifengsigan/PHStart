#ifndef NXOpen_CAE_FEATUREELEMFACEMETHOD_HXX_INCLUDED
#define NXOpen_CAE_FEATUREELEMFACEMETHOD_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_FeatureElemFaceMethod.ja
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
#include <NXOpen/CAE_SetObject.hxx>
#include <NXOpen/SelectionMethod.hxx>
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
        class FeatureElemFaceMethod;
    }
    class SelectionMethod;
    class TaggedObject;
    namespace CAE
    {
    }
    namespace CAE
    {
        class FeatureElemFaceMethodImpl;
        /** Represents the output from the feature element face smart selector method
             <br> To obtain an instance of this class use CAE::SmartSelectionManager <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  FeatureElemFaceMethod : public SelectionMethod
        {
            private: FeatureElemFaceMethodImpl * m_featureelemfacemethod_impl;
            /// \cond NX_NO_DOC 
            public: explicit FeatureElemFaceMethod(void *ptr);
            /// \endcond 
            /** Frees the object from memory.  After this method is called,
                    it is illegal to use the object.  In .NET, this method is automatically
                    called when the object is deleted by the garbage collector.  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~FeatureElemFaceMethod();
            /** Returns the resultant element faces  @return  
             <br>  Created in NX6.0.4.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::CAE::SetObject> GetElementFaces
            (
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
