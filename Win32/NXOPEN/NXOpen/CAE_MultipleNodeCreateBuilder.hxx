#ifndef NXOpen_CAE_MULTIPLENODECREATEBUILDER_HXX_INCLUDED
#define NXOpen_CAE_MULTIPLENODECREATEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_MultipleNodeCreateBuilder.ja
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
#include <NXOpen/CAE_MultipleNodeCreateBuilder.hxx>
#include <NXOpen/ugmath.hxx>
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
        class MultipleNodeCreateBuilder;
    }
    class Builder;
    namespace CAE
    {
        class FENode;
    }
    namespace CAE
    {
        class _MultipleNodeCreateBuilderBuilder;
        class MultipleNodeCreateBuilderImpl;
        /**
            Represents a @link CAE::MultipleNodeCreateBuilder CAE::MultipleNodeCreateBuilder@endlink  which can be used to create 
            mutiple nodes in one efficient opertation. 
             <br> To create a new instance of this class, use @link CAE::NodeElementManager::CreateMultipleNodeCreateBuilder CAE::NodeElementManager::CreateMultipleNodeCreateBuilder@endlink  <br> 
         <br>  Created in NX7.5.2.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  MultipleNodeCreateBuilder : public Builder
        {
            private: MultipleNodeCreateBuilderImpl * m_multiplenodecreatebuilder_impl;
            private: friend class  _MultipleNodeCreateBuilderBuilder;
            protected: MultipleNodeCreateBuilder();
            public: ~MultipleNodeCreateBuilder();
            /**Returns  the starting label used to assign node labels, if no explicit labels were defined. If no start 
                        label is specified, the next available node for this part. 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: int StartLabel
            (
            );
            /**Sets  the starting label used to assign node labels, if no explicit labels were defined. If no start 
                        label is specified, the next available node for this part. 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetStartLabel
            (
                int label /** label */ 
            );
            /**Returns  the label increment used when calculating next node label when assigning node labels 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : None */
            public: int LabelIncrement
            (
            );
            /**Sets  the label increment used when calculating next node label when assigning node labels 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetLabelIncrement
            (
                int increment /** increment */ 
            );
            /** Adds new node definitions at specifiied positions with repect to the 
                        defined refernce coordinate system.  New node will be created only after
                        when @link CAE::MultipleNodeCreateBuilder::CommitNodes CAE::MultipleNodeCreateBuilder::CommitNodes@endlink   
                        is done. Since node labels weren't specified, the builder 
                        will assign them automatically based on the setting of 
                        @link CAE::MultipleNodeCreateBuilder::StartLabel CAE::MultipleNodeCreateBuilder::StartLabel @endlink and @link CAE::MultipleNodeCreateBuilder::SetStartLabel CAE::MultipleNodeCreateBuilder::SetStartLabel @endlink  
                        and  @link CAE::MultipleNodeCreateBuilder::LabelIncrement CAE::MultipleNodeCreateBuilder::LabelIncrement @endlink and @link CAE::MultipleNodeCreateBuilder::SetLabelIncrement CAE::MultipleNodeCreateBuilder::SetLabelIncrement @endlink 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void AddNodes
            (
                const std::vector<NXOpen::Point3d> & positions /** new FENodes positions */
            );
            /** Adds a new node definition  at specifiied positions with repect to the 
                        defined refernce coordinate system.  New node will be created only after
                        when @link CAE::MultipleNodeCreateBuilder::CommitNodes CAE::MultipleNodeCreateBuilder::CommitNodes@endlink   
                        is done. Since node labels weren't specified, the builder 
                        will assign them automatically based on the setting of 
                        @link CAE::MultipleNodeCreateBuilder::StartLabel CAE::MultipleNodeCreateBuilder::StartLabel @endlink and @link CAE::MultipleNodeCreateBuilder::SetStartLabel CAE::MultipleNodeCreateBuilder::SetStartLabel @endlink  
                        and  @link CAE::MultipleNodeCreateBuilder::LabelIncrement CAE::MultipleNodeCreateBuilder::LabelIncrement @endlink and @link CAE::MultipleNodeCreateBuilder::SetLabelIncrement CAE::MultipleNodeCreateBuilder::SetLabelIncrement @endlink 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void AddNodes
            (
                const std::vector<NXOpen::Point3d> & positions /** new FENodes positions */,
                const std::vector<int> & labels /** new FENodes labels. If the specified label is less than or equal to 0 then the builder will 
                                                                                automatically assign a valid label based on the builders labeling rules. 
                                                                                If a label is specified it must be unique in this part. */
            );
            /** Commits the Builder, which creates nodes as they were defined and returns the newly create nodes.
                        The method @link Builder::Commit Builder::Commit@endlink  will also do the same thing
                        except no nodes are returned and @link Builder::GetCommittedObjects Builder::GetCommittedObjects@endlink 
                        can't be used since these nodes are not of type @link  NXObject  NXObject@endlink    @return  new FENodes positions 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: std::vector<NXOpen::CAE::FENode *> CommitNodes
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
