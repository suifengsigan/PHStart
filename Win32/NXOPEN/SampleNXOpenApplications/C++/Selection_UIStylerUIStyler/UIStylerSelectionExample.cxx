//==============================================================================
//
//                   Copyright (c) 2006 UGS PLM Solutions
//                    Unpublished - All rights reserved
//==============================================================================
//File description: Sample NX/Open Application for UIStyler
//==============================================================================
//
//==============================================================================

//==============================================================================
//Following example demonstrates the Selection capability within UIStyler
//==============================================================================
//==============================================================================
//   WARNING!!  This file is overwritten by the UIStyler each time the Styler
//   file is saved.
//
//       Filename:  UIStylerSelectionExample.cxx
//
//        This file was generated by the NX User Interface Styler
//        Created by: jawale
//        Version: NX 5
//              Date: 12-13-2006
//              Time: 11:56
//
//   This template file is overwritten each time the UIStyler dialog is
//   saved.  Any modifications to this file will be lost.
//==============================================================================


//==============================================================================
//  Purpose:  This TEMPLATE file contains C++ source to guide you in the
//  construction of your NX Open application dialog. The generation of your
//  dialog file (.dlg extension) is the first step towards dialog construction
//  within NX.  You must now create a NX Open application that
//  utilizes this file (.dlg).


//  The information in this file provides you with the following:
//
//  1.  Help on how to load and display your UIStyler dialog in NX
//      using APIs provided in NXOpen::UIStyler namespace
//  2.  The empty callback methods (stubs) associated with your dialog items
//      have also been placed in this file. These empty methods have been
//      created simply to start you along with your coding requirements.
//      The method name, argument list and possible return values have already
//      been provided for you.
//==============================================================================


//------------------------------------------------------------------------------
// These includes are needed for the following template code
//------------------------------------------------------------------------------
#include <map>
#include <algorithm>
#include <NXOpen/UI.hxx>
#include <NXOpen/UIStyler_Styler.hxx>
#include <NXOpen/Selection.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/UIStyler_LabelItem.hxx>
#include <uf_defs.h>
#include <NXOpen/Builder.hxx>
#include <NXOpen/Edge.hxx>
#include <NXOpen/EdgeMultipleSeedTangentRule.hxx>
#include <NXOpen/Features_Block.hxx>
#include <NXOpen/Features_EdgeBlendBuilder.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>
#include <NXOpen/GeometricUtilities_BlendLimitsData.hxx>
#include <NXOpen/ObjectList.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/ScCollectorCollection.hxx>
#include <NXOpen/ScRuleFactory.hxx>
#include <NXOpen/SelectionIntentRule.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/TaggedObjectList.hxx>
#include <uf_object_types.h>
#include <uf_ui_types.h>
#include "UIStylerSelectionExample.hxx"
#include <sstream>

using namespace NXOpen;

std::map<unsigned int, NXOpen::TaggedObject*> htEdges;
std::map<unsigned int, NXOpen::TaggedObject*>::iterator htEdgesIterator;

//------------------------------------------------------------------------------
// Initialize static variables
//------------------------------------------------------------------------------
Session *(UIStylerSelectionExample::theSession) = NULL;
UI *(UIStylerSelectionExample::theUI) = NULL;
bool UIStylerSelectionExample::isDisposeCalled = false;
//------------------------------------------------------------------------------
// Declaration of global variables
//------------------------------------------------------------------------------
UIStylerSelectionExample *theUIStylerSelectionExample;

//------------------------------------------------------------------------------
// Constructor for NX Styler class
//------------------------------------------------------------------------------
UIStylerSelectionExample::UIStylerSelectionExample()
{
    try
    {
        // Initialize the NX Open C++ API environment
        UIStylerSelectionExample::theSession = NXOpen::Session::GetSession();
        UIStylerSelectionExample::theUI = UI::GetUI();
        // Initialize the Open C API environment
        UIStylerSelectionExample::isDisposeCalled = false;
        NXOpen::UIStyler::Styler* theStyler = theUI->Styler();
        theDialog = theStyler->CreateStylerDialog("UIStylerSelectionExample.dlg");

        InitializeUIStylerDialog();
    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
    return;
}

//------------------------------------------------------------------------------
// This method is required for UI styler dialog creation
//------------------------------------------------------------------------------
void UIStylerSelectionExample::InitializeUIStylerDialog()
{
    try
    {
        //------------------------------------------------------------------------------
        // The following code snippets initializes all the styler items and associate
        // respective callbacks. Attributes of the styler item can be accessed and
        // modified only after calling Show() or RegisterWithUiMenu().
        //------------------------------------------------------------------------------
        changeDialog = (NXOpen::UIStyler::DialogItem*)theDialog->GetStylerItem("UF_STYLER_DIALOG_INDEX", NXOpen::UIStyler::Dialog::ItemTypeDialogItem);
        changeDialog->AddConstructHandler(make_callback(this, &UIStylerSelectionExample::constructor_cb), false);
        changeDialog->AddOkayHandler(make_callback(this, &UIStylerSelectionExample::ok_cb), false);
        changeDialog->AddApplyHandler(make_callback(this, &UIStylerSelectionExample::apply_cb), false);
        changeGrBeg1 = (NXOpen::UIStyler::GroupBox*)theDialog->GetStylerItem("GR_BEG_1", NXOpen::UIStyler::Dialog::ItemTypeGroupBox);
        changeBitmap1 = (NXOpen::UIStyler::BitMap*)theDialog->GetStylerItem("BITMAP_1", NXOpen::UIStyler::Dialog::ItemTypeBitmap);
        changeLabel1 = (NXOpen::UIStyler::LabelItem*)theDialog->GetStylerItem("LABEL_1", NXOpen::UIStyler::Dialog::ItemTypeLabelItem);
        changeStr0 = (NXOpen::UIStyler::StringItem*)theDialog->GetStylerItem("STR_0", NXOpen::UIStyler::Dialog::ItemTypeStringItem);
        changeStr0->AddActivateHandler(make_callback(this, &UIStylerSelectionExample::bend_radius_cb), false);
        changeCgBeg5 = (NXOpen::UIStyler::CollapsibleGroup*)theDialog->GetStylerItem("CG_BEG_5", NXOpen::UIStyler::Dialog::ItemTypeCollapsibleGroup);
        changeToggle6 = (NXOpen::UIStyler::Toggle*)theDialog->GetStylerItem("TOGGLE_6", NXOpen::UIStyler::Dialog::ItemTypeToggle);
        changeToggle6->AddValueChangedHandler(make_callback(this, &UIStylerSelectionExample::remove_surface_self_intersections_cb), false);
        changeReal6 = (NXOpen::UIStyler::RealItem*)theDialog->GetStylerItem("REAL_6", NXOpen::UIStyler::Dialog::ItemTypeRealItem);
        changeReal6->AddActivateHandler(make_callback(this, &UIStylerSelectionExample::tolerance_cb), false);
    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
    return;
}

NXOpen::UIStyler::LabelItem* UIStylerSelectionExample::GetChangeLabel1()
{
    return changeLabel1;
}

//---------------- DIALOG CREATION FROM A USER EXIT HELP Example ---------------
// An example is shown below to create this dialog from a user exit.
// All dialog files must be located in
//             $UGII_USER_DIR/application or
//             $UGII_SITE_DIR/application or
//             $UGII_VENDOR_DIR/application directory


//      1)Add a user exit to the method name below, for example, ufusr().
//      2)Consider how your shared library will be unloaded.  Take a look
//        at the method ufusr_ask_unload().
//------------------------------------------------------------------------------
extern "C" DllExport void ufusr(char *param, int *retcod, int param_len)
{
    try
    {
        NXOpen::UIStyler::DialogResponse response;
        theUIStylerSelectionExample = new UIStylerSelectionExample();
        // The following method shows the dialog immediately
        response = theUIStylerSelectionExample->Show();
        theUIStylerSelectionExample->Dispose();
    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
} // User exit ends

//------------------------------------------------------------------------------
// This method specifies how a shared image is unloaded from memory
// within NX. This method gives you the capability to unload an
// internal NX Open application or user  exit from NX. Specify any
// one of the three constants as a return value to determine the type
// of unload to perform:


//    Immediately : unload the library as soon as the automation program has completed
//    Explicitly  : unload the library from the "Unload Shared Image" dialog
//    AtTermination : unload the library when the NX session terminates


// NOTE:  A program which associates NX Open applications with the menubar
// MUST NOT use this option since it will UNLOAD your NX Open application image
// from the menubar.
//------------------------------------------------------------------------------
extern "C" DllExport int ufusr_ask_unload()
{
    // return (int)Session::LibraryUnloadOptionExplicitly;
    return (int)Session::LibraryUnloadOptionImmediately;
    // return (int)Session::LibraryUnloadOptionAtTermination;
}

//------------------------------------------------------------------------------
// Following method cleanup any housekeeping chores that may be needed.
// This method is automatically called by NX.
//------------------------------------------------------------------------------
extern "C" DllExport void ufusr_cleanup(void)
{
    try
    {
        if(UIStylerSelectionExample::isDisposeCalled == false)
        {
            theUIStylerSelectionExample->Dispose();
        }
        UIStylerSelectionExample::isDisposeCalled = true;
    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
    return;
}


//------------------------------------------------------------------------------
// This method shows the dialog on the screen
//------------------------------------------------------------------------------
NXOpen::UIStyler::DialogResponse UIStylerSelectionExample::Show()
{
    NXOpen::UIStyler::DialogResponse retValue = NXOpen::UIStyler::DialogResponseOk;
    try
    {
        retValue = theDialog->Show();
    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
    return retValue;
}


//------------------------------------------------------------------------------
// Following method disposes all the class members
//------------------------------------------------------------------------------
void UIStylerSelectionExample::Dispose()
{
    try
    {
        if (UIStylerSelectionExample::isDisposeCalled == false)
        {
            delete changeDialog;
            delete changeGrBeg1;
            delete changeBitmap1;
            delete changeLabel1;
            delete changeStr0;
            delete changeCgBeg5;
            delete changeToggle6;
            delete changeReal6;
            delete theDialog;
        }
        UIStylerSelectionExample::isDisposeCalled = true;
    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
    return;
}

//------------------------------------------------------------------------------
//------------------------- UIStyler Callback Functions ------------------------
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Callback Name: sel_cb
// Following callback is associated with the "changeDialog" Styler item.
// Input:
// 1. selectedObject - vector of selected object
// 2. deselectedObjects - vector of deselected object
// 3. selectHandle SelectionHandle
//------------------------------------------------------------------------------
int sel_cb(std::vector<NXOpen::TaggedObject *> selectedObject, std::vector<NXOpen::TaggedObject *> deselectedObjects, NXOpen::SelectionHandle* selectHandle)
{
    try
    {
        std::vector<NXOpen::TaggedObject *>::iterator selIter;
        for (selIter = selectedObject.begin(); selIter != selectedObject.end(); selIter++)
        {
            htEdges[(*selIter)->Tag()] = *selIter;
        }
        for (selIter = deselectedObjects.begin(); selIter != deselectedObjects.end(); selIter++)
        {
            htEdges.erase((*selIter)->Tag());
        }

        int cnt = htEdges.size();
               
        std::stringstream ss;

        ss << "Select Edges ( ";
        ss << cnt;
        ss << " )";

        std::string sel_edges = ss.str();

        theUIStylerSelectionExample->GetChangeLabel1()->SetLabel(NXOpen::NXString(sel_edges));
    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
    // Callback acknowledged, do not terminate dialog
    // A return value of NXOpen::UIStyler::DialogStateExitDialog will not be accepted
    // for this callback type. You must respond to your apply button.
    return NXOpen::UIStyler::DialogStateContinueDialog;
}

//------------------------------------------------------------------------------
// Callback Name: filter_cb
// Following callback is associated with the "changeDialog" Styler item.
// Input:
// 1. selectedObject - pointer to NXOpen::NXObject object
// 2. selectionMask_array - NXOpen::Selection::MaskTriple object
// 3. selectHandle SelectionHandle
//------------------------------------------------------------------------------
int filter_cb(NXOpen::TaggedObject *selectedObject, NXOpen::Selection::MaskTriple* selectionMask_array, NXOpen::SelectionHandle* selectHandle)
{
    try
    {
        NXOpen::Session *theSession = NXOpen::Session::GetSession();
        Part *workPart(theSession->Parts()->Work());
        NXOpen::Features::Block *block(dynamic_cast<NXOpen::Features::Block *>(workPart->Features()->FindObject("BLOCK(1)")));
        NXOpen::Edge *edge(dynamic_cast<NXOpen::Edge *>(block->FindObject("EDGE * 6 * 1")));

        if(selectedObject->Tag() == edge->Tag())
            return UF_UI_SEL_REJECT;
        else
            return UF_UI_SEL_ACCEPT;
    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
    // Callback acknowledged, do not terminate dialog
    // A return value of NXOpen::UIStyler::DialogStateExitDialog will not be accepted
    // for this callback type. You must respond to your apply button.
    return NXOpen::UIStyler::DialogStateContinueDialog;
}

//------------------------------------------------------------------------------
// Callback Name: constructor_cb
// Following callback is associated with the "changeDialog" Styler item.
// Input: eventObject - object of UIStyler.StylerEvent class
//------------------------------------------------------------------------------
NXOpen::UIStyler::DialogState UIStylerSelectionExample::constructor_cb(NXOpen::UIStyler::StylerEvent* eventObject)
{
    try
    {
        // Get the selection handle
        NXOpen::SelectionHandle *selectH = changeDialog->GetSelectionHandle();
        std::vector<NXOpen::Selection::MaskTriple> selectionMask_array;
        NXOpen::Selection::MaskTriple selectionMask_arrayElem;
        selectionMask_arrayElem.Type = UF_solid_type;
        selectionMask_arrayElem.Subtype = UF_solid_edge_subtype;
        selectionMask_arrayElem.SolidBodySubtype = UF_UI_SEL_FEATURE_ANY_EDGE;
        selectionMask_array.push_back(selectionMask_arrayElem);
        UI::GetUI()->SelectionManager()->SetSelectionMask(selectH, NXOpen::Selection::SelectionActionClearAndEnableSpecific, selectionMask_array);
        UI::GetUI()->SelectionManager()->SetTaggedObjectSelectionCallbacks(selectH, make_callback(&filter_cb), make_callback(&sel_cb));
        changeToggle6->SetItemValue(true);
        changeStr0->SetItemValue("5.0");
        changeLabel1->SetLabel("Select Edges (0)");
    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
    // Callback acknowledged, do not terminate dialog
    // A return value of NXOpen::UIStyler::DialogStateExitDialog will not be accepted
    // for this callback type. You must continue dialog construction.
    return NXOpen::UIStyler::DialogStateContinueDialog;
}

//------------------------------------------------------------------------------
// Callback Name: ok_cb
// Following callback is associated with the "changeDialog" Styler item.
// Input: eventObject - object of UIStyler.StylerEvent class
//------------------------------------------------------------------------------
NXOpen::UIStyler::DialogState UIStylerSelectionExample::ok_cb(NXOpen::UIStyler::StylerEvent* eventObject)
{
    try
    {
        apply_cb(eventObject);
    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
    // Callback acknowledged, terminate dialog
    // It is STRONGLY recommanded that you exit your
    // callback with NXOpen::UIStyler::DialogStateExitDialog in a ok callback.
    return NXOpen::UIStyler::DialogStateExitDialog;
}

//------------------------------------------------------------------------------
// Callback Name: apply_cb
// Following callback is associated with the "changeDialog" Styler item.
// Input: eventObject - object of UIStyler.StylerEvent class
//------------------------------------------------------------------------------
NXOpen::UIStyler::DialogState UIStylerSelectionExample::apply_cb(NXOpen::UIStyler::StylerEvent* eventObject)
{
    try
    {
        Part *workPart(theSession->Parts()->Work());
        Part *displayPart(theSession->Parts()->Display());
        // ----------------------------------------------
        //   Menu: Insert->Detail Feature->Edge Blend...
        // ----------------------------------------------
        Session::UndoMarkId markId1;
        markId1 = theSession->SetUndoMark(Session::MarkVisibilityVisible, "Start");

        Features::Feature *nullFeatures_Feature(NULL);
        Features::EdgeBlendBuilder *edgeBlendBuilder1;
        edgeBlendBuilder1 = workPart->Features()->CreateEdgeBlendBuilder(nullFeatures_Feature);
        
        theSession->SetUndoMarkName(markId1, "Edge Blend");

        ScCollector *scCollector1;
        scCollector1 = workPart->ScCollectors()->CreateCollector();

        std::vector<Edge *> seedEdges1;
        Features::Block *block1(dynamic_cast<Features::Block *>(workPart->Features()->FindObject("BLOCK(1)")));
        for (htEdgesIterator = htEdges.begin(); htEdgesIterator != htEdges.end(); ++htEdgesIterator)
        {
            Edge *edge1(dynamic_cast<Edge *>(htEdgesIterator->second));
            seedEdges1.push_back(edge1);
        }
        EdgeMultipleSeedTangentRule *edgeMultipleSeedTangentRule1;
        edgeMultipleSeedTangentRule1 = workPart->ScRuleFactory()->CreateRuleEdgeMultipleSeedTangent(seedEdges1, 0.5, true);

        std::vector<SelectionIntentRule *> rules1(1);
        rules1[0] = edgeMultipleSeedTangentRule1;
        scCollector1->ReplaceRules(rules1, false);

        Session::UndoMarkId markId2;
        markId2 = theSession->SetUndoMark(Session::MarkVisibilityInvisible, "Edge Blend");

        edgeBlendBuilder1->LimitsListData()->CapsList()->Clear(ObjectList::DeleteOptionDelete);

        edgeBlendBuilder1->SetTolerance(0.0254);

        edgeBlendBuilder1->SetAllInstancesOption(false);

        edgeBlendBuilder1->SetRemoveSelfIntersection(true);

        edgeBlendBuilder1->SetConvexConcaveY(false);

        edgeBlendBuilder1->SetRollOverSmoothEdge(true);

        edgeBlendBuilder1->SetRollOntoEdge(true);

        edgeBlendBuilder1->SetMoveSharpEdge(true);

        edgeBlendBuilder1->SetOverlapOption(Features::EdgeBlendBuilder::OverlapAnyConvexityRollOver);

        edgeBlendBuilder1->SetBlendOrder(Features::EdgeBlendBuilder::OrderOfBlendingConvexFirst);

        edgeBlendBuilder1->SetSetbackOption(Features::EdgeBlendBuilder::SetbackSeparateFromCorner);

        int csIndex1;
        csIndex1 = edgeBlendBuilder1->AddChainset(scCollector1, changeStr0->ItemValue());

        Features::Feature *feature1;
        feature1 = edgeBlendBuilder1->CommitFeature();

        theSession->DeleteUndoMark(markId2, NULL);

        edgeBlendBuilder1->Destroy();

        htEdges.clear();
        changeLabel1->SetLabel("Select Edges (0)");
    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
    // Callback acknowledged, do not terminate dialog
    // A return value of NXOpen::UIStyler::DialogStateExitDialog will not be accepted
    // for this callback type. You must respond to your apply button.
    return NXOpen::UIStyler::DialogStateContinueDialog;
}

//------------------------------------------------------------------------------
// Callback Name: bend_radius_cb
// Following callback is associated with the "changeStr0" Styler item.
// Input: eventObject - object of UIStyler.StylerEvent class
//------------------------------------------------------------------------------
NXOpen::UIStyler::DialogState UIStylerSelectionExample::bend_radius_cb(NXOpen::UIStyler::StylerEvent* eventObject)
{
    try
    {
        

        // ---- Enter your callback code here -----
        

    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
    // Callback acknowledged, do not terminate dialog
    return NXOpen::UIStyler::DialogStateContinueDialog;
    // or Callback acknowledged, terminate dialog.
    // return NXOpen::UIStyler::DialogStateExitDialog;
}

//------------------------------------------------------------------------------
// Callback Name: remove_surface_self_intersections_cb
// Following callback is associated with the "changeToggle6" Styler item.
// Input: eventObject - object of UIStyler.StylerEvent class
//------------------------------------------------------------------------------
NXOpen::UIStyler::DialogState UIStylerSelectionExample::remove_surface_self_intersections_cb(NXOpen::UIStyler::StylerEvent* eventObject)
{
    try
    {
        

        // ---- Enter your callback code here -----
        

    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
    // Callback acknowledged, do not terminate dialog
    return NXOpen::UIStyler::DialogStateContinueDialog;
    // or Callback acknowledged, terminate dialog.
    // return NXOpen::UIStyler::DialogStateExitDialog;
}

//------------------------------------------------------------------------------
// Callback Name: tolerance_cb
// Following callback is associated with the "changeReal6" Styler item.
// Input: eventObject - object of UIStyler.StylerEvent class
//------------------------------------------------------------------------------
NXOpen::UIStyler::DialogState UIStylerSelectionExample::tolerance_cb(NXOpen::UIStyler::StylerEvent* eventObject)
{
    try
    {
        

        // ---- Enter your callback code here -----
        

    }
    catch (const NXOpen::NXException& ex)
    {
        // ---- Enter your exception handling code here -----
        UIStylerSelectionExample::theUI->NXMessageBox()->Show("UI Styler", NXOpen::NXMessageBox::DialogTypeError, ex.Message());
    }
    // Callback acknowledged, do not terminate dialog
    return NXOpen::UIStyler::DialogStateContinueDialog;
    // or Callback acknowledged, terminate dialog.
    // return NXOpen::UIStyler::DialogStateExitDialog;
}

