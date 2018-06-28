#ifndef NXOpen_ANNOTATIONS_ASSOCIATEDOBJECT_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_ASSOCIATEDOBJECT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_AssociatedObject.ja
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
        class AssociatedObject;
    }
    class DisplayableObject;
    namespace Annotations
    {
    }
    namespace Annotations
    {
        class AssociatedObjectImpl;
        /** Represents the objects to which the PMI applies. 
                Examples are size tolerance applied to a set of cylindrical faces, GD and T datum applied to
                a planar face, and so on. 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  AssociatedObject : public TransientObject
        {
            private: AssociatedObjectImpl * m_associatedobject_impl;
            /// \cond NX_NO_DOC 
            public: explicit AssociatedObject(void *ptr);
            /// \endcond 
            /** Frees the object from memory.  After this method is called,
                    it is illegal to use the object.  In .NET, this method is automatically
                    called when the object is deleted by the garbage collector.  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~AssociatedObject();
            /** Returns the objects.  @return  List of objects 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::DisplayableObject *> GetObjects
            (
            );
            /** Sets the objects. Following objects are allowed -
                        <br>  @link Point Point@endlink  <br> 
                        <br>  @link Edge Edge@endlink  <br> 
                        <br>  @link Face Face@endlink  <br> 
                        <br>  @link Body Body@endlink  <br> 
                        <br>  @link Assemblies::Component Assemblies::Component@endlink  <br> 
                        <br>  @link Curve Curve@endlink  <br>  
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetObjects
            (
                const std::vector<NXOpen::DisplayableObject *> & objects /** List of new objects */
            );
            /** Returns the associated object index  @return  Unique integer assigned to the associated object 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: int GetObjectIndex
            (
                NXOpen::DisplayableObject * object /** Object for which index is to be returned */
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
