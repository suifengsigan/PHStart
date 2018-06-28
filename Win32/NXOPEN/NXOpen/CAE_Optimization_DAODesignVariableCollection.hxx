#ifndef NXOpen_CAE_OPTIMIZATION_DAODESIGNVARIABLECOLLECTION_HXX_INCLUDED
#define NXOpen_CAE_OPTIMIZATION_DAODESIGNVARIABLECOLLECTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_Optimization_DAODesignVariableCollection.ja
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
        namespace Optimization
        {
            class DAODesignVariableCollection;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class DAOSolution;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class DAODesignVariable;
        }
    }
    namespace CAE
    {
        namespace Optimization
        {
            class DAODesignVariableCollectionImpl;
            /** Represents the collection of optimization solution design variable  <br> To obtain an instance of this class, refer to @link CAE::Optimization::DAOSolution CAE::Optimization::DAOSolution@endlink  <br> 
             <br>  Created in NX8.0.0.  <br>  
            */
            class NXOPENCPP_CAEEXPORT  DAODesignVariableCollection : public TaggedObjectCollection
            {
                private: DAODesignVariableCollectionImpl * m_daodesignvariablecollection_impl;
                private: NXOpen::CAE::Optimization::DAOSolution* m_owner;
                /// \cond NX_NO_DOC 
                public: explicit DAODesignVariableCollection(NXOpen::CAE::Optimization::DAOSolution *owner);


                /// \endcond 
                public: 
                /**Returns the tag of this object.  */
                tag_t Tag() const; 
                public: ~DAODesignVariableCollection();
                /** Iterator for accessing the contents of the collection. */
                //lint -sem(NXOpen::CAE::Optimization::DAODesignVariableCollection::iterator::copy,initializer)
                class iterator
                {
                public:
                    /** Value type associated with iterator*/ 

                    typedef CAE::Optimization::DAODesignVariable * value_type;
                    /** Default constructor */
                    iterator() : m_context(NULL), m_current(NULL_TAG)
                    {
                    } //lint !e1401 m_state is not initialized
                    /// \cond NX_NO_DOC
                    explicit iterator(NXOpen::CAE::Optimization::DAODesignVariableCollection *context) : m_context(context), m_current(NULL_TAG)
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
                    NXOPENCPP_CAEEXPORT  value_type operator * ();
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
                    NXOPENCPP_CAEEXPORT  void next();
                    NXOpen::CAE::Optimization::DAODesignVariableCollection *m_context;
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
                /** Finds an optimization solution design variable with a specified name  @return  Design variable 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_design_sim ("NX Design Simulation") */
                public: NXOpen::CAE::Optimization::DAODesignVariable * FindObject
                (
                    const NXString & designVariableName /** Design variable name */
                );
                /** Finds an optimization solution design variable with a specified name  @return  Design variable 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_design_sim ("NX Design Simulation") */
                NXOpen::CAE::Optimization::DAODesignVariable * FindObject
                (
                    const char * designVariableName /** Design variable name */
                );
            }; //lint !e1712 default constructor not defined for class  

        }
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
