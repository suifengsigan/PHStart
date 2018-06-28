#ifndef NXOpen_ANNOTATIONS_FCFFRAME_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_FCFFRAME_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_FcfFrame.ja
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
#include <NXOpen/Annotations.hxx>
#include <NXOpen/Annotations_DatumReference.hxx>
#include <NXOpen/Gdts.hxx>
#include <NXOpen/TransientObject.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class FcfFrame;
    }
    namespace Annotations
    {
        class DatumReference;
    }
    class Expression;
    namespace Annotations
    {
    }
    namespace Annotations
    {
        class FcfFrameImpl;
        /** Represents an FCF frame 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  FcfFrame : public TransientObject
        {
            private: FcfFrameImpl * m_fcfframe_impl;
            /// \cond NX_NO_DOC 
            public: explicit FcfFrame(void *ptr);
            /// \endcond 
            /** Frees the object from memory.  After this method is called,
                    it is illegal to use the object.  In .NET, this method is automatically
                    called when the object is deleted by the garbage collector.  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~FcfFrame();
            /**Returns  the tolerance zone shape 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::ToleranceZoneShape ToleranceZoneShape
            (
            );
            /**Sets  the tolerance zone shape 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetToleranceZoneShape
            (
                NXOpen::Annotations::ToleranceZoneShape zoneShape /** Tolerance zone shape */
            );
            /** Return the tolerance  @return  Tolerance data 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::Value GetTolerance
            (
            );
            /** Sets the tolerance 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTolerance
            (
                const NXOpen::Annotations::Value & tolerance /** Tolerance data */
            );
            /** Return the material condition modifiers  @return  List of modifiers 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::Annotations::MaterialConditionModifier> GetMaterialConditionModifiers
            (
            );
            /** Sets the material condition modifiers 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetMaterialConditionModifiers
            (
                const std::vector<NXOpen::Annotations::MaterialConditionModifier> & modifiers /** List of modifiers */
            );
            /** Returns the primary datum reference  @return  Primary datum reference frame 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::DatumReference * GetPrimaryDatumReference
            (
            );
            /** Sets the primary datum reference 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetPrimaryDatumReference
            (
                NXOpen::Annotations::DatumReference * primary /** Primary datum reference frame */
            );
            /** Returns the secondary datum reference  @return  Secondary datum reference frame 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::DatumReference * GetSecondaryDatumReference
            (
            );
            /** Sets the secondary datum reference 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetSecondaryDatumReference
            (
                NXOpen::Annotations::DatumReference * secondary /** Secondary datum reference frame */
            );
            /** Returns the tertiary datum reference  @return  Tertiary datum reference frame 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::DatumReference * GetTertiaryDatumReference
            (
            );
            /** Sets the tertiary datum reference 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTertiaryDatumReference
            (
                NXOpen::Annotations::DatumReference * tertiary /** Tertiary datum reference frame */
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
