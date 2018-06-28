#ifndef NXOpen_GEOMETRICUTILITIES_MULTITRANSITIONLAWBUILDER_HXX_INCLUDED
#define NXOpen_GEOMETRICUTILITIES_MULTITRANSITIONLAWBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricUtilities_MultiTransitionLawBuilder.ja
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
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/GeometricUtilities_MultiTransitionLawBuilder.hxx>
#include <NXOpen/GeometricUtilities_TransitionLawNodeBuilder.hxx>
#include <NXOpen/ObjectList.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_geometricutilities_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace GeometricUtilities
    {
        class MultiTransitionLawBuilder;
    }
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    namespace GeometricUtilities
    {
        class TransitionLawNodeBuilder;
    }
    namespace GeometricUtilities
    {
        class TransitionLawNodeBuilderList;
    }
    class Section;
    namespace GeometricUtilities
    {
        class _MultiTransitionLawBuilderBuilder;
        class MultiTransitionLawBuilderImpl;
        /**
                Represents multiple transition law.
                
                This class represents @link GeometricUtilities::LawBuilder::TypeMultiTransition GeometricUtilities::LawBuilder::TypeMultiTransition@endlink  type
                of law in @link GeometricUtilities::LawBuilder GeometricUtilities::LawBuilder@endlink .
                Objects of class @link GeometricUtilities::TransitionLawNodeBuilder GeometricUtilities::TransitionLawNodeBuilder@endlink  are used
                as law nodes in @link GeometricUtilities::MultiTransitionLawBuilder GeometricUtilities::MultiTransitionLawBuilder@endlink . Spine
                definition in this class is mandatory. You can specify any number of law nodes on the spine.
                Minimum two law nodes are necessary to define the multi transition law along the spine.
                The law nodes must be specified in the parametrically increasing order in the spine direction.
                

                
                 <br> 
                Depending on the law node position on the spine following transition types are supported -
                 <br> 
                
                 <br> 
                Start node - All options in @link GeometricUtilities::TransitionLawNodeBuilder::TransitionType GeometricUtilities::TransitionLawNodeBuilder::TransitionType@endlink  except
                @link GeometricUtilities::TransitionLawNodeBuilder::TransitionTypeUnknown GeometricUtilities::TransitionLawNodeBuilder::TransitionTypeUnknown@endlink 
                 <br> 
                
                 <br> 
                End node - @link GeometricUtilities::TransitionLawNodeBuilder::TransitionTypeBlend GeometricUtilities::TransitionLawNodeBuilder::TransitionTypeBlend@endlink  and
                @link GeometricUtilities::TransitionLawNodeBuilder::TransitionTypeMinmax GeometricUtilities::TransitionLawNodeBuilder::TransitionTypeMinmax@endlink  only
                 <br> 
                
                 <br> 
                End node - All options in @link GeometricUtilities::TransitionLawNodeBuilder::TransitionType GeometricUtilities::TransitionLawNodeBuilder::TransitionType@endlink  may be supported.
                Consult the referencing class documentation to see when
                @link GeometricUtilities::TransitionLawNodeBuilder::TransitionTypeUnknown GeometricUtilities::TransitionLawNodeBuilder::TransitionTypeUnknown@endlink  is not supported
                at a law node.
                 <br> 
                
                
            
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICUTILITIESEXPORT  MultiTransitionLawBuilder : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
        {
            private: MultiTransitionLawBuilderImpl * m_multitransitionlawbuilder_impl;
            private: friend class  _MultiTransitionLawBuilderBuilder;
            protected: MultiTransitionLawBuilder();
            public: ~MultiTransitionLawBuilder();
            /** Creates a new law node  @return  Law node 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR free_form_modeling ("FREE-FORM MODELING") OR studio_free_form ("STUDIO FREE FORM") */
            public: NXOpen::GeometricUtilities::TransitionLawNodeBuilder * CreateNode
            (
            );
            /**Returns  the spine 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR free_form_modeling ("FREE-FORM MODELING") OR studio_free_form ("STUDIO FREE FORM") */
            public: NXOpen::Section * Spine
            (
            );
            /** Update the builder based on current spine 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR free_form_modeling ("FREE-FORM MODELING") OR studio_free_form ("STUDIO FREE FORM") */
            public: void UpdateSpine
            (
            );
            /**Returns  the list of law nodes. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR free_form_modeling ("FREE-FORM MODELING") OR studio_free_form ("STUDIO FREE FORM") */
            public: NXOpen::GeometricUtilities::TransitionLawNodeBuilderList * NodeList
            (
            );
            /** Validate whether the inputs to the component are sufficient for 
                        commit to be called.  If the component is not in a state to commit
                        then an exception is thrown.  For example, if the component requires
                        you to set some property, this method will throw an exception if
                        you haven't set it.  This method throws a not-yet-implemented
                        NXException for some components.
                     @return  Was self validation successful 
             <br>  Created in NX3.0.1.  <br>  
             <br> License requirements : None */
            public: virtual bool Validate
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
