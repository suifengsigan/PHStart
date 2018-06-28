#ifndef NXOpen_MOTION_SCALARTORQUECOLLECTION_HXX_INCLUDED
#define NXOpen_MOTION_SCALARTORQUECOLLECTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Motion_ScalarTorqueCollection.ja
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
#include <NXOpen/Motion_ScalarTorque.hxx>
#include <NXOpen/Motion_ScalarTorqueBuilder.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/TaggedObjectCollection.hxx>
#include <NXOpen/libnxopencpp_motion_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Motion
    {
        class ScalarTorqueCollection;
    }
    namespace Motion
    {
        class MotionManager;
    }
    namespace Motion
    {
        class ScalarTorque;
    }
    namespace Motion
    {
        class ScalarTorqueBuilder;
    }
    namespace Motion
    {
        class ScalarTorqueCollectionImpl;
        /** Represents a collection of motion scalar torque  <br> To obtain an instance of this class, refer to @link Motion::MotionManager Motion::MotionManager@endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_MOTIONEXPORT  ScalarTorqueCollection : public TaggedObjectCollection
        {
            private: ScalarTorqueCollectionImpl * m_scalartorquecollection_impl;
            private: NXOpen::Motion::MotionManager* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit ScalarTorqueCollection(NXOpen::Motion::MotionManager *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~ScalarTorqueCollection();
            /** Iterator for accessing the contents of the collection. */
            //lint -sem(NXOpen::Motion::ScalarTorqueCollection::iterator::copy,initializer)
            class iterator
            {
            public:
                /** Value type associated with iterator*/ 

                typedef Motion::ScalarTorque * value_type;
                /** Default constructor */
                iterator() : m_context(NULL), m_current(NULL_TAG)
                {
                } //lint !e1401 m_state is not initialized
                /// \cond NX_NO_DOC
                explicit iterator(NXOpen::Motion::ScalarTorqueCollection *context) : m_context(context), m_current(NULL_TAG)
                {
                }//lint !e1401 m_state is not initialized
                /// \endcond
                /** Copy constructor */
                iterator(const iterator &other): m_context(NULL), m_current(NULL_TAG)
                {
                    copy(other);
                }
                /** Copy constructor */
                iterator &operator =(const iterator &other)
                {
                    if (&other != this)
                        copy(other);
                    return *this;
                }
                /** Tests if the iterator objects on the left side and the right side of the operator are equal. */
                bool operator ==(const iterator &other) const
                {
                    return m_current == other.m_current && m_context == other.m_context;
                }
                /** Tests if the iterator objects on the left side and the right side of the operator are not equal. */
                bool operator !=(const iterator &other) const
                {
                    return !operator == (other);
                }
                /** Return the element currently pointed to by the iterator. */
                NXOPENCPP_MOTIONEXPORT  value_type operator * ();
                /** Points the iterator to next element. */
                iterator & operator ++()
                {
                    next();
                    return *this;
                }
                /** Points the iterator to next element. */
                iterator operator ++(int)
                {
                    iterator tmp(*this);
                    ++*this;
                    return tmp;
                }
            private:
                void copy(const iterator &other)
                {
                    m_context = other.m_context;
                    m_current = other.m_current;
                    for (int i = 0; i < sizeof(m_state)/sizeof(m_state[0]); i++)
                         m_state[i] = other.m_state[i];
                }
                NXOPENCPP_MOTIONEXPORT  void next();
                NXOpen::Motion::ScalarTorqueCollection *m_context;
                tag_t m_current;
                unsigned int m_state[8];
            };
            /** Returns an iterator addressing the first element. */
            iterator begin();
            /** Returns an iterator addressing one past the last element. */
            iterator end()
            {
                return iterator(this);
            }
            /**   Return  @link  Motion::ScalarTorqueBuilder   Motion::ScalarTorqueBuilder @endlink  object   @return  ScalarTorqueBuilder object 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: NXOpen::Motion::ScalarTorqueBuilder * CreateScalarTorqueBuilder
            (
                NXOpen::Motion::ScalarTorque * scalarTorque /** @link Motion::ScalarTorque Motion::ScalarTorque@endlink  to be edited, 
                                                                                              if NULL then create a new one */
            );
            /** Finds the @link  Motion::ScalarTorque   Motion::ScalarTorque @endlink  with the given name.
                    An exception will be thrown if no object can be found with given name.  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: NXOpen::Motion::ScalarTorque * FindObject
            (
                const NXString & name /** name */ 
            );
            /** Finds the @link  Motion::ScalarTorque   Motion::ScalarTorque @endlink  with the given name.
                    An exception will be thrown if no object can be found with given name.  @return  
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            NXOpen::Motion::ScalarTorque * FindObject
            (
                const char * name /** name */ 
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
