#ifndef NXOpen_PREFERENCES_SESSIONASSEMBLIES_HXX_INCLUDED
#define NXOpen_PREFERENCES_SESSIONASSEMBLIES_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Preferences_SessionAssemblies.ja
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
#include <NXOpen/libnxopencpp_preferences_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Preferences
    {
        class SessionAssemblies;
    }
    namespace Preferences
    {
        class SessionPreferences;
    }
    namespace Preferences
    {
        class SessionAssembliesImpl;
        /** Represents the set of Assemblies Preferences applicable to entire session  <br> To obtain an instance of this class, refer to @link Preferences::SessionPreferences Preferences::SessionPreferences@endlink  <br> 
         <br>  Created in NX3.0.0.  <br>  
        */
        class NXOPENCPP_PREFERENCESEXPORT  SessionAssemblies
        {
            /** Describe whether the part name style is file name or description or specified */
            public: enum PartNameOption
            {
                PartNameOptionFileName/** file name */ ,
                PartNameOptionDescription/** description */ ,
                PartNameOptionSpecifiedAttributes/** specified attributes */ 
            };

            private: SessionAssembliesImpl * m_sessionassemblies_impl;
            private: NXOpen::Preferences::SessionPreferences* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit SessionAssemblies(NXOpen::Preferences::SessionPreferences *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~SessionAssemblies();
            /**Returns  the emphasize for work part  
             <br>  @deprecated Deprecated in NX8.5.0.  Use @link Preferences::SessionVisualizationEmphasis::WorkPartEmphasis Preferences::SessionVisualizationEmphasis::WorkPartEmphasis@endlink  instead. <br>  

             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Use Preferences::SessionVisualizationEmphasis::WorkPartEmphasis instead.") bool WorkPartEmphasize
            (
            );
            /**Sets  the emphasize for work part  
             <br>  @deprecated Deprecated in NX8.5.0.  Use @link Preferences::SessionVisualizationEmphasis::SetWorkPartEmphasis Preferences::SessionVisualizationEmphasis::SetWorkPartEmphasis@endlink  instead. <br>  

             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Use Preferences::SessionVisualizationEmphasis::SetWorkPartEmphasis instead.") void SetWorkPartEmphasize
            (
                bool workPartEmphasize /** work part emphasize */ 
            );
            /**Returns  the work part maintain option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: bool WorkPartMaintain
            (
            );
            /**Sets  the work part maintain option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetWorkPartMaintain
            (
                bool workPartMaintain /** work part maintain */ 
            );
            /**Returns  the work part display as entire part option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: bool WorkPartDisplayAsEntirePart
            (
            );
            /**Sets  the work part display as entire part option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetWorkPartDisplayAsEntirePart
            (
                bool workPartDisplayAsEntirePart /** work part display as entire part */ 
            );
            /**Returns  the warn on automatic change for work part option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: bool WorkPartWarnOnAutomaticChange
            (
            );
            /**Sets  the warn on automatic change for work part option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetWorkPartWarnOnAutomaticChange
            (
                bool workPartWarnOnAutomaticChange /** work part warn on automatic change */ 
            );
            /**Returns  the product interface display emphasis setting 
             <br>  @deprecated Deprecated in NX8.5.0.  Use @link Preferences::SessionVisualizationEmphasis::ProductInterfaceEmphasis Preferences::SessionVisualizationEmphasis::ProductInterfaceEmphasis@endlink  instead. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Use Preferences::SessionVisualizationEmphasis::ProductInterfaceEmphasis instead.") bool ProductInterfaceEmphasize
            (
            );
            /**Sets  the product interface display emphasis setting 
             <br>  @deprecated Deprecated in NX8.5.0.  Use @link Preferences::SessionVisualizationEmphasis::SetProductInterfaceEmphasis Preferences::SessionVisualizationEmphasis::SetProductInterfaceEmphasis@endlink  instead. <br>  

             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Use Preferences::SessionVisualizationEmphasis::SetProductInterfaceEmphasis instead.") void SetProductInterfaceEmphasize
            (
                bool productInterfaceEmphasize /** product interface emphasize */ 
            );
            /**Returns  the check for newer revisions of template part option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: bool CheckNewerRevisionsOfTemplatePart
            (
            );
            /**Sets  the check for newer revisions of template part option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetCheckNewerRevisionsOfTemplatePart
            (
                bool checkNewerRevisionsOfTemplatePart /** check newer revisions of template part */ 
            );
            /**Returns  the display update report option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: bool DisplayUpdateReport
            (
            );
            /**Sets  the display update report option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDisplayUpdateReport
            (
                bool displayUpdateReport /** display update report */ 
            );
            /**Returns  the warn on drag and drop 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: bool WarnOnDragDrop
            (
            );
            /**Sets  the warn on drag and drop 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetWarnOnDragDrop
            (
                bool warnOnDragDrop /** warn on drag drop */ 
            );
            /**Returns  the component member select option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: bool ComponentMemberSelect
            (
            );
            /**Sets  the component member select option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetComponentMemberSelect
            (
                bool componentMemberSelect /** component member select */ 
            );
            /**Returns  the preview component on add option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: bool PreviewComponentOnAdd
            (
            );
            /**Sets  the preview component on add option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetPreviewComponentOnAdd
            (
                bool previewComponentOnAdd /** preview component on add */ 
            );
            /**Returns  the true shape filtering option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: bool TrueShapeFiltering
            (
            );
            /**Sets  the true shape filtering option 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTrueShapeFiltering
            (
                bool trueShapeFiltering /** true shape filtering */ 
            );
            /**Returns  the part name style 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Preferences::SessionAssemblies::PartNameOption PartNameStyle
            (
            );
            /**Sets  the part name style 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetPartNameStyle
            (
                NXOpen::Preferences::SessionAssemblies::PartNameOption partNameStyle /** part name style */ 
            );
            /**Returns  the part name attribute 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: NXString PartNameAttribute
            (
            );
            /**Sets  the part name attribute 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            public: void SetPartNameAttribute
            (
                const NXString & partNameAttribute /** part name attribute */ 
            );
            /**Sets  the part name attribute 
             <br>  Created in NX3.0.0.  <br>  
             <br> License requirements : None */
            void SetPartNameAttribute
            (
                const char * partNameAttribute /** part name attribute */ 
            );
            /**Returns  the update structure on assembly tree expand option 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: bool UpdateStructureOnExpand
            (
            );
            /**Sets  the update structure on assembly tree expand option 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetUpdateStructureOnExpand
            (
                bool updateStructure /** update structure */ 
            );
            /**Returns  the option to allow tolerant (imprecise) geometry selection for assembly positioning 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: bool TolerantPositioning
            (
            );
            /**Sets  the option to allow tolerant (imprecise) geometry selection for assembly positioning 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTolerantPositioning
            (
                bool allowTolerantPositioning /** allow tolerant positioning */ 
            );
            /**Returns  the option to allow interpart geometry selection in the assembly constraints dialog 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: bool InterpartPositioning
            (
            );
            /**Sets  the option to allow interpart geometry selection in the assembly constraints dialog 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: void SetInterpartPositioning
            (
                bool allowInterpartPositioning /** allow interpart positioning */ 
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
