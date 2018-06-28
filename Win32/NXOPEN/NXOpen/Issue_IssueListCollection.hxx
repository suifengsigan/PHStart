#ifndef NXOpen_ISSUE_ISSUELISTCOLLECTION_HXX_INCLUDED
#define NXOpen_ISSUE_ISSUELISTCOLLECTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Issue_IssueListCollection.ja
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
#include <NXOpen/TaggedObjectCollection.hxx>
#include <NXOpen/libnxopencpp_issue_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Issue
    {
        class IssueListCollection;
    }
    namespace Issue
    {
        class IssueManager;
    }
    namespace Issue
    {
        class IssueList;
    }
    namespace Issue
    {
        class IssueListCollectionImpl;
        /** Represents a @link Issue::IssueListCollection Issue::IssueListCollection@endlink   <br> To obtain an instance of this class, refer to @link Issue::IssueManager Issue::IssueManager@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_ISSUEEXPORT  IssueListCollection : public TaggedObjectCollection
        {
            private: IssueListCollectionImpl * m_issuelistcollection_impl;
            private: NXOpen::Issue::IssueManager* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit IssueListCollection(NXOpen::Issue::IssueManager *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~IssueListCollection();
            /** Iterator for accessing the contents of the collection. */
            //lint -sem(NXOpen::Issue::IssueListCollection::iterator::copy,initializer)
            class iterator
            {
            public:
                /** Value type associated with iterator*/ 

                typedef Issue::IssueList * value_type;
                /** Default constructor */
                iterator() : m_context(NULL), m_current(NULL_TAG)
                {
                } //lint !e1401 m_state is not initialized
                /// \cond NX_NO_DOC
                explicit iterator(NXOpen::Issue::IssueListCollection *context) : m_context(context), m_current(NULL_TAG)
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
                NXOPENCPP_ISSUEEXPORT  value_type operator * ();
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
                NXOPENCPP_ISSUEEXPORT  void next();
                NXOpen::Issue::IssueListCollection *m_context;
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
            /** Finds the @link Issue::IssueList Issue::IssueList@endlink  with the given name.
                        An exception will be thrown if no object can be found with given name.  @return  @link Issue::IssueList Issue::IssueList@endlink  with this name. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: NXOpen::Issue::IssueList * FindObject
            (
                const NXString & name /** The name of the @link Issue::IssueList Issue::IssueList@endlink . */
            );
            /** Finds the @link Issue::IssueList Issue::IssueList@endlink  with the given name.
                        An exception will be thrown if no object can be found with given name.  @return  @link Issue::IssueList Issue::IssueList@endlink  with this name. 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            NXOpen::Issue::IssueList * FindObject
            (
                const char * name /** The name of the @link Issue::IssueList Issue::IssueList@endlink . */
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
