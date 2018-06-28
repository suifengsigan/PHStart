#ifndef NXOpen_ASSEMBLIES_EXPLOSION_HXX_INCLUDED
#define NXOpen_ASSEMBLIES_EXPLOSION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Assemblies_Explosion.ja
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
#include <NXOpen/NXObject.hxx>
#include <NXOpen/libnxopencpp_assemblies_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Assemblies
    {
        class Explosion;
    }
    class NXObject;
    namespace Assemblies
    {
        class _ExplosionBuilder;
        class ExplosionImpl;
        /** Represents an explosion. An explosion is a view containing parts or subassemblies
                that have been displaced from their real model positions.
             <br> Use the @link ExplosionCollection ExplosionCollection@endlink  to create an explosion. <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ASSEMBLIESEXPORT  Explosion : public NXObject
        {
            private: ExplosionImpl * m_explosion_impl;
            private: friend class  _ExplosionBuilder;
            protected: Explosion();
            public: ~Explosion();
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
