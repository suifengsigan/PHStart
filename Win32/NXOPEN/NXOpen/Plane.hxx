#ifndef NXOpen_PLANE_HXX_INCLUDED
#define NXOpen_PLANE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Plane.ja
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
#include <NXOpen/IBasePlane.hxx>
#include <NXOpen/INXObject.hxx>
#include <NXOpen/IOrientation.hxx>
#include <NXOpen/IPlane.hxx>
#include <NXOpen/ISurface.hxx>
#include <NXOpen/PlaneTypes.hxx>
#include <NXOpen/SmartObject.hxx>
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
    class Plane;
    namespace Assemblies
    {
        class Component;
    }
    class BasePart;
    class Expression;
    class INXObject;
    class IOrientation;
    class IPlane;
    class ISurface;
    class NXObject;
    class SmartObject;
    class _PlaneBuilder;
    class PlaneImpl;
    /** Represents an @link Plane Plane@endlink  class. 
      <br> No Creator because of a problem with arrays in APIWRAP <br> 
     <br>  Created in NX4.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  Plane : public SmartObject, public virtual IPlane, public virtual ISurface, public virtual IOrientation
    {
        private: PlaneImpl * m_plane_impl;
        private: friend class  _PlaneBuilder;
        protected: Plane();
        public: ~Plane();
        /** Creates an @link Plane Plane@endlink  using a datum plane feature.  @return  
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Plane * CopySoPlane
        (
        );
        /** Destroy the plane object 
         <br>  Created in NX6.0.3.  <br>  
         <br> License requirements : None */
        public: void DestroyPlane
        (
        );
        /** Set PLANE_parms to plane to make it smart plane  
         <br>  Created in NX7.0.0.  <br>  
         <br> License requirements : None */
        public: void ConvertToSmartPlane
        (
        );
        /** Sets a plane type 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetMethod
        (
            NXOpen::PlaneTypes::MethodType type /** type */ 
        );
        /**Returns  a plane type 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual NXOpen::PlaneTypes::MethodType Method
        (
        );
        /**Returns  the origin of the plane 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual NXOpen::Point3d Origin
        (
        );
        /**Sets  the origin of the plane 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetOrigin
        (
            const NXOpen::Point3d & origin /** origin */ 
        );
        /**Returns  the normal of the plane 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual NXOpen::Vector3d Normal
        (
        );
        /**Sets  the normal of the plane 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetNormal
        (
            const NXOpen::Vector3d & normal /** normal */ 
        );
        /**Returns  the matrix of the plane 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: virtual NXOpen::Matrix3x3 Matrix
        (
        );
        /**Sets  the matrix of the plane 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetMatrix
        (
            const NXOpen::Matrix3x3 & matrix /** matrix */ 
        );
        /** Sets the plane expression.  
             Only valid for the following types:  @link PlaneTypes::MethodTypeFrenet PlaneTypes::MethodTypeFrenet@endlink  or
              @link PlaneTypes::MethodTypeDistance PlaneTypes::MethodTypeDistance@endlink .
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetExpression
        (
            const NXString & valueExpression /** offset value   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /** Sets the plane expression.  
             Only valid for the following types:  @link PlaneTypes::MethodTypeFrenet PlaneTypes::MethodTypeFrenet@endlink  or
              @link PlaneTypes::MethodTypeDistance PlaneTypes::MethodTypeDistance@endlink .
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        void SetExpression
        (
            const char * valueExpression /** offset value   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /**Returns  the plane expression.   
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual NXOpen::Expression * Expression
        (
        );
        /** Flip the direction of the plane 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetFlip
        (
            bool flip /** flip direction  */
        );
        /**Returns  the flip direction of the plane 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual bool Flip
        (
        );
        /** Sets the arclenth or the percent value 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetPercent
        (
            bool percent /** arclength or percent value */
        );
        /**Returns  the arclenth or the percent value 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual bool Percent
        (
        );
        /** Sets the geometry 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetGeometry
        (
            const std::vector<NXOpen::NXObject *> & geom /** geom */ 
        );
        /** Returns the geometry  @return  
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual std::vector<NXOpen::NXObject *> GetGeometry
        (
        );
        /** Evaluates the plane 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual void Evaluate
        (
        );
        /** Sets the alternate type 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetAlternate
        (
            NXOpen::PlaneTypes::AlternateType type /** type */ 
        );
        /** Returns the alternate type  @return    
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual NXOpen::PlaneTypes::AlternateType GetAlternate
        (
        );
        /** Returns the number of alternate solutions  @return    
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual int GetNumberOfAlternate
        (
        );
        /** Sets the reverse_section 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetReverseSection
        (
            bool reverseSection /** reverse section */ 
        );
        /** Returns the reverse section  @return    
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual bool GetReverseSection
        (
        );
        /** Sets subtype for a specific plane type where the alternate solution cannot handle.
                Indeed, this is for frenet type only so far, after the Nissan enhancement in NX6. 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetFrenetSubtype
        (
            NXOpen::PlaneTypes::FrenetSubtype subtype /** subtype */ 
        );
        /**Returns  the subtype of on curve type of plane fron NX6 onwards.
                It is a valid function for and only for on-curve type plane of NX6 onwards. 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: virtual NXOpen::PlaneTypes::FrenetSubtype FrenetSubtype
        (
        );
        /** Sets the reverse side 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetReverseSide
        (
            bool reverseSide /** reverse side */ 
        );
        /** Returns the reverse side  @return    
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: virtual bool GetReverseSide
        (
        );
        /** Set to plane update 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetUpdateOption
        (
            NXOpen::SmartObject::UpdateOption update /** update */ 
        );
        /** Sets the plane offset expression value. 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetOffsetExpression
        (
            const NXString & valueExpression /** offset value   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /** Sets the plane offset expression value. 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        void SetOffsetExpression
        (
            const char * valueExpression /** offset value   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /**Returns  the plane offset expression. 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: virtual NXOpen::Expression * OffsetExpression
        (
        );
        /**Sets  the plane offset expression. 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetOffsetExpression
        (
            NXOpen::Expression * valueExpression /** offset value */
        );
        /** Sets the flip state of the offset direction of the plane 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: virtual void SetOffsetFlip
        (
            bool flip /** offset flip direction  */
        );
        /**Returns  the flip state of the offset direction of the plane 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: virtual bool OffsetFlip
        (
        );
        /** Remove all offset data from the plane 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: virtual void RemoveOffsetData
        (
        );
        /** Replace the expression in on curve plane plane 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: virtual void ReplaceExpression
        (
            NXOpen::Expression * expTag /** exptag */ 
        );
        /** Reset the expression value in on curve plane plane 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: virtual void ResetExpressionValue
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
