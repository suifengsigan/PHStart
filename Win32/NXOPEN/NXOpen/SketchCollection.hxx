#ifndef NXOpen_SKETCHCOLLECTION_HXX_INCLUDED
#define NXOpen_SKETCHCOLLECTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SketchCollection.ja
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
#include <NXOpen/BasePart.hxx>
#include <NXOpen/ConvertToFromReferenceBuilder.hxx>
#include <NXOpen/InferredConstraintsBuilder.hxx>
#include <NXOpen/SketchAlongPathBuilder.hxx>
#include <NXOpen/SketchAssociativeTrim.hxx>
#include <NXOpen/SketchAssociativeTrimBuilder.hxx>
#include <NXOpen/SketchAutoConstrainBuilder.hxx>
#include <NXOpen/SketchAutoDimensionBuilder.hxx>
#include <NXOpen/SketchChamferBuilder.hxx>
#include <NXOpen/SketchConicBuilder.hxx>
#include <NXOpen/SketchConstraintBuilder.hxx>
#include <NXOpen/SketchCornerBuilder.hxx>
#include <NXOpen/SketchDimensionBuilder.hxx>
#include <NXOpen/SketchEditDefiningSectionBuilder.hxx>
#include <NXOpen/SketchEllipseBuilder.hxx>
#include <NXOpen/SketchInDraftingBuilder.hxx>
#include <NXOpen/SketchInPlaceBuilder.hxx>
#include <NXOpen/SketchMakeSymmetricBuilder.hxx>
#include <NXOpen/SketchMirrorBuilder.hxx>
#include <NXOpen/SketchMirrorPatternBuilder.hxx>
#include <NXOpen/SketchOffset.hxx>
#include <NXOpen/SketchOffsetBuilder.hxx>
#include <NXOpen/SketchPasteBuilder.hxx>
#include <NXOpen/SketchPattern.hxx>
#include <NXOpen/SketchPatternBuilder.hxx>
#include <NXOpen/SketchPolygon.hxx>
#include <NXOpen/SketchPolygonBuilder.hxx>
#include <NXOpen/SketchProjectBuilder.hxx>
#include <NXOpen/SketchQuickExtendBuilder.hxx>
#include <NXOpen/SketchQuickTrimBuilder.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/TaggedObjectCollection.hxx>
#include <NXOpen/type.hxx>
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
    class SketchCollection;
    class Part;
    class Sketch;
    class ConvertToFromReferenceBuilder;
    namespace Features
    {
        class Feature;
    }
    namespace Features
    {
        class TrimCurveBuilder;
    }
    class IReferenceAxis;
    class ISurface;
    class InferredConstraintsBuilder;
    class NXObject;
    class SketchAlongPathBuilder;
    class SketchAssociativeTrim;
    class SketchAssociativeTrimBuilder;
    class SketchAutoConstrainBuilder;
    class SketchAutoDimensionBuilder;
    class SketchChamferBuilder;
    class SketchConicBuilder;
    class SketchConstraintBuilder;
    class SketchCornerBuilder;
    class SketchDimensionBuilder;
    class SketchDimensionalConstraint;
    class SketchEditDefiningSectionBuilder;
    class SketchEllipseBuilder;
    class SketchInDraftingBuilder;
    class SketchInPlaceBuilder;
    class SketchIntersectionCurve;
    class SketchIntersectionCurveBuilder;
    class SketchIntersectionPoint;
    class SketchIntersectionPointBuilder;
    class SketchMakeSymmetricBuilder;
    class SketchMirrorBuilder;
    class SketchMirrorPatternBuilder;
    class SketchOffset;
    class SketchOffsetBuilder;
    class SketchPasteBuilder;
    class SketchPattern;
    class SketchPatternBuilder;
    class SketchPolygon;
    class SketchPolygonBuilder;
    class SketchProjectBuilder;
    class SketchQuickExtendBuilder;
    class SketchQuickTrimBuilder;
    class SmartObject;
    class Spline;
    class SketchCollectionImpl;
    /** Represents a collection of sketches  <br> To obtain an instance of this class, refer to @link Part Part@endlink  <br> 
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  SketchCollection : public TaggedObjectCollection
    {
        private: SketchCollectionImpl * m_sketchcollection_impl;
        private: NXOpen::Part* m_owner;
        /// \cond NX_NO_DOC 
        public: explicit SketchCollection(NXOpen::Part *owner);


        /// \endcond 
        public: 
        /**Returns the tag of this object.  */
        tag_t Tag() const; 
        public: ~SketchCollection();
        /** Iterator for accessing the contents of the collection. */
        //lint -sem(NXOpen::SketchCollection::iterator::copy,initializer)
        class iterator
        {
        public:
            /** Value type associated with iterator*/ 

            typedef Sketch * value_type;
            /** Default constructor */
            iterator() : m_context(NULL), m_current(NULL_TAG)
            {
            } //lint !e1401 m_state is not initialized
            /// \cond NX_NO_DOC
            explicit iterator(NXOpen::SketchCollection *context) : m_context(context), m_current(NULL_TAG)
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
            NXOPENCPPEXPORT  value_type operator * ();
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
            NXOPENCPPEXPORT  void next();
            NXOpen::SketchCollection *m_context;
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
        /**
            Creates a sketch
             @return  the new sketch 
         <br>  @deprecated Deprecated in NX7.5.3.  Use @link SketchInPlaceBuilder SketchInPlaceBuilder@endlink  instead. <br>  

         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public:  NX_DEPRECATED("Deprecated in NX7.5.3.  Use SketchInPlaceBuilder instead.") NXOpen::Sketch * CreateSketch
        (
            const NXString & name /** Name of the sketch.  The name will be converted to upper case. If this is an empty string or NULL, a name will be provided by the system. */,
            NXOpen::ISurface * attachmentPlane /** A face or datum plane that the sketch will be attached to.  Must be planar. */,
            NXOpen::IReferenceAxis * referenceAxis /** Can be a datum axis, edge, datum plane, face, or NULL.
                                                                    If it is an edge, the edge must be a line segment.  If it is a face, the
                                                                    face must be a plane.  If NULL, the reference_direction is used instead */,
            const NXOpen::Vector3d & referenceDirection /** If reference_axis is NULL,
                                                          this parameter sets the reference direction of the sketch.
                                                          In this case, this parameter must not be (0,0,0).
                                                          If reference_axis is not NULL
                                                          and this parameter is not (0,0,0), this parameter
                                                          determines whether the reference direction should be
                                                          in the same direction as reference_axis
                                                          or in the opposite direction. If this parameter is (0,0,0),
                                                          this parameter is not used.  */,
            NXOpen::AxisOrientation referenceAxisOrientation /** indicates whether the reference axis is horizontal or vertical */,
            NXOpen::Sense referenceAxisSense /** Ignored unless reference_direction
                                       is (0,0,0) and reference_axis is an edge or datum axis.
                                       This parameter indicates whether the reference axis should
                                       be in the same direction as reference_axis or in the opposite
                                       direction */,
            NXOpen::PlaneNormalOrientation normalOrientation /** whether the sketch's Z-axis should be outward or inward */
        );
        /**
            Creates a sketch
             @return  the new sketch 
         <br>  @deprecated Deprecated in NX7.5.3.  Use @link SketchInPlaceBuilder SketchInPlaceBuilder@endlink  instead. <br>  

         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        NXOpen::Sketch * CreateSketch
        (
            const char * name /** Name of the sketch.  The name will be converted to upper case. If this is an empty string or NULL, a name will be provided by the system. */,
            NXOpen::ISurface * attachmentPlane /** A face or datum plane that the sketch will be attached to.  Must be planar. */,
            NXOpen::IReferenceAxis * referenceAxis /** Can be a datum axis, edge, datum plane, face, or NULL.
                                                                    If it is an edge, the edge must be a line segment.  If it is a face, the
                                                                    face must be a plane.  If NULL, the reference_direction is used instead */,
            const NXOpen::Vector3d & referenceDirection /** If reference_axis is NULL,
                                                          this parameter sets the reference direction of the sketch.
                                                          In this case, this parameter must not be (0,0,0).
                                                          If reference_axis is not NULL
                                                          and this parameter is not (0,0,0), this parameter
                                                          determines whether the reference direction should be
                                                          in the same direction as reference_axis
                                                          or in the opposite direction. If this parameter is (0,0,0),
                                                          this parameter is not used.  */,
            NXOpen::AxisOrientation referenceAxisOrientation /** indicates whether the reference axis is horizontal or vertical */,
            NXOpen::Sense referenceAxisSense /** Ignored unless reference_direction
                                       is (0,0,0) and reference_axis is an edge or datum axis.
                                       This parameter indicates whether the reference axis should
                                       be in the same direction as reference_axis or in the opposite
                                       direction */,
            NXOpen::PlaneNormalOrientation normalOrientation /** whether the sketch's Z-axis should be outward or inward */
        );
        /**
            Creates a sketch. This function takes in an argument for the view to create the sketch in a
            drafting member view.
             @return  the new sketch 
         <br>  @deprecated Deprecated in NX7.5.3.  Use @link SketchInDraftingBuilder SketchInDraftingBuilder@endlink  instead. <br>  

         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public:  NX_DEPRECATED("Deprecated in NX7.5.3.  Use SketchInDraftingBuilder instead.") NXOpen::Sketch * CreateSketch
        (
            const NXString & name /** Name of the sketch.  The name will be converted to upper case. If this is an empty string or NULL, a name will be provided by the system. */,
            NXOpen::ISurface * attachmentPlane /** A face or datum plane that the sketch will be attached to.  Must be planar. */,
            NXOpen::IReferenceAxis * referenceAxis /** Can be a datum axis, edge, datum plane, face, or NULL.
                                                                    If it is an edge, the edge must be a line segment.  If it is a face, the
                                                                    face must be a plane.  If NULL, the reference_direction is used instead */,
            const NXOpen::Vector3d & referenceDirection /** If reference_axis is NULL,
                                                          this parameter sets the reference direction of the sketch.
                                                          In this case, this parameter must not be (0,0,0).
                                                          If reference_axis is not NULL
                                                          and this parameter is not (0,0,0), this parameter
                                                          determines whether the reference direction should be
                                                          in the same direction as reference_axis
                                                          or in the opposite direction. If this parameter is (0,0,0),
                                                          this parameter is not used.  */,
            NXOpen::AxisOrientation referenceAxisOrientation /** indicates whether the reference axis is horizontal or vertical */,
            NXOpen::Sense referenceAxisSense /** Ignored unless reference_direction
                                       is (0,0,0) and reference_axis is an edge or datum axis.
                                       This parameter indicates whether the reference axis should
                                       be in the same direction as reference_axis or in the opposite
                                       direction */,
            NXOpen::PlaneNormalOrientation normalOrientation /** whether the sketch's Z-axis should be outward or inward */,
            NXOpen::NXObject * view /** View of the drafting view in which the sketch needsto be created */
        );
        /**
            Creates a sketch. This function takes in an argument for the view to create the sketch in a
            drafting member view.
             @return  the new sketch 
         <br>  @deprecated Deprecated in NX7.5.3.  Use @link SketchInDraftingBuilder SketchInDraftingBuilder@endlink  instead. <br>  

         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        NXOpen::Sketch * CreateSketch
        (
            const char * name /** Name of the sketch.  The name will be converted to upper case. If this is an empty string or NULL, a name will be provided by the system. */,
            NXOpen::ISurface * attachmentPlane /** A face or datum plane that the sketch will be attached to.  Must be planar. */,
            NXOpen::IReferenceAxis * referenceAxis /** Can be a datum axis, edge, datum plane, face, or NULL.
                                                                    If it is an edge, the edge must be a line segment.  If it is a face, the
                                                                    face must be a plane.  If NULL, the reference_direction is used instead */,
            const NXOpen::Vector3d & referenceDirection /** If reference_axis is NULL,
                                                          this parameter sets the reference direction of the sketch.
                                                          In this case, this parameter must not be (0,0,0).
                                                          If reference_axis is not NULL
                                                          and this parameter is not (0,0,0), this parameter
                                                          determines whether the reference direction should be
                                                          in the same direction as reference_axis
                                                          or in the opposite direction. If this parameter is (0,0,0),
                                                          this parameter is not used.  */,
            NXOpen::AxisOrientation referenceAxisOrientation /** indicates whether the reference axis is horizontal or vertical */,
            NXOpen::Sense referenceAxisSense /** Ignored unless reference_direction
                                       is (0,0,0) and reference_axis is an edge or datum axis.
                                       This parameter indicates whether the reference axis should
                                       be in the same direction as reference_axis or in the opposite
                                       direction */,
            NXOpen::PlaneNormalOrientation normalOrientation /** whether the sketch's Z-axis should be outward or inward */,
            NXOpen::NXObject * view /** View of the drafting view in which the sketch needsto be created */
        );
        /** Finds the @link  Sketch   Sketch @endlink  with the given name.
            An exception will be thrown if no object can be found with the given name.
             @return  Sketch with this name 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Sketch * FindObject
        (
            const NXString & name /** The name of the @link Sketch Sketch@endlink  */
        );
        /** Finds the @link  Sketch   Sketch @endlink  with the given name.
            An exception will be thrown if no object can be found with the given name.
             @return  Sketch with this name 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        NXOpen::Sketch * FindObject
        (
            const char * name /** The name of the @link Sketch Sketch@endlink  */
        );
        /** Returns the sketch that owns the specified geometry  @return  The sketch that owns the geometry 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::Sketch * GetOwningSketch
        (
            NXOpen::SmartObject * geometry /** geometry */ 
        );
        /** Creates the builder for intersection curve  @return  
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchIntersectionCurveBuilder * CreateIntersectionCurveBuilder
        (
            NXOpen::SketchIntersectionCurve * operation /** operation */ 
        );
        /** Creates the builder for intersection point  @return  
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchIntersectionPointBuilder * CreateIntersectionPointBuilder
        (
            NXOpen::SketchIntersectionPoint * operation /** operation */ 
        );
        /** Creates a @link SketchProjectBuilder SketchProjectBuilder@endlink   @return  ProjectBuilder object
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchProjectBuilder * CreateProjectBuilder
        (
            NXOpen::Features::Feature * operation /** The feature for the @link SketchProjectBuilder SketchProjectBuilder@endlink  to be edited,
                                                                       if NULL then create a new one */
        );
        /** Creates a @link SketchCornerBuilder SketchCornerBuilder@endlink   @return  CornerBuilder object 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchCornerBuilder * CreateCornerBuilder
        (
        );
        /** Creates a @link SketchAutoConstrainBuilder SketchAutoConstrainBuilder@endlink   @return  Sketch Auto-Constrain Builder object
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchAutoConstrainBuilder * CreateAutoConstrainBuilder
        (
        );
        /** Creates a @link SketchOffsetBuilder SketchOffsetBuilder@endlink . This command only supports creation of up to 200 output curves. That means number
                of curves in input section multiplied by the number of copies must be less than or equal to 200.  @return  
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchOffsetBuilder * CreateSketchOffsetBuilder
        (
            NXOpen::SketchOffset * offCon /** Offset constraint */
        );
        /** Creates a @link SketchAssociativeTrimBuilder SketchAssociativeTrimBuilder@endlink   @return  
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchAssociativeTrimBuilder * CreateSketchAssociativeTrimBuilder
        (
            NXOpen::SketchAssociativeTrim * trimCon /** Trim constraint */
        );
        /** Creates a @link ConvertToFromReferenceBuilder ConvertToFromReferenceBuilder@endlink   @return  Sketch ConvertToFromReferenceBuilder object
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::ConvertToFromReferenceBuilder * CreateConvertToFromReferenceBuilder
        (
        );
        /** Creates a @link InferredConstraintsBuilder InferredConstraintsBuilder@endlink   @return  InferredConstraintsBuilder object
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::InferredConstraintsBuilder * CreateInferredConstraintsBuilder
        (
        );
        /** Creates a @link SketchMirrorBuilder SketchMirrorBuilder@endlink   @return  SketchMirrorBuilder object 
         <br>  @deprecated Deprecated in NX8.0.0.  Use @link SketchMirrorPatternBuilder SketchMirrorPatternBuilder@endlink  instead. <br>  

         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Use SketchMirrorPatternBuilder instead.") NXOpen::SketchMirrorBuilder * CreateSketchMirrorBuilder
        (
        );
        /** Creates a @link Features::TrimCurveBuilder Features::TrimCurveBuilder@endlink   @return  Trim Curve Builder object 
         <br>  @deprecated Deprecated in NX7.5.0.  <br>  

         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public:  NX_DEPRECATED("Deprecated in NX7.5.0") NXOpen::Features::TrimCurveBuilder * CreateTrimCurveBuilder
        (
            NXOpen::Spline * spline /** The trimmed curve to be edited */
        );
        /** Creates a @link SketchDimensionBuilder SketchDimensionBuilder@endlink   @return  DimensionBuilder object 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchDimensionBuilder * CreateDimensionBuilder
        (
            NXOpen::SketchDimensionalConstraint * constraint /** The sketch dimensional constraint to be edited. */
        );
        /** Creates a @link SketchQuickExtendBuilder SketchQuickExtendBuilder@endlink   @return  Sketch Quick-Extend Builder object 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchQuickExtendBuilder * CreateQuickExtendBuilder
        (
        );
        /** Creates a @link SketchQuickTrimBuilder SketchQuickTrimBuilder@endlink   @return  Sketch QuickTrim Builder object
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchQuickTrimBuilder * CreateQuickTrimBuilder
        (
        );
        /** Creates a @link SketchInPlaceBuilder SketchInPlaceBuilder@endlink . This function is deprecated because it infers the placement face 
                and the horizontal reference and sets them into the builder. This behavior is not supported after NX7.5.0.  @return  SketchInPlaceBuilder object
         <br>  @deprecated Deprecated in NX7.5.0.  Use @link SketchCollection::CreateNewSketchInPlaceBuilder SketchCollection::CreateNewSketchInPlaceBuilder@endlink  instead. <br>  

         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public:  NX_DEPRECATED("Deprecated in NX7.5.0.  Use SketchCollection::CreateNewSketchInPlaceBuilder instead.") NXOpen::SketchInPlaceBuilder * CreateSketchInPlaceBuilder
        (
            NXOpen::Sketch * operation /** The @link Sketch Sketch@endlink  to reattach or NULL to create                                                          a new one */
        );
        /** Creates a @link SketchInPlaceBuilder SketchInPlaceBuilder@endlink . This function doesn't infer the placement face and the horizontal reference
                for the builder when in creation mode. The placement face and horizontal reference can be set using the appropriate 
                @link SelectObject SelectObject@endlink  available from the builder.  @return  SketchInPlaceBuilder object
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchInPlaceBuilder * CreateNewSketchInPlaceBuilder
        (
            NXOpen::Sketch * operation /** The @link Sketch Sketch@endlink  to reattach or NULL to create                                                          a new one */
        );
        /** Creates a @link SketchAlongPathBuilder SketchAlongPathBuilder@endlink   @return  SketchAlongPathBuilder object
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchAlongPathBuilder * CreateSketchAlongPathBuilder
        (
            NXOpen::Sketch * operation /** The @link Sketch Sketch@endlink  to reattach or NULL to create                                                          a new one */
        );
        /** Creates a @link SketchInDraftingBuilder SketchInDraftingBuilder@endlink   @return  SketchInDraftingBuilder object
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchInDraftingBuilder * CreateSketchInDraftingBuilder
        (
        );
        /** Creates a @link SketchEllipseBuilder SketchEllipseBuilder@endlink   @return  SketchEllipseBuilder object
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchEllipseBuilder * CreateSketchEllipseBuilder
        (
            NXOpen::NXObject * ellipse /** The ellipse to be edited. */
        );
        /** Creates a @link SketchConicBuilder SketchConicBuilder@endlink   @return  SketchConicBuilder object
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchConicBuilder * CreateSketchConicBuilder
        (
            NXOpen::NXObject * conic /** The conic to be edited. */
        );
        /** Creates a @link SketchChamferBuilder SketchChamferBuilder@endlink   @return  Sketch Chamfer Builder object 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchChamferBuilder * CreateSketchChamferBuilder
        (
        );
        /** Creates a @link SketchAutoDimensionBuilder SketchAutoDimensionBuilder@endlink   @return  Sketch Auto-Dimension Builder object
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchAutoDimensionBuilder * CreateAutoDimensionBuilder
        (
        );
        /** Creates a @link SketchPatternBuilder SketchPatternBuilder@endlink   @return  
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchPatternBuilder * CreateSketchPatternBuilder
        (
            NXOpen::SketchPattern * con /** Pattern constraint */
        );
        /** Creates a @link SketchMirrorPatternBuilder SketchMirrorPatternBuilder@endlink   @return  
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchMirrorPatternBuilder * CreateSketchMirrorPatternBuilder
        (
            NXOpen::SketchPattern * con /** Pattern constraint */
        );
        /** Creates a @link SketchMakeSymmetricBuilder SketchMakeSymmetricBuilder@endlink   @return  MakeSymmetricBuilder object
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchMakeSymmetricBuilder * CreateMakeSymmetricBuilder
        (
        );
        /** Creates a @link SketchPolygonBuilder SketchPolygonBuilder@endlink   @return  SketchPolygonBuilder object
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::SketchPolygonBuilder * CreateSketchPolygonBuilder
        (
            NXOpen::SketchPolygon * polygonconstraint /** The polygon constraint. The only acceptable value here is NULL. */
        );
        /** Creates a @link SketchPasteBuilder SketchPasteBuilder@endlink   @return  
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchPasteBuilder * CreateSketchPasteBuilder
        (
            const std::vector<NXOpen::Sketch *> & sketches /** @link Sketch Sketch@endlink  to be copy/paste */
        );
        /** Creates a @link SketchEditDefiningSectionBuilder SketchEditDefiningSectionBuilder@endlink   @return  Edit Defining Section Builder object
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::SketchEditDefiningSectionBuilder * CreateEditDefiningSectionBuilder
        (
        );
        /** Creates a @link SketchConstraintBuilder SketchConstraintBuilder@endlink   @return  
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") OR drafting ("DRAFTING") */
        public: NXOpen::SketchConstraintBuilder * CreateConstraintBuilder
        (
        );
    }; //lint !e1712 default constructor not defined for class  

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
