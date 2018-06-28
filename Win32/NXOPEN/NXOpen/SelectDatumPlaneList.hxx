#ifndef NXOpen_SELECTDATUMPLANELIST_HXX_INCLUDED
#define NXOpen_SELECTDATUMPLANELIST_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SelectDatumPlaneList.ja
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
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/SelectionMethod.hxx>
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
    class SelectDatumPlaneList;
    class DatumPlane;
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    class SelectObject;
    class SelectionMethod;
    class View;
    class _SelectDatumPlaneListBuilder;
    class SelectDatumPlaneListImpl;
    /** Represents a list of objects on a selection list.

     <br>  Created in NX5.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  SelectDatumPlaneList : public TaggedObject, public virtual GeometricUtilities::IComponentBuilder
    {
        private: SelectDatumPlaneListImpl * m_selectdatumplanelist_impl;
        private: friend class  _SelectDatumPlaneListBuilder;
        protected: SelectDatumPlaneList();
        public: ~SelectDatumPlaneList();
        /** Adds an object to the list
             @return  True if succesully added to list;
                                          False if the object was already a member
                                          of the list and duplicates are not allowed 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: bool Add
        (
            NXOpen::DatumPlane * object /** object to add */
        );
        /** Adds a set of objects to the list
             @return  True if succesully added all objects to the list;
                                          False if there was at least one object that was already a
                                          member of the list and duplicates are not allowed 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: bool Add
        (
            const std::vector<NXOpen::DatumPlane *> & objects /** objects to add */
        );
        /** Adds the objects from a SelectionMethod to the list
             @return  True if succesully added all objects to the list;
                                          False if there was at least one object that was already a
                                          member of the list and duplicates are not allowed 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool Add
        (
            NXOpen::SelectionMethod * inputSelectionMethod /** selection method containing objects to add */
        );
        /** Adds the object with the objects view and objects point
             @return  True if succesully added to list;
                                          False if the object was already a member
                                          of the list and duplicates are not allowed 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: bool Add
        (
            NXOpen::DatumPlane * selection /** selected object */,
            NXOpen::View * view /** selected object view*/,
            const NXOpen::Point3d & point /** selected object point*/
        );
        /** Remove specified object from list.
             @return  True if succesully removed from list;
                                            False if the object was not a member of the list 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: bool Remove
        (
            NXOpen::DatumPlane * object /** Object to remove */
        );
        /** Remove specified object from list.
             @return  True if succesully removed from list;
                                            False if the object / view was not a member of the list 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool Remove
        (
            NXOpen::DatumPlane * object /** Object to remove */,
            NXOpen::View * view /** with this view*/
        );
        /** Remove specified object from list.
             @return  True if succesully removed from list;
                                            False if the object was not a member of the list 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool Remove
        (
            NXOpen::InferSnapType::SnapType snapType /**  snap point type*/,
            NXOpen::DatumPlane * selection1 /** first selected object */,
            NXOpen::View * view1 /** first selected object view*/,
            const NXOpen::Point3d & point1 /**first  selected object point*/,
            NXOpen::DatumPlane * selection2 /** second selected object */,
            NXOpen::View * view2 /**second  selected object view*/,
            const NXOpen::Point3d & point2 /** second selected object point*/
        );
        /** Remove specified objects from list.
             @return  True if succesully removed from list;
                                            False if the object was not a member of the list 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: bool RemoveArray
        (
            const std::vector<NXOpen::DatumPlane *> & objects /** Objects to remove */
        );
        /** Removes the objects from a SelectionMethod from the list
             @return  True if succesully removed all objects from the list;
                                            False if there was at least one object that was not a
                                            member of the list 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool Remove
        (
            NXOpen::SelectionMethod * inputSelectionMethod /** selection method containing objects to add */
        );
        /** Removes all items from the list.
            
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: void Clear
        (
        );
        /** Returns whether the specified object is already in the list or not.
             @return  true if object is in the list, false otherwise 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: bool Contains
        (
            NXOpen::DatumPlane * object /** object to check */
        );
        /**Returns  the number of objects in the list.
            
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: int Size
        (
        );
        /**Returns  whether duplicate objects are allowed in the selection list.
            
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: bool DuplicatesAllowed
        (
        );
        /** Sets the list of objects in the selection list. This will clear any existing
            items in the list.
            
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: void SetArray
        (
            const std::vector<NXOpen::DatumPlane *> & objects /** items to put in the list*/
        );
        /** Returns the list of objects in the selection list.
             @return  items in list 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: std::vector<NXOpen::DatumPlane *> GetArray
        (
        );
        /** Returns the list of SelectObjects in the selection list.
             @return  items in list 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: std::vector<NXOpen::SelectObject *> GetSelectObjectArray
        (
        );
        /** The object being selected with the objects view and objects point and snap information.
             @return  True if succesully added all objects to the list;
                                          False if there was at least one object that was already a
                                          member of the list and duplicates are not allowed 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: bool Add
        (
            NXOpen::InferSnapType::SnapType snapType /**  snap point type*/,
            NXOpen::DatumPlane * selection1 /** first selected object */,
            NXOpen::View * view1 /** first selected object view*/,
            const NXOpen::Point3d & point1 /**first  selected object point*/,
            NXOpen::DatumPlane * selection2 /** second selected object */,
            NXOpen::View * view2 /**second  selected object view*/,
            const NXOpen::Point3d & point2 /** second selected object point*/
        );
        /** The object being selected with CAE set object information.
             @return  True if succesully added all objects to the list;
                                          False if there was at least one object that was already a
                                          member of the list and duplicates are not allowed 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: bool Add
        (
            NXOpen::DatumPlane * selection /** selected object */,
            NXOpen::CaeObjectType::CaeSubType caeSubType /** CAE set object sub type*/,
            int caeSubId /** CAE set object sub id*/
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
