#ifndef NXOpen_SELECTVIEW_HXX_INCLUDED
#define NXOpen_SELECTVIEW_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SelectView.ja
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
#include <NXOpen/CaeObjectType.hxx>
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/InferSnapType.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class SelectView;
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    class View;
    class _SelectViewBuilder;
    class SelectViewImpl;
    /** Represents a single object selection.

     <br>  Created in NX5.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  SelectView : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
    {
        private: SelectViewImpl * m_selectview_impl;
        private: friend class  _SelectViewBuilder;
        protected: SelectView();
        public: ~SelectView();
        /**Sets  the object being selected
            
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: void SetValue
        (
            NXOpen::View * selection /** selected object */
        );
        /**Returns  the object being selected
            
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::View * Value
        (
        );
        /** The object being selected with the object's view and object's point
            
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: void SetValue
        (
            NXOpen::View * selection /** selected object */,
            NXOpen::View * view /** selected object view*/,
            const NXOpen::Point3d & point /** selected object point*/
        );
        /** The object being selected with the object's view and point.
            
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: void GetValue
        (
            NXOpen::View ** selection /** selected object */,
            NXOpen::View ** view /** selected object view*/,
            NXOpen::Point3d* point /** selected object point*/
        );
        /** The object being selected with the objects view and objects point and snap information.
            
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: void SetValue
        (
            NXOpen::InferSnapType::SnapType snapType /**  snap point type*/,
            NXOpen::View * selection1 /** first selected object */,
            NXOpen::View * view1 /** first selected object view*/,
            const NXOpen::Point3d & point1 /** first selected object point*/,
            NXOpen::View * selection2 /** second selected object */,
            NXOpen::View * view2 /** second selected object view*/,
            const NXOpen::Point3d & point2 /** second selected object point*/
        );
        /** The object being selected with the objects view and point and snap information.
            
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: void GetValue
        (
            NXOpen::InferSnapType::SnapType* snapType /**  snap point type*/,
            NXOpen::View ** selection1 /** first selected object */,
            NXOpen::View ** view1 /** first selected object view*/,
            NXOpen::Point3d* point1 /** first selected object point*/,
            NXOpen::View ** selection2 /** second selected object */,
            NXOpen::View ** view2 /** second selected object view*/,
            NXOpen::Point3d* point2 /** second selected object point*/
        );
        /** The object being selected with CAE set object information.
            
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: void SetValue
        (
            NXOpen::View * selection /** selected object */,
            NXOpen::CaeObjectType::CaeSubType caeSubType /** CAE set object sub type*/,
            int caeSubId /** CAE set object sub id*/
        );
        /** The object being selected with CAE set object information.
             @return  selected object 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::View * GetValue
        (
            NXOpen::CaeObjectType::CaeSubType* caeSubType /** CAE set object sub type*/,
            int* caeSubId /** CAE set object sub id*/
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
