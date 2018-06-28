#ifndef NXOpen_MECHATRONICS_OBJECTSINKBUILDER_HXX_INCLUDED
#define NXOpen_MECHATRONICS_OBJECTSINKBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_ObjectSinkBuilder.ja
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
#include <NXOpen/Mechatronics_ObjectSinkBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
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
        class ObjectSinkBuilder;
    }
    class Builder;
    namespace Mechatronics
    {
        class CollisionSensor;
    }
    namespace Mechatronics
    {
        class SelectCollisionSensorList;
    }
    class NXObject;
    class SelectNXObjectList;
    namespace Mechatronics
    {
        class _ObjectSinkBuilderBuilder;
        class ObjectSinkBuilderImpl;
        /** Represents a @link Mechatronics::ObjectSink Mechatronics::ObjectSink@endlink  builder.  <br> To create a new instance of this class, use @link Mechatronics::ObjectSinkCollection::CreateObjectSinkBuilder Mechatronics::ObjectSinkCollection::CreateObjectSinkBuilder@endlink  <br> 
         <br>  Created in NX7.5.1.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  ObjectSinkBuilder : public Builder
        {
            /** the delete option. */
            public: enum DeleteSourceType
            {
                DeleteSourceTypeAnycopiedobjects/** Any copied objects */,
                DeleteSourceTypeSelectedsources/** Selected sources   */
            };

            private: ObjectSinkBuilderImpl * m_objectsinkbuilder_impl;
            private: friend class  _ObjectSinkBuilderBuilder;
            protected: ObjectSinkBuilder();
            public: ~ObjectSinkBuilder();
            /**Returns  the object select. This can be a @link CollisionSensor CollisionSensor@endlink . 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Mechatronics::SelectCollisionSensorList * CollisionSensor
            (
            );
            /** Sets the collision sensor object. 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetCollisionSensor
            (
                const std::vector<NXOpen::Mechatronics::CollisionSensor *> & objects /** Collision Sensor objects*/
            );
            /**Returns  the option to delete source. 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Mechatronics::ObjectSinkBuilder::DeleteSourceType DeleteSource
            (
            );
            /**Sets  the option to delete source. 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetDeleteSource
            (
                NXOpen::Mechatronics::ObjectSinkBuilder::DeleteSourceType deleteSource /** deletesource */ 
            );
            /**Returns  the source select. 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::SelectNXObjectList * Source
            (
            );
            /** Sets the source. 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetSource
            (
                const std::vector<NXOpen::NXObject *> & objects /**Source objects*/
            );
            /**Returns  the name. 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXString Name
            (
            );
            /**Sets  the name. 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetName
            (
                const NXString & name /** name */ 
            );
            /**Sets  the name. 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetName
            (
                const char * name /** name */ 
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
