#ifndef NXOpen_VISUALREPORTING_VISUALREPORT_HXX_INCLUDED
#define NXOpen_VISUALREPORTING_VISUALREPORT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     VisualReporting_VisualReport.ja
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
#include <NXOpen/VisualReporting_GroupLabel.hxx>
#include <NXOpen/VisualReporting_Property.hxx>
#include <NXOpen/VisualReporting_ResultCategory.hxx>
#include <NXOpen/VisualReporting_Rule.hxx>
#include <NXOpen/VisualReporting_UnmatchedResultCategory.hxx>
#include <NXOpen/VisualReporting_VisualReport.hxx>
#include <NXOpen/libnxopencpp_visualreporting_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace VisualReporting
    {
        class VisualReport;
    }
    class NXObject;
    namespace VisualReporting
    {
        class GroupLabel;
    }
    namespace VisualReporting
    {
        class Property;
    }
    namespace VisualReporting
    {
        class ResultCategory;
    }
    namespace VisualReporting
    {
        class Rule;
    }
    namespace VisualReporting
    {
        class UnmatchedResultCategory;
    }
    namespace VisualReporting
    {
        class _VisualReportBuilder;
        class VisualReportImpl;
        /**
                A visual report can be activated by the @link VisualReporting::VisualReportManager VisualReporting::VisualReportManager@endlink  to 
                apply colors to objects in the graphics window.
                An active visual report groups objects according to filtering conditions and classification 
                rules.  The contents of the groups can be accessed via @link VisualReporting::VisualReport::GetGroupLabels VisualReporting::VisualReport::GetGroupLabels@endlink 
                and @link VisualReporting::VisualReport::GetObjectsInGroup VisualReporting::VisualReport::GetObjectsInGroup@endlink .
            
         <br>  Created in NX7.0.0.  <br>  
        */
        class NXOPENCPP_VISUALREPORTINGEXPORT  VisualReport : public NXObject
        {
            /** Represents the possible @link VisualReporting::VisualReport::ReportingStyle VisualReporting::VisualReport::ReportingStyle@endlink 
                       for a @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    */
            public: enum ReportingStyleOption
            {
                ReportingStyleOptionColorObject/** Matching objects will be colored */,
                ReportingStyleOptionTagObject/** Matching objects will be tagged */,
                ReportingStyleOptionColorAndTagObject/** Matching objects will be both colored and tagged */
            };

            /** Represents the possible @link VisualReporting::VisualReport::ReportingObjectType VisualReporting::VisualReport::ReportingObjectType@endlink 
                       for a @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    */
            public: enum ReportingObjectTypeOption
            {
                ReportingObjectTypeOptionPart/** The reporting objects are parts. */,
                ReportingObjectTypeOptionComponent/** The reporting objects are components. */,
                ReportingObjectTypeOptionInferred/** The reporting objects are inferred from the properties used in the report. */
            };

            /** Represents the possible @link VisualReporting::VisualReport::SaveDestination VisualReporting::VisualReport::SaveDestination@endlink  options
                       for a @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    */
            public: enum SaveDestinationOption
            {
                SaveDestinationOptionLocal/** Saves the report in the local file system. */,
                SaveDestinationOptionTeamcenter/** Saves the report in the Teamcenter database. */
            };

            private: VisualReportImpl * m_visualreport_impl;
            private: friend class  _VisualReportBuilder;
            protected: VisualReport();
            public: ~VisualReport();
            /**Returns  the @link VisualReporting::VisualReport::SaveDestinationOption VisualReporting::VisualReport::SaveDestinationOption@endlink  of the @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                        Note that this property will always be @link VisualReporting::VisualReport::SaveDestinationOptionLocal VisualReporting::VisualReport::SaveDestinationOptionLocal@endlink  when NX is not connected to Teamcenter.
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXOpen::VisualReporting::VisualReport::SaveDestinationOption SaveDestination
            (
            );
            /**Sets  the @link VisualReporting::VisualReport::SaveDestinationOption VisualReporting::VisualReport::SaveDestinationOption@endlink  of the @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                        Note that this property will always be @link VisualReporting::VisualReport::SaveDestinationOptionLocal VisualReporting::VisualReport::SaveDestinationOptionLocal@endlink  when NX is not connected to Teamcenter.
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: void SetSaveDestination
            (
                NXOpen::VisualReporting::VisualReport::SaveDestinationOption destinationOption /** The destination option */
            );
            /**Returns  the destination Teamcenter folder for saving the @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink  to Teamcenter database.
                        
                        Note that this property is only needed when NX is connected to Teamcenter and report is saved as a copy to Teamcenter database.
                        This @link VisualReporting::VisualReport::DestinationTeamcenterFolder VisualReporting::VisualReport::DestinationTeamcenterFolder@endlink  may return NULL if you haven't 
                        set a folder name on this property.
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXString DestinationTeamcenterFolder
            (
            );
            /**Sets  the destination Teamcenter folder for saving the @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink  to Teamcenter database.
                        
                        Note that this property is only needed when NX is connected to Teamcenter and report is saved as a copy to Teamcenter database.
                        This @link VisualReporting::VisualReport::DestinationTeamcenterFolder VisualReporting::VisualReport::DestinationTeamcenterFolder@endlink  may return NULL if you haven't 
                        set a folder name on this property.
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: void SetDestinationTeamcenterFolder
            (
                const NXString & foldername /** The Teamcenter folder name */
            );
            /**Sets  the destination Teamcenter folder for saving the @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink  to Teamcenter database.
                        
                        Note that this property is only needed when NX is connected to Teamcenter and report is saved as a copy to Teamcenter database.
                        This @link VisualReporting::VisualReport::DestinationTeamcenterFolder VisualReporting::VisualReport::DestinationTeamcenterFolder@endlink  may return NULL if you haven't 
                        set a folder name on this property.
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            void SetDestinationTeamcenterFolder
            (
                const char * foldername /** The Teamcenter folder name */
            );
            /** Saves this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink  to its current @link VisualReporting::VisualReport::Filename VisualReporting::VisualReport::Filename@endlink .

                        Note that when NX is connected to Teamcenter, the @link VisualReporting::VisualReport::Filename VisualReporting::VisualReport::Filename@endlink  will be 
                        updated to the report dataset identifier after the report is saved to Teamcenter database.
                    
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: void Save
            (
            );
            /**Returns  the filename where this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink  was opened from or will be saved to.

                        Note that when NX is connected to Teamcenter, this property is the report dataset identifier from Teamcenter database. 
                        If it is a new report, it will be the report dataset name. When the report is save by @link VisualReporting::VisualReport::Save VisualReporting::VisualReport::Save@endlink , 
                        the report dataset identifier will be saved in this property.
                    
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXString Filename
            (
            );
            /**Sets  the filename where this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink  was opened from or will be saved to.

                        Note that when NX is connected to Teamcenter, this property is the report dataset identifier from Teamcenter database. 
                        If it is a new report, it will be the report dataset name. When the report is save by @link VisualReporting::VisualReport::Save VisualReporting::VisualReport::Save@endlink , 
                        the report dataset identifier will be saved in this property.
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: void SetFilename
            (
                const NXString & filename /** filename */ 
            );
            /**Sets  the filename where this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink  was opened from or will be saved to.

                        Note that when NX is connected to Teamcenter, this property is the report dataset identifier from Teamcenter database. 
                        If it is a new report, it will be the report dataset name. When the report is save by @link VisualReporting::VisualReport::Save VisualReporting::VisualReport::Save@endlink , 
                        the report dataset identifier will be saved in this property.
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            void SetFilename
            (
                const char * filename /** filename */ 
            );
            /**Returns  the description of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink 
                    
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXString Description
            (
            );
            /**Sets  the description of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink 
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: void SetDescription
            (
                const NXString & description /** description */ 
            );
            /**Sets  the description of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink 
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            void SetDescription
            (
                const char * description /** description */ 
            );
            /** Return the specified @link VisualReporting::Rule VisualReporting::Rule@endlink  from this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink 
                     @return  
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXOpen::VisualReporting::Rule * GetRule
            (
                int index /** The index of the returned @link VisualReporting::Rule VisualReporting::Rule@endlink . */
            );
            /** Returns all the @link VisualReporting::Rule VisualReporting::Rule@endlink s in this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink 
                     @return  
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: std::vector<NXOpen::VisualReporting::Rule *> GetRules
            (
            );
            /**Returns  the @link VisualReporting::VisualReport::ReportingStyleOption VisualReporting::VisualReport::ReportingStyleOption@endlink  of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXOpen::VisualReporting::VisualReport::ReportingStyleOption ReportingStyle
            (
            );
            /**Sets  the @link VisualReporting::VisualReport::ReportingStyleOption VisualReporting::VisualReport::ReportingStyleOption@endlink  of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: void SetReportingStyle
            (
                NXOpen::VisualReporting::VisualReport::ReportingStyleOption reportingStyle /** reportingstyle */ 
            );
            /**Returns  the @link VisualReporting::VisualReport::ReportingObjectTypeOption VisualReporting::VisualReport::ReportingObjectTypeOption@endlink  of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXOpen::VisualReporting::VisualReport::ReportingObjectTypeOption ReportingObjectType
            (
            );
            /**Sets  the @link VisualReporting::VisualReport::ReportingObjectTypeOption VisualReporting::VisualReport::ReportingObjectTypeOption@endlink  of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: void SetReportingObjectType
            (
                NXOpen::VisualReporting::VisualReport::ReportingObjectTypeOption reportingObjectType /** reportingobjecttype */ 
            );
            /** Returns the @link VisualReporting::ResultCategory VisualReporting::ResultCategory@endlink s from the activated @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                        There are no @link VisualReporting::ResultCategory VisualReporting::ResultCategory@endlink s if the @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink  is not activated.
                     @return  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: std::vector<NXOpen::VisualReporting::ResultCategory *> GetResultCategories
            (
            );
            /** Returns the result @link VisualReporting::GroupLabel VisualReporting::GroupLabel@endlink s of a @link VisualReporting::ResultCategory VisualReporting::ResultCategory@endlink 
                        from the activated @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                     @return  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: std::vector<NXOpen::VisualReporting::GroupLabel *> GetGroupLabelsOfResultCategory
            (
                NXOpen::VisualReporting::ResultCategory * category /** category */ 
            );
            /**Returns  the @link VisualReporting::UnmatchedResultCategory VisualReporting::UnmatchedResultCategory@endlink  from the activated @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                        It will return NULL if the @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink  is not activated.
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXOpen::VisualReporting::UnmatchedResultCategory * UnmatchedResultCategory
            (
            );
            /** Returns the result @link VisualReporting::GroupLabel VisualReporting::GroupLabel@endlink s from the activated @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                        There are no @link VisualReporting::GroupLabel VisualReporting::GroupLabel@endlink s if the @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink  is not activated.
                        You can acess the user defined @link VisualReporting::GroupLabel VisualReporting::GroupLabel@endlink s by @link VisualReporting::VisualReportBuilder::GetManualGroupLabelsOfRule VisualReporting::VisualReportBuilder::GetManualGroupLabelsOfRule@endlink .
                     @return  
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: std::vector<NXOpen::VisualReporting::GroupLabel *> GetGroupLabels
            (
            );
            /**Returns  whether use of @link VisualReporting::VisualReport::UnmatchedGroupLabel VisualReporting::VisualReport::UnmatchedGroupLabel@endlink 
                        is enabled.
                    
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: bool IsUnmatchedGroupEnabled
            (
            );
            /**Sets  whether use of @link VisualReporting::VisualReport::UnmatchedGroupLabel VisualReporting::VisualReport::UnmatchedGroupLabel@endlink 
                        is enabled.
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: void SetUnmatchedGroupEnabled
            (
                bool isUnmatchedGroupEnabled /** Whether the unmatched group is enabled */
            );
            /**Returns  the @link VisualReporting::GroupLabel VisualReporting::GroupLabel@endlink  which is used for unmatched object. 
                        It will return NULL if the @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink  is not activated.
                    
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXOpen::VisualReporting::GroupLabel * UnmatchedGroupLabel
            (
            );
            /** Returns the @link NXObject NXObject@endlink s that belong to the group
                        with this @link VisualReporting::GroupLabel VisualReporting::GroupLabel@endlink .
                     @return  
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: std::vector<NXOpen::NXObject *> GetObjectsInGroup
            (
                NXOpen::VisualReporting::GroupLabel * groupLabel /** A group label of this visual report */
            );
            /**Returns  the category of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXString DescriptiveCategory
            (
            );
            /**Sets  the category of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: void SetDescriptiveCategory
            (
                const NXString & category /** category */ 
            );
            /**Sets  the category of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            void SetDescriptiveCategory
            (
                const char * category /** category */ 
            );
            /** Gets a comma separated string of the keywords for this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                     @return  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXString GetKeywords
            (
            );
            /** Sets a comma separated string of the keywords for this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: void SetKeywords
            (
                const NXString & keywords /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sets a comma separated string of the keywords for this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            void SetKeywords
            (
                const char * keywords /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /**Returns  the bitmap name of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXString BitmapName
            (
            );
            /**Sets  the bitmap name of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: void SetBitmapName
            (
                const NXString & bitmapName /** bitmapname */ 
            );
            /**Sets  the bitmap name of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            void SetBitmapName
            (
                const char * bitmapName /** bitmapname */ 
            );
            /**Returns  the custom message of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXString CustomMessage
            (
            );
            /**Sets  the custom message of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: void SetCustomMessage
            (
                const NXString & customMessage /** custommessage */ 
            );
            /**Sets  the custom message of this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            void SetCustomMessage
            (
                const char * customMessage /** custommessage */ 
            );
            /** Removes the @link VisualReporting::ResultCategory VisualReporting::ResultCategory@endlink  from @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                        The @link VisualReporting::Classifier VisualReporting::Classifier@endlink  which populates this @link VisualReporting::ResultCategory VisualReporting::ResultCategory@endlink  
                        will also be removed from the @link VisualReporting::Rule VisualReporting::Rule@endlink  in the @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: void RemoveResultCategory
            (
                NXOpen::VisualReporting::ResultCategory * theCategory /** thecategory */ 
            );
            /** Returns the @link VisualReporting::Property VisualReporting::Property@endlink s which has been defined in this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink .
                        The returned properties include those properties defined in @link VisualReporting::Condition VisualReporting::Condition@endlink s, in @link VisualReporting::Classifier VisualReporting::Classifier@endlink s,
                        and in the referenced properties.
                     @return  Properties defined in this visual report 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: std::vector<NXOpen::VisualReporting::Property *> GetAllDefinedProperties
            (
            );
            /** Returns the value of the @link VisualReporting::Property VisualReporting::Property@endlink s for the @link NXObject NXObject@endlink  in the result @link VisualReporting::GroupLabel VisualReporting::GroupLabel@endlink .
                        It will return NULL if the @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink  is not activated, or the @link VisualReporting::Property VisualReporting::Property@endlink 
                        does not belong to the properties defined in this @link VisualReporting::VisualReport VisualReporting::VisualReport@endlink , or the @link NXObject NXObject@endlink  doesn't belong to
                        the specified result @link VisualReporting::GroupLabel VisualReporting::GroupLabel@endlink .
                     @return  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_visual_reporting ("Visual Reporting") */
            public: NXString GetPropertyValueOfObject
            (
                NXOpen::VisualReporting::Property * property /** A property defined in this visual report */,
                NXOpen::VisualReporting::GroupLabel * groupLabel /** A result group of this visual report */,
                NXOpen::NXObject * nxObject /** A @link NXObject NXObject@endlink  which belongs to the result group */
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
