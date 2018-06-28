#ifndef NXOpen_ISSUE_ISSUECONTENT_HXX_INCLUDED
#define NXOpen_ISSUE_ISSUECONTENT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Issue_IssueContent.ja
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
#include <NXOpen/Issue_IssueAttachment.hxx>
#include <NXOpen/Issue_IssueContent.hxx>
#include <NXOpen/Issue_IssueFolder.hxx>
#include <NXOpen/Issue_IssueProperty.hxx>
#include <NXOpen/NXObject.hxx>
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
        class IssueContent;
    }
    namespace Issue
    {
        class IssueAttachment;
    }
    namespace Issue
    {
        class IssueFolder;
    }
    namespace Issue
    {
        class IssueProperty;
    }
    class NXObject;
    namespace Issue
    {
        class _IssueContentBuilder;
        class IssueContentImpl;
        /** Represents the Issue Issue object.  <br> To create a new instance of this class, use @link Issue::IssueManager::CreateIssueContent Issue::IssueManager::CreateIssueContent@endlink  <br> 
         <br>  Created in NX8.5.0.  <br>  
        */
        class NXOPENCPP_ISSUEEXPORT  IssueContent : public NXObject
        {
            private: IssueContentImpl * m_issuecontent_impl;
            private: friend class  _IssueContentBuilder;
            protected: IssueContent();
            public: ~IssueContent();
            /**Returns  the issue title 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: NXString Title
            (
            );
            /**Sets  the issue title 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void SetTitle
            (
                const NXString & title /** title */ 
            );
            /**Sets  the issue title 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            void SetTitle
            (
                const char * title /** title */ 
            );
            /**Returns  the issue comment 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: NXString Comment
            (
            );
            /**Sets  the issue comment 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void SetComment
            (
                const NXString & comment /** comment */ 
            );
            /**Sets  the issue comment 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            void SetComment
            (
                const char * comment /** comment */ 
            );
            /**Returns  the assigned user 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: NXString AssignedUser
            (
            );
            /**Sets  the assigned user 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void SetAssignedUser
            (
                const NXString & assignedUser /** assigneduser */ 
            );
            /**Sets  the assigned user 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            void SetAssignedUser
            (
                const char * assignedUser /** assigneduser */ 
            );
            /**Returns  the issue status 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: NXString Status
            (
            );
            /**Sets  the issue status 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void SetStatus
            (
                const NXString & status /** status */ 
            );
            /**Sets  the issue status 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            void SetStatus
            (
                const char * status /** status */ 
            );
            /**Returns  the issue priority 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: NXString Priority
            (
            );
            /**Sets  the issue priority 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void SetPriority
            (
                const NXString & priority /** priority */ 
            );
            /**Sets  the issue priority 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            void SetPriority
            (
                const char * priority /** priority */ 
            );
            /**Returns  the due date 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: NXString DueDate
            (
            );
            /**Sets  the due date 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void SetDueDate
            (
                const NXString & dueDate /** duedate */ 
            );
            /**Sets  the due date 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            void SetDueDate
            (
                const char * dueDate /** duedate */ 
            );
            /**Returns  the issue id 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: NXString IssueId
            (
            );
            /**Returns  the lock state 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: bool IsLocked
            (
            );
            /** Returns the user definded @link Issue::IssueProperty Issue::IssueProperty@endlink s  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: std::vector<NXOpen::Issue::IssueProperty *> GetUserProperties
            (
            );
            /** Returns the @link Issue::IssueProperty Issue::IssueProperty@endlink  with this property name  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: NXOpen::Issue::IssueProperty * GetProperty
            (
                const NXString & propertyName /** propertyname */ 
            );
            /** Returns the @link Issue::IssueProperty Issue::IssueProperty@endlink  with this property name  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            NXOpen::Issue::IssueProperty * GetProperty
            (
                const char * propertyName /** propertyname */ 
            );
            /** Reloads all the @link Issue::IssueProperty Issue::IssueProperty@endlink s 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void ReloadProperties
            (
            );
            /** Sets the value of @link Issue::IssueProperty Issue::IssueProperty@endlink  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void SetPropertyValue
            (
                const NXString & propertyName /** propertyname */ ,
                const NXString & propertyValue /** propertyvalue */ 
            );
            /** Sets the value of @link Issue::IssueProperty Issue::IssueProperty@endlink  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            void SetPropertyValue
            (
                const char * propertyName /** propertyname */ ,
                const char * propertyValue /** propertyvalue */ 
            );
            /** Returns the value of @link Issue::IssueProperty Issue::IssueProperty@endlink   @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: NXString GetPropertyValue
            (
                const NXString & propertyName /** propertyname */ 
            );
            /** Returns the value of @link Issue::IssueProperty Issue::IssueProperty@endlink   @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            NXString GetPropertyValue
            (
                const char * propertyName /** propertyname */ 
            );
            /** Returns all the @link Issue::IssueAttachment Issue::IssueAttachment@endlink s  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: std::vector<NXOpen::Issue::IssueAttachment *> GetAllAttachments
            (
            );
            /** Returns the child @link Issue::IssueAttachment Issue::IssueAttachment@endlink s  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: std::vector<NXOpen::Issue::IssueAttachment *> GetChildAttachments
            (
            );
            /** Returns the @link Issue::IssueAttachment Issue::IssueAttachment@endlink  with this attachment name  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: NXOpen::Issue::IssueAttachment * GetAttachment
            (
                const NXString & attachmentName /** attachmentname */ 
            );
            /** Returns the @link Issue::IssueAttachment Issue::IssueAttachment@endlink  with this attachment name  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            NXOpen::Issue::IssueAttachment * GetAttachment
            (
                const char * attachmentName /** attachmentname */ 
            );
            /** Returns the @link Issue::IssueAttachment Issue::IssueAttachment@endlink  with part type  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: NXOpen::Issue::IssueAttachment * GetPartAttachment
            (
            );
            /** Loads the @link Issue::IssueAttachment Issue::IssueAttachment@endlink s 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void LoadAttachments
            (
            );
            /** Adds an @link Issue::IssueAttachment Issue::IssueAttachment@endlink  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void AddAttachment
            (
                NXOpen::Issue::IssueAttachment * attachment /** attachment */ 
            );
            /** Removes an @link Issue::IssueAttachment Issue::IssueAttachment@endlink  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void RemoveAttachment
            (
                NXOpen::Issue::IssueAttachment * attachment /** attachment */ 
            );
            /** Returns all the child @link Issue::IssueFolder Issue::IssueFolder@endlink s  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: std::vector<NXOpen::Issue::IssueFolder *> GetFolders
            (
            );
            /** Saves the changes to issue server 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void SaveChanges
            (
            );
            /** Discards the newly created issue which has not saved in external db yet 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void DiscardIssue
            (
            );
            /** Returns whether the issue is checked out   @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: bool IsCheckedOut
            (
                NXString* user /** user */ 
            );
            /** Closes the issue 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void Close
            (
                const NXString & coseNote /** cosenote */ 
            );
            /** Closes the issue 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            void Close
            (
                const char * coseNote /** cosenote */ 
            );
            /** Returns whether the issue is closed  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: bool IsClosed
            (
            );
            /** Returns whether the issue is read only  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: bool IsReadOnly
            (
            );
            /** Sends the issue to workflow process 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void SendToWorkflow
            (
                const NXString & workflowTemplate /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Sends the issue to workflow process 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            void SendToWorkflow
            (
                const char * workflowTemplate /**   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
            );
            /** Signs off the current workflow task with decision 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void Review
            (
                const NXString & reviewDecision /** reviewdecision */ ,
                const NXString & comment /** comment */ 
            );
            /** Signs off the current workflow task with decision 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            void Review
            (
                const char * reviewDecision /** reviewdecision */ ,
                const char * comment /** comment */ 
            );
            /**Returns  the preview image 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: NXOpen::Issue::IssueAttachment * PreviewImage
            (
            );
            /**Sets  the preview image 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_issue_mgmt ("NX Issue Tracking") */
            public: void SetPreviewImage
            (
                NXOpen::Issue::IssueAttachment * previewImage /** previewimage */ 
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
