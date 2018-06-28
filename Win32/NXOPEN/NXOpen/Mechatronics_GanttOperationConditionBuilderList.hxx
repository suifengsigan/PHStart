#ifndef NXOpen_MECHATRONICS_GANTTOPERATIONCONDITIONBUILDERLIST_HXX_INCLUDED
#define NXOpen_MECHATRONICS_GANTTOPERATIONCONDITIONBUILDERLIST_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_GanttOperationConditionBuilderList.ja
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
#include <NXOpen/ObjectList.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_mechatronics_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Mechatronics
    {
        class GanttOperationConditionBuilderList;
    }
    namespace Mechatronics
    {
        class GanttOperationConditionBuilder;
    }
    namespace Mechatronics
    {
        class _GanttOperationConditionBuilderListBuilder;
        class GanttOperationConditionBuilderListImpl;
        /** Represents a list of objects.
         <br> To create a new instance of this class, use @link Part::CreateObjectList Part::CreateObjectList@endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  GanttOperationConditionBuilderList : public TaggedObject
        {
            private: GanttOperationConditionBuilderListImpl * m_ganttoperationconditionbuilderlist_impl;
            private: friend class  _GanttOperationConditionBuilderListBuilder;
            protected: GanttOperationConditionBuilderList();
            public: ~GanttOperationConditionBuilderList();
            /** Appends a set of objects to the list
                
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void Append
            (
                const std::vector<NXOpen::Mechatronics::GanttOperationConditionBuilder *> & objects /** items to append */
            );
            /** Appends an object to the list
                
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void Append
            (
                NXOpen::Mechatronics::GanttOperationConditionBuilder * object /** item to append */
            );
            /**Returns  the length of the list 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: int Length
            (
            );
            /** Deletes the item at the index specified.  The size of the list does
                *   not change, but the item at this index is set to NULL.
                
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void ClearIndex
            (
                int deleteIdx /** index of item to be deleted */
            );
            /** Finds the index where the input object appears.  If it does not appear,
                *   -1 is returned.
                 @return  index of input object, -1 if not on list 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: int FindIndex
            (
                NXOpen::Mechatronics::GanttOperationConditionBuilder * obj /** Object to find index for */
            );
            /** Returns the object at the input index.  May be NULL.
                 @return  object found at input index 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Mechatronics::GanttOperationConditionBuilder * FindItem
            (
                int index /** index of object to return */
            );
            /** Erases the object from the list, but does not delete the object.
                    The list is shifted so that there isn't a null where the object used to be. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void Erase
            (
                int index /** index of item to be removed from the list */
            );
            /** Erases the object at the given position from the list.
                    The list is shifted so that there isn't a null where the object used to be. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void Erase
            (
                int index /** index of item to be removed from the list */,
                NXOpen::ObjectList::DeleteOption deleteOption /** whether to delete the object */
            );
            /** Erases the object from the list, but does not delete the object.
                    The list is shifted so that there isn't a null where the object used to exist. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void Erase
            (
                NXOpen::Mechatronics::GanttOperationConditionBuilder * obj /** object to be removed from the list */
            );
            /** Erases the object from the list.
                    The list is shifted so that there isn't a null where the object used to exist. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void Erase
            (
                NXOpen::Mechatronics::GanttOperationConditionBuilder * obj /** object to be removed from the list */,
                NXOpen::ObjectList::DeleteOption deleteOption /** whether to delete the object */
            );
            /** Clears the entire list 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void Clear
            (
            );
            /** Clears the entire list 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void Clear
            (
                NXOpen::ObjectList::DeleteOption deleteOption /** whether to delete the objects when removing them */
            );
            /** Gets the contents of the entire list  @return  The list contents 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::Mechatronics::GanttOperationConditionBuilder *> GetContents
            (
            );
            /** Sets the contents of the entire list. This overwrites the previous contents of this list, 
                    but does not delete any objects that were originally on the list.
                 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void SetContents
            (
                const std::vector<NXOpen::Mechatronics::GanttOperationConditionBuilder *> & objects /** The list contents */
            );
            /** Exchanges the position of two objects inside the list.
                    The first object is placed where the second used to be,
                    and second object where the first used to be. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void Swap
            (
                int index1 /** location of the first item */,
                int index2 /** location of the second item */
            );
            /** Exchanges the position of two objects inside the list.
                    The first object is placed where the second used to be,
                    and second object where the first used to be. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void Swap
            (
                NXOpen::Mechatronics::GanttOperationConditionBuilder * object1 /** first item */,
                NXOpen::Mechatronics::GanttOperationConditionBuilder * object2 /** second item */
            );
            /** Inserts an object at the specified location 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public: void Insert
            (
                int location /** location at which to insert the object */,
                NXOpen::Mechatronics::GanttOperationConditionBuilder * object /** object to be inserted */
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
