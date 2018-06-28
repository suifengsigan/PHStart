#ifndef NXOpen_PART_HXX_INCLUDED
#define NXOpen_PART_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Part.ja
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
#include <NXOpen/ExpressionCollectorSet.hxx>
#include <NXOpen/ExpressionSectionSet.hxx>
#include <NXOpen/GeometricUtilities_BoundaryDefinitionBuilder.hxx>
#include <NXOpen/GeometricUtilities_BoundingObjectBuilder.hxx>
#include <NXOpen/GeometricUtilities_PointsFromFileBuilder.hxx>
#include <NXOpen/GeometricUtilities_SelectionList.hxx>
#include <NXOpen/GeometricUtilities_TwoExpressionsCollectorSet.hxx>
#include <NXOpen/PartFamilyManager.hxx>
#include <NXOpen/PartFamilyMemberData.hxx>
#include <NXOpen/PartFamilyMemberValues.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/Section.hxx>
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
    class Part;
    namespace Annotations
    {
        class AnnotationManager;
    }
    namespace Annotations
    {
        class DimensionCollection;
    }
    namespace Annotations
    {
        class GdtCollection;
    }
    namespace Annotations
    {
        class LabelCollection;
    }
    namespace Annotations
    {
        class NoteCollection;
    }
    namespace Annotations
    {
        class PmiManager;
    }
    namespace Assemblies
    {
        class ComponentGroupCollection;
    }
    namespace Assemblies
    {
        namespace ProductInterface
        {
            class Collection;
        }
    }
    namespace Assemblies
    {
        class RelinkerCollection;
    }
    class BasePart;
    class Body;
    class BodyCollection;
    namespace BodyDes
    {
        class OnestepUnformCollection;
    }
    namespace CAM
    {
        class CAMSetup;
    }
    namespace CAM
    {
        class InspectionSetup;
    }
    class ClipboardOperationsManager;
    class CutViewCollection;
    namespace Die
    {
        class DieSimCollection;
    }
    class DraftPointDataCollection;
    namespace Drafting
    {
        class DraftingApplicationManager;
    }
    class DraftingManager;
    class DrawingCompareManager;
    namespace Drawings
    {
        class DraftingViewCollection;
    }
    namespace Drawings
    {
        class DrawingSheetCollection;
    }
    namespace Drawings
    {
        class ViewAlignmentCollection;
    }
    class ExpressionCollectorSet;
    class ExpressionSectionSet;
    namespace Facet
    {
        class FacetedBodyCollection;
    }
    namespace Features
    {
        class Feature;
    }
    namespace Features
    {
        class FeatureCollection;
    }
    namespace Features
    {
        namespace ShipDesign
        {
            class PenetrationManager;
        }
    }
    namespace GeometricUtilities
    {
        class BlendStopshortBuilderCollection;
    }
    namespace GeometricUtilities
    {
        class BoundaryDefinitionBuilder;
    }
    namespace GeometricUtilities
    {
        class BoundingObjectBuilder;
    }
    namespace GeometricUtilities
    {
        class FacePlaneSelectionBuilderCollection;
    }
    namespace GeometricUtilities
    {
        class FaceSetDataCollection;
    }
    namespace GeometricUtilities
    {
        class FaceSetOffsetCollection;
    }
    namespace GeometricUtilities
    {
        class GeometryLocationDataCollection;
    }
    namespace GeometricUtilities
    {
        class OnPathDimWithValueBuilder;
    }
    namespace GeometricUtilities
    {
        class PointSetAlignmentBuilder;
    }
    namespace GeometricUtilities
    {
        class PointsFromFileBuilder;
    }
    namespace GeometricUtilities
    {
        class RotationSetBuilder;
    }
    namespace GeometricUtilities
    {
        class ScalingSetBuilder;
    }
    namespace GeometricUtilities
    {
        class SelectionList;
    }
    namespace GeometricUtilities
    {
        class SpinePointDataCollection;
    }
    namespace GeometricUtilities
    {
        class StyledSweepDoubleOnPathDimBuilder;
    }
    namespace GeometricUtilities
    {
        class TransitionLawNodeBuilder;
    }
    namespace GeometricUtilities
    {
        class TwoExpressionsCollectorSet;
    }
    namespace GeometricUtilities
    {
        class WaveLinkRepository;
    }
    class ImportManager;
    namespace Mechatronics
    {
        class GanttCollection;
    }
    namespace Mechatronics
    {
        class MechatronicsManager;
    }
    namespace Mechatronics
    {
        class PhysicsManager;
    }
    namespace Mechatronics
    {
        class ProxyObjectCollection;
    }
    namespace Mechatronics
    {
        class ProxyOverrideObjectCollection;
    }
    namespace Motion
    {
        class MarkerCollection;
    }
    namespace Motion
    {
        class MotionManager;
    }
    namespace Motion
    {
        class PackagingCollection;
    }
    class ObjectList;
    class PartFamilyManager;
    class PartFamilyMemberData;
    class PartFamilyMemberValues;
    class Point;
    namespace Positioning
    {
        class DisplayedConstraintCollection;
    }
    namespace Preferences
    {
        class ViewPreferences;
    }
    class RegionPoint;
    namespace Routing
    {
        class RouteManager;
    }
    namespace Routing
    {
        class SegmentManager;
    }
    namespace SIM
    {
        class KinematicConfigurator;
    }
    class ScCollector;
    class ScRuleFactory;
    class Section;
    class SketchCollection;
    class SketchEvaluatorCollection;
    namespace Tooling
    {
        class AddReusablePartCollection;
    }
    namespace Tooling
    {
        class ToolingManager;
    }
    class TracelineCollection;
    class _PartBuilder;
    class PartImpl;
    /**  @brief  Represents an NX part of type .prt.  

        <br> Use the @link PartCollection PartCollection@endlink  class to load or create a part. <br> 
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  Part : public BasePart
    {
        /** The units of the part file. */
        public: enum Units
        {
            UnitsInches/** inches */ ,
            UnitsMillimeters/** millimeters */ ,
            UnitsMix/** mix */ 
        };

        /** The relations of the part file. 
         <br>  Created in NX8.0.0.  <br>  
        */
        public: enum Relations
        {
            RelationsStandalone/** no master model support */,
            RelationsReferenceExisting/** Master model support */,
            RelationsMix/** support any one of relation*/
        };

        /** The part family attribute types. 
         <br>  Created in NX6.0.0.  <br>  
        */
        public: enum PartFamilyAttrType
        {
            PartFamilyAttrTypeTextType = 1/** text attribute */,
            PartFamilyAttrTypeNumericType/** numeric attribute */,
            PartFamilyAttrTypeIntegerType/** integer attribute */,
            PartFamilyAttrTypeDoubleType/** double attribute */,
            PartFamilyAttrTypeStringType/** string attribute */,
            PartFamilyAttrTypePartType/** part attribute */,
            PartFamilyAttrTypeNameType/** name attribute */,
            PartFamilyAttrTypeInstanceType/** instance attribute */,
            PartFamilyAttrTypeExpressionType/** expression attribute */,
            PartFamilyAttrTypeMirrorType/** mirror attribute */,
            PartFamilyAttrTypeDensityType/** density attribute */,
            PartFamilyAttrTypeFeatureType/** feature attribute */
        };

         /** Contains part family attributes information 
         <br>  Created in NX6.0.0.  <br>  
        */
        public:
        struct  PartFamilyAttributeData
        {
            public: /** the attribute type */NXOpen::Part::PartFamilyAttrType AttributeType;
            public: /** the attribute name */NXString AttributeName;
            public: PartFamilyAttributeData() :
                AttributeType((NXOpen::Part::PartFamilyAttrType)0),
                AttributeName()
            {
            }
            /** Constructor for the PartFamilyAttributeData struct. */ 
            public: PartFamilyAttributeData(NXOpen::Part::PartFamilyAttrType attributeTypeInitial /** the attribute type */, 
                    const NXString &attributeNameInitial /** the attribute name */) :
                AttributeType(attributeTypeInitial),
                AttributeName(attributeNameInitial)
            {
            }
        };

         /** Contains part history event information 
         <br>  @deprecated Deprecated in NX4.0.0.  <br>  
        */
        public:
        struct  NX_DEPRECATED("Deprecated in NX4.0.0")  HistoryEvent
        {
            public: /** program name */NXString Program;
            public: /** user id */NXString User;
            public: /** type of machine. eg.  NT Intel */NXString Machine;
            public: /** time of last change */NXString Time;
            public: /** version number */int Version;
            public: HistoryEvent() :
                Program(),
                User(),
                Machine(),
                Time(),
                Version()
            {
            }
            /** Constructor for the HistoryEvent struct. */ 
            public: HistoryEvent(const NXString &programInitial /** program name */, 
                    const NXString &userInitial /** user id */, 
                    const NXString &machineInitial /** type of machine. eg.  NT Intel */, 
                    const NXString &timeInitial /** time of last change */, 
                    int versionInitial /** version number */) :
                Program(programInitial),
                User(userInitial),
                Machine(machineInitial),
                Time(timeInitial),
                Version(versionInitial)
            {
            }
        };

         /** Contains feature update status report */
        public:
        struct  FeatureUpdateStatus
        {
            public: /** the feature */NXOpen::Features::Feature * Feature;
            public: /** status of the feature (e.g. Suppressed) */NXString Status;
            public: /** error message */NXString ErrorMessage;
            public: FeatureUpdateStatus() :
                Feature(),
                Status(),
                ErrorMessage()
            {
            }
            /** Constructor for the FeatureUpdateStatus struct. */ 
            public: FeatureUpdateStatus(NXOpen::Features::Feature * featureInitial /** the feature */, 
                    const NXString &statusInitial /** status of the feature (e.g. Suppressed) */, 
                    const NXString &errorMessageInitial /** error message */) :
                Feature(featureInitial),
                Status(statusInitial),
                ErrorMessage(errorMessageInitial)
            {
            }
        };

        /** Indicates how part close should handle component parts when they are modified 
         <br>  @deprecated Deprecated in NX4.0.0.  <br>  
        */
        public:  NX_DEPRECATED("Deprecated in NX4.0.0") enum CloseModified
        {
            CloseModifiedUseResponses/** Use the responses in
                        @link PartCloseResponses PartCloseResponses@endlink  to determine whether to close a
                        modified part or not */,
            CloseModifiedCloseModified/** Close all modified parts */,
            CloseModifiedDontCloseModified/** Do not close any modified parts */
        };

        private: PartImpl * m_part_impl;
        private: friend class  _PartBuilder;
        protected: Part();
        public: ~Part();
        /** Returns a list of child parts in the current session that
            contain interpart geometry.  @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: std::vector<NXOpen::Part *> GetInterpartChildren
        (
        );
        /** Returns a list of parts in the current session that contain the
            defining geometry for linked geometry in this part.  @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: std::vector<NXOpen::Part *> GetInterpartParents
        (
        );
        /**Returns  the current feature. 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Features::Feature * CurrentFeature
        (
        );
        /** Get feature update status report  @return  list of affected features 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: std::vector<NXOpen::Part::FeatureUpdateStatus> GetUpdateStatusReport
        (
            int* numFailed /** number of failed features */
        );
        /** Sets the timestamp for the part to the timestamp of the latest feature in the part.
            Use this when you have deleted the latest feature and you want to reuse the timestamp
            assigned to that feature 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void ResetTimestampToLatestFeature
        (
        );
        /** Deletes all retained drafting objects in the current layout of part that are currently
            in  the "retained" state. 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void DeleteRetainedDraftingObjectsInCurrentLayout
        (
        );
        /** Creates an empty list that can be populated with any NXObject  @return  ObjectList object 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::ObjectList * CreateObjectList
        (
        );
        /** Creates an ExpressionSectionSet item that contains a @link Section Section@endlink  collection
                and a corresponding expression  @return  New ExpressionSectionSet object 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::ExpressionSectionSet * CreateExpressionSectionSet
        (
            NXOpen::Section * section /** Section object */,
            const NXString & value /** initial expression string */,
            const NXString & unitsType /** units of expression */,
            int index /** index of this item in a list, -1 if N/A or unknown */
        );
        /** Creates an ExpressionSectionSet item that contains a @link Section Section@endlink  collection
                and a corresponding expression  @return  New ExpressionSectionSet object 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        NXOpen::ExpressionSectionSet * CreateExpressionSectionSet
        (
            NXOpen::Section * section /** Section object */,
            const char * value /** initial expression string */,
            const char * unitsType /** units of expression */,
            int index /** index of this item in a list, -1 if N/A or unknown */
        );
        /** Creates an empty ExpressionSectionSet item
              @return  New ExpressionSectionSet object 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::ExpressionSectionSet * CreateEmptyExpressionSectionSet
        (
        );
        /** Creates an ExpressionCollectorSet item that contains a @link ScCollector ScCollector@endlink  collection
                and a corresponding expression  @return  New ExpressionCollectorSet object 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::ExpressionCollectorSet * CreateExpressionCollectorSet
        (
            NXOpen::ScCollector * collector /** Selection object */,
            const NXString & value /** initial expression string */,
            const NXString & unitsType /** units of expression */,
            int index /** index of this item in a list, -1 if N/A or unknown */
        );
        /** Creates an ExpressionCollectorSet item that contains a @link ScCollector ScCollector@endlink  collection
                and a corresponding expression  @return  New ExpressionCollectorSet object 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        NXOpen::ExpressionCollectorSet * CreateExpressionCollectorSet
        (
            NXOpen::ScCollector * collector /** Selection object */,
            const char * value /** initial expression string */,
            const char * unitsType /** units of expression */,
            int index /** index of this item in a list, -1 if N/A or unknown */
        );
        /** Creates an TwoExpressionCollectorSet item that contains 
            a @link ScCollector ScCollector@endlink  collection 
            and two corresponding expressions  @return  New TwoExpressionsCollectorSet object 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::GeometricUtilities::TwoExpressionsCollectorSet * CreateTwoExpressionsCollectorSet
        (
            NXOpen::ScCollector * collector /** Selection object */,
            const NXString & value /** initial expression string */,
            const NXString & valueTwo /** initial expression string for second expression */,
            const NXString & unitsType /** units of expression */,
            int index /** index of this item in a list, -1 if N/A or unknown */
        );
        /** Creates an TwoExpressionCollectorSet item that contains 
            a @link ScCollector ScCollector@endlink  collection 
            and two corresponding expressions  @return  New TwoExpressionsCollectorSet object 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        NXOpen::GeometricUtilities::TwoExpressionsCollectorSet * CreateTwoExpressionsCollectorSet
        (
            NXOpen::ScCollector * collector /** Selection object */,
            const char * value /** initial expression string */,
            const char * valueTwo /** initial expression string for second expression */,
            const char * unitsType /** units of expression */,
            int index /** index of this item in a list, -1 if N/A or unknown */
        );
        /** Creates an empty ExpressionCollectorSet item
              @return  New ExpressionCollectorSet object 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::ExpressionCollectorSet * CreateEmptyExpressionCollectorSet
        (
        );
        /** Creates an empty TwoExpressionCollectorSet item that contains 
            a @link ScCollector ScCollector@endlink  collection 
            and two corresponding expressions  @return  New TwoExpressionsCollectorSet object 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::GeometricUtilities::TwoExpressionsCollectorSet * CreateEmptyTwoExpressionsCollectorSet
        (
        );
        /**Returns  the CAM setup of the work part 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : cam_base ("CAM BASE") */
        public: NXOpen::CAM::CAMSetup * CAMSetup
        (
        );
        /** Creates CAM setup  @return  the created cam setup 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : cam_base ("CAM BASE") */
        public: NXOpen::CAM::CAMSetup * CreateCamSetup
        (
            const NXString & templateName /** the name of the template type   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /** Creates CAM setup  @return  the created cam setup 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : cam_base ("CAM BASE") */
        NXOpen::CAM::CAMSetup * CreateCamSetup
        (
            const char * templateName /** the name of the template type   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /** Delete CAM setup 
         <br>  Created in NX4.0.0.  <br>  
         <br> License requirements : cam_base ("CAM BASE") */
        public: void DeleteCamSetup
        (
        );
        /**Returns  the CMM Inspection setup of the work part 
         <br>  Created in NX7.0.0.  <br>  
         <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
        public: NXOpen::CAM::InspectionSetup * InspectionSetup
        (
        );
        /** Creates CMM Inspection setup  @return  the created CMM Inspection setup 
         <br>  Created in NX7.0.0.  <br>  
         <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
        public: NXOpen::CAM::InspectionSetup * CreateInspectionSetup
        (
            const NXString & templateName /** the name of the template type   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /** Creates CMM Inspection setup  @return  the created CMM Inspection setup 
         <br>  Created in NX7.0.0.  <br>  
         <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
        NXOpen::CAM::InspectionSetup * CreateInspectionSetup
        (
            const char * templateName /** the name of the template type   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /** Delete CMM Inspection setup 
         <br>  Created in NX7.0.0.  <br>  
         <br> License requirements : insp_programming ("INSPECTION PROGRAMMING") */
        public: void DeleteInspectionSetup
        (
        );
        /** Creates an item that contains a point and its corresponding body context for a region  @return  Region point object 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::RegionPoint * CreateRegionPoint
        (
            NXOpen::Point * point /** Point object */,
            NXOpen::Body * body /** Body context object for point */
        );
        /** Creates an empty item that contains a point and its corresponding body context for a region  @return  New empty Region point object 
         <br>  Created in NX5.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::RegionPoint * CreateEmptyRegionPoint
        (
        );
        /**Returns  the indicator that the part contains a reuse template. 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: bool HasReuseTemplate
        (
        );
        /** Create a part family of the part.  @return  the new @link PartFamilyManager PartFamilyManager@endlink  instance 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::PartFamilyManager * CreatePartFamily
        (
            const std::vector<NXOpen::Part::PartFamilyAttributeData> & attributeData /** the attributes data */,
            NXOpen::PartFamilyMemberData * memberData /** the member data */
        );
        /** Create an instance of a @link PartFamilyManager PartFamilyManager@endlink 
                class that will be used to edit part family of the part.  @return  the new @link PartFamilyManager PartFamilyManager@endlink  instance 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::PartFamilyManager * GetPartFamilyManager
        (
        );
        /** Create an instance of a @link PartFamilyMemberData PartFamilyMemberData@endlink 
                class that will be used to store the member count and member values
                of each member.  @return  the new @link PartFamilyMemberData PartFamilyMemberData@endlink  instance 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::PartFamilyMemberData * NewPartFamilyMemberData
        (
        );
        /** Create an instance of a @link PartFamilyMemberValues PartFamilyMemberValues@endlink 
                class that will be used to store the attribute values of a member.  @return  the new @link PartFamilyMemberValues PartFamilyMemberValues@endlink  instance 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::PartFamilyMemberValues * NewPartFamilyMemberValues
        (
        );
        /** Create the link repository to handle interpart selection @return  
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::GeometricUtilities::WaveLinkRepository * CreateWavelinkRepository
        (
        );
        /** Creates boundary definition builder object  @return  
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : studio_free_form ("STUDIO FREE FORM") */
        public: NXOpen::GeometricUtilities::BoundaryDefinitionBuilder * CreateEmptyBoundaryDefinitionBuilder
        (
        );
        /** Creates point set alignment builder object  @return  
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : studio_free_form ("STUDIO FREE FORM") */
        public: NXOpen::GeometricUtilities::PointSetAlignmentBuilder * CreatePointSetAlignmentBuilder
        (
        );
        /** Create an instance of @link SIM::KinematicConfigurator SIM::KinematicConfigurator@endlink 
                class that will be used to manage all Machine tool Builder and
                Configurator objects  @return  The new Machine Tool Configurator 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
        public: NXOpen::SIM::KinematicConfigurator * CreateKinematicConfigurator
        (
        );
        /**Returns  the @link SIM::KinematicConfigurator SIM::KinematicConfigurator@endlink  instance of the work part 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
        public: NXOpen::SIM::KinematicConfigurator * KinematicConfigurator
        (
        );
        /** Creates an @link GeometricUtilities::BoundingObjectBuilder GeometricUtilities::BoundingObjectBuilder@endlink  object.  @return  
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: NXOpen::GeometricUtilities::BoundingObjectBuilder * CreateBoundingObjectBuilder
        (
        );
        /**Returns  the status on whether input part is bookletPart or not a bookletPart. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: bool IsBookletPart
        (
        );
        /** Makes all the features of the part inactive 
         <br>  Created in NX7.5.4.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void MakeAllFeaturesInactive
        (
        );
        /** Deactivates any part module that is active in the given part. 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : solid_modeling ("SOLIDS MODELING") */
        public: void MakeNoPartModuleActive
        (
        );
        /** Creates a @link GeometricUtilities::SelectionList GeometricUtilities::SelectionList@endlink  object.  @return  
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::GeometricUtilities::SelectionList * CreateSelectionList
        (
        );
        /** Creates a @link GeometricUtilities::PointsFromFileBuilder GeometricUtilities::PointsFromFileBuilder@endlink  object  @return  New empty object 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::GeometricUtilities::PointsFromFileBuilder * CreatePointsFromFileBuilder
        (
        );


        /** Returns the AnnotationManager for part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Annotations::AnnotationManager *Annotations();
        /** Returns the BodyCollection instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::BodyCollection *Bodies();
        /** Returns the CutViewCollection instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::CutViewCollection *CutViews();
        /** Returns the DimensionCollection instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Annotations::DimensionCollection *Dimensions();
        /** Returns the DraftingViewCollection instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Drawings::DraftingViewCollection *DraftingViews();
        /** Returns the DrawingSheetCollection instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Drawings::DrawingSheetCollection *DrawingSheets();
        /** Returns the FeatureCollection instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Features::FeatureCollection *Features();
        /** Returns the ScRuleFactory instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::ScRuleFactory *ScRuleFactory();
        /** Returns a collection of notes 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Annotations::NoteCollection *Notes();
        /** Returns a collection of labels 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Annotations::LabelCollection *Labels();
        /** Returns a collection of GDTs 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Annotations::GdtCollection *Gdts();
        /** Return a collection of Markers 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Motion::MarkerCollection *Markers();
        /** Returns the RouteManager for this part
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Routing::RouteManager *RouteManager();
        /** Returns the SegmentManager for this part
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Routing::SegmentManager *SegmentManager();
        /** Returns the SketchCollection instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::SketchCollection *Sketches();
        /** Returns a collection of tracelines 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::TracelineCollection *Tracelines();
        /** Returns the FaceSetOffsets instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::GeometricUtilities::FaceSetOffsetCollection *FaceSetOffsets();
        /** Returns the PackagingCollection for this part
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Motion::PackagingCollection *PackagingCollection();
        /** Returns the MotionManager for this part
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Motion::MotionManager *MotionManager();
        /** Returns the PhysicsManager for this part
         <br>  Created in NX7.5.1.  <br>  
        */
        public: NXOpen::Mechatronics::PhysicsManager *PhysicsManager();
        /** Returns the PenetrationManager for this part
         <br>  Created in NX8.0.0.  <br>  
        */
        public: NXOpen::Features::ShipDesign::PenetrationManager *PenetrationManager();
        /** Returns the collection of DraftPointData 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::DraftPointDataCollection *DraftPointData();
        /** Returns the RelinkerCollection instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Assemblies::RelinkerCollection *Relinkers();
        /** Returns the BodyDes.OnestepUnformCollection instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::BodyDes::OnestepUnformCollection *OnestepUnforms();
        /** Returns the AddReusablePartCollection instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Tooling::AddReusablePartCollection *ReusableParts();
        /** Returns the ToolingManager instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Tooling::ToolingManager *ToolingManager();
        /** Returns the collection of SketchEvaluator 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::SketchEvaluatorCollection *SketchEvaluators();
        /** Returns the DraftingManager for part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::DraftingManager *Drafting();
        /** Returns the DraftingApplicationManager for part 
         <br>  Created in NX7.5.0.  <br>  
        */
        public: NXOpen::Drafting::DraftingApplicationManager *DraftingManager();
        /** Returns the collection of ComponentGroups for this part 
         <br>  Created in NX5.0.0.  <br>  
        */
        public: NXOpen::Assemblies::ComponentGroupCollection *ComponentGroups();
        /** Returns the import manager for this part 
         <br>  Created in NX5.0.0.  <br>  
        */
        public: NXOpen::ImportManager *ImportManager();
        /** Returns the FacetedBodyCollection instance belonging to this part 
         <br>  Created in NX5.0.0.  <br>  
        */
        public: NXOpen::Facet::FacetedBodyCollection *FacetedBodies();
        /** Returns the ProductInterface Collection 
         <br>  Created in NX5.0.0.  <br>  
        */
        public: NXOpen::Assemblies::ProductInterface::Collection *ProductInterface();
        /** Returns the ClipboardOperations manager for this part 
         <br>  Created in NX5.0.0.  <br>  
        */
        public: NXOpen::ClipboardOperationsManager *ClipboardOperationsManager();
        /** Returns the ViewPreferences Collection 
         <br>  Created in NX5.0.0.  <br>  
        */
        public: NXOpen::Preferences::ViewPreferences *ViewPreferences();
        /** Returns the SpinePointDataCollection instance belonging to this part 
         <br>  Created in NX5.0.0.  <br>  
        */
        public: NXOpen::GeometricUtilities::SpinePointDataCollection *SpinePointData();
        /** Returns the PmiManager for this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Annotations::PmiManager *PmiManager();
        /** Returns the BlendStopshortBuilderCollection instance belonging to this part 
         <br>  Created in NX5.0.0.  <br>  
        */
        public: NXOpen::GeometricUtilities::BlendStopshortBuilderCollection *BlendStopshortBuilder();
        /** Returns the FaceSetDataCollection instance belonging to this part 
         <br>  Created in NX5.0.0.  <br>  
        */
        public: NXOpen::GeometricUtilities::FaceSetDataCollection *FaceSetData();
        /** Returns the GeometryLocationDataCollection instance belonging to this part 
         <br>  Created in NX5.0.0.  <br>  
        */
        public: NXOpen::GeometricUtilities::GeometryLocationDataCollection *GeometryLocationData();
        /** Returns the Die.DieSimCollection instance belonging to this part 
         <br>  Created in NX3.0.0.  <br>  
        */
        public: NXOpen::Die::DieSimCollection *DieSimData();
        /** Returns the FacePlaneSelectionBuilderCollection instance belonging to this part 
         <br>  Created in NX6.0.0.  <br>  
        */
        public: NXOpen::GeometricUtilities::FacePlaneSelectionBuilderCollection *FacePlaneSelectionBuilderData();
        /** Returns the DraftingManager for part 
         <br>  Created in NX7.5.0.  <br>  
        */
        public: NXOpen::DrawingCompareManager *DrawingCompare();
        /** Returns the MechatronicsManager instance belonging to this part 
         <br>  Created in NX7.5.1.  <br>  
        */
        public: NXOpen::Mechatronics::MechatronicsManager *MechatronicsManager();
        /** Returns the GanttCollection instance belonging to this part 
         <br>  Created in NX7.5.1.  <br>  
        */
        public: NXOpen::Mechatronics::GanttCollection *GanttCollection();
        /** Returns the ProxyObjectCollection instance belonging to this part 
         <br>  Created in NX8.5.0.  <br>  
        */
        public: NXOpen::Mechatronics::ProxyObjectCollection *ProxyObjectCollection();
        /** Returns the ProxyOverrideObjectCollection instance belonging to this part 
         <br>  Created in NX8.5.0.  <br>  
        */
        public: NXOpen::Mechatronics::ProxyOverrideObjectCollection *ProxyOverrideObjectCollection();
        /** Returns the DisplayedConstraintCollection belonging to this part 
         <br>  Created in NX7.5.0.  <br>  
        */
        public: NXOpen::Positioning::DisplayedConstraintCollection *DisplayedConstraints();
        /** Returns the ViewAlignmentCollection belonging to this part 
         <br>  Created in NX8.5.0.  <br>  
        */
        public: NXOpen::Drawings::ViewAlignmentCollection *ViewAlignments();
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
