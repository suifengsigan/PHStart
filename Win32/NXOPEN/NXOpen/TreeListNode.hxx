#ifndef NXOpen_TREELISTNODE_HXX_INCLUDED
#define NXOpen_TREELISTNODE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     TreeListNode.ja
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
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopenuicpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class TreeListNode;
    class _TreeListNodeBuilder;
    class TreeListNodeImpl;
    /** Represents a TreeList Node Object 
     <br>  Created in NX6.0.4.  <br>  
    */
    class NXOPENUICPPEXPORT  TreeListNode : public TaggedObject
    {
        private: TreeListNodeImpl * m_treelistnode_impl;
        private: friend class  _TreeListNodeBuilder;
        protected: TreeListNode();
        public: ~TreeListNode();
    };
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