#ifndef NXOpen_FACET_FACETEDBODY_HXX_INCLUDED
#define NXOpen_FACET_FACETEDBODY_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Facet_FacetedBody.ja
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
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/Facet_FacetedBodyCollection.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_facet_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Facet
    {
        class FacetedBody;
    }
    class Body;
    class DisplayableObject;
    namespace Facet
    {
        class _FacetedBodyBuilder;
        class FacetedBodyImpl;
        /** 
            Represents a faceted body. Instances of this class may be
            generated when recording a journal, but they cannot be created
            directly. 
            
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_FACETEXPORT  FacetedBody : public DisplayableObject
        {
            private: FacetedBodyImpl * m_facetedbody_impl;
            private: friend class  _FacetedBodyBuilder;
            protected: FacetedBody();
            public: ~FacetedBody();
            /**Returns 
                        the number of levels of detail in this faceted body.
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: int NumberOfLevelsOfDetail
            (
            );
            /**
                        Get the number of facets in the given level of detail.
                     @return  
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: int GetNumberOfFacets
            (
                int levelOfDetail /** level of detail to query */
            );
            /**Returns 
                        the volume of the faceted body in part units for its
                        highest level of detail.
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: double Volume
            (
            );
            /**Returns 
                        the surface area of the faceted body in part units for its
                        highest level of detail.
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: double SurfaceArea
            (
            );
            /** 
                        Get the faceted body parameters
                     @return  faceting parameters for this body 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Facet::FacetingParameters GetParameters
            (
            );
            /** 
                        Set the faceted body parameters, it will retessellate the body with the new parameters
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetParameters
            (
                const NXOpen::Facet::FacetingParameters & parameters /** new facetting faceting parameters to set for this body */
            );
            /**Returns 
                        the number of faces in this faceted body in the highest level of detail.
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: int NumberOfFaces
            (
            );
            /**Returns  true if the body is a sheet body 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool IsSheetBody
            (
            );
            /**Returns  true if the body is a solid body 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool IsSolidBody
            (
            );
            /**Returns 
                        a flag indicating this is an assembly level representation. That is
                        this facet body is associated with an occurrence of a solid body. 
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool IsAssemblyLevel
            (
            );
            /**Returns 
                        the load state of the solid body associated with this facet body.
                        False if there is no associated body.
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: bool IsAssociatedBodyLoaded
            (
            );
            /**Returns 
                        the solid body associated with this facet body.
                    
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Body * AssociatedBody
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