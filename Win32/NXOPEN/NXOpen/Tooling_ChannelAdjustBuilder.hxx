#ifndef NXOpen_TOOLING_CHANNELADJUSTBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_CHANNELADJUSTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_ChannelAdjustBuilder.ja
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
#include <NXOpen/Expression.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/Tooling_ChannelAdjustBuilder.hxx>
#include <NXOpen/libnxopencpp_tooling_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Tooling
    {
        class ChannelAdjustBuilder;
    }
    class Builder;
    class Direction;
    class Expression;
    class ScCollector;
    class SelectBodyList;
    namespace Tooling
    {
        class _ChannelAdjustBuilderBuilder;
        class ChannelAdjustBuilderImpl;
        /**The builder class for Channel Adjust which assists you
               to adjust the postion and the length of the channel. <br> To create a new instance of this class, use @link Tooling::ChannelAdjustCollection::CreateChannelAdjustBuilder Tooling::ChannelAdjustCollection::CreateChannelAdjustBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Distance.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        RepositionMethod </td> <td> 
         
        Along </td> </tr> 

        </table>  

         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  ChannelAdjustBuilder : public Builder
        {
            /** the adjust method. */
            public: enum AdjustType
            {
                AdjustTypeDistance/** Reposition the target channels. */,
                AdjustTypeBaffleLength/** Change the length of the baffles. */
            };

            /** the vector adjust method. */
            public: enum VectorMethod
            {
                VectorMethodAlong/** Reposition the target channels along the vector specified. */,
                VectorMethodPerpendicular/** Reposition the target channels Perpendicular the vector specified. */
            };

            private: ChannelAdjustBuilderImpl * m_channeladjustbuilder_impl;
            private: friend class  _ChannelAdjustBuilderBuilder;
            protected: ChannelAdjustBuilder();
            public: ~ChannelAdjustBuilder();
            /**Returns  the method for adjusting the cooling channels. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::ChannelAdjustBuilder::AdjustType AdjustMethod
            (
            );
            /**Sets  the method for adjusting the cooling channels. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetAdjustMethod
            (
                NXOpen::Tooling::ChannelAdjustBuilder::AdjustType adjustMethod /** adjustmethod */ 
            );
            /**Returns  the cooling channel to be adjusted. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectBodyList * TargetChannel
            (
            );
            /**Returns  the reference faces for calculating the distance to the cooling channels. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::ScCollector * ReferenceFace
            (
            );
            /**Returns  the method for moving the cooling channels. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::ChannelAdjustBuilder::VectorMethod RepositionMethod
            (
            );
            /**Sets  the method for moving the cooling channels. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetRepositionMethod
            (
                NXOpen::Tooling::ChannelAdjustBuilder::VectorMethod repositionMethod /** repositionmethod */ 
            );
            /**Returns  the vector specified for the adjust direction. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * AdjustVector
            (
            );
            /**Sets  the vector specified for the adjust direction. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: void SetAdjustVector
            (
                NXOpen::Direction * adjustVector /** adjustvector */ 
            );
            /**Returns  the distance between the channels and faces. 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Distance
            (
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
