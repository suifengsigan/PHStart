

/*
 *
 */



/*************************************************************************
   WARNING!!  This file is overwritten by the UIStyler each time the
   Styler File is saved.
  
  
        Filename:  ufstyler_sample.h
  
        This file was generated by the UG User Interface UIStyler
        Created by: demo
        Version: Unigraphics V13
              Date: 04-05-97
              Time: 19:44
  
   This include file is overwritten each time the UIStyler dialog is
   saved.  Any modifications to this file will be lost.
*******************************************************************************/
 
 
#ifndef UFSTYLER_SAMPLE_H_INCLUDED
#define UFSTYLER_SAMPLE_H_INCLUDED
 
#include <uf.h> 
#include <uf_defs.h>
#include <uf_styler.h> 
#include <uf_object_types.h> 



/******************* UIStyler Dialog Definitions  ******************* */
/* The following values are definitions into your UIStyler dialog.    */
/* These values will allow you to modify existing objects within your */
/* dialog.   They work directly with the UG/Open API,                 */
/* UF_STYLER_ask_value, UF_STYLER_ask_values, and UF_STYLER_set_value.*/
/******************************************************************** */
 
#define DEMO_SELECT_LABEL              ("SELECT_LABEL")
#define DEMO_SEP_1                     ("SEP_1")
#define DEMO_FILTER_TOGGLE             ("FILTER_TOGGLE")
#define DEMO_ADD_PUSH_BUTTON           ("ADD_PUSH_BUTTON")
#define DEMO_DIR_OPTIONS               ("DIR_OPTIONS")
#define DEMO_NAMES_TEXT                ("NAMES_TEXT")
#define DEMO_NEXT_ACTION               ("NEXT_ACTION")
#define DEMO_SEP                       ("SEP")
#define DEMO_BUTTON_LAYOUT             ("BUTTON_LAYOUT")
#define DEMO_SCALE                     ("SCALE")
#define DEMO_MULTI_LIST                ("MULTI_LIST")
#define DEMO_EDGES_RADIO_BOX           ("EDGES_RADIO_BOX")
#define DEMO_SCROLLED_WINDOW           ("SCROLLED_WINDOW")
#define DEMO_FIELDS_OPTIONS            ("FIELDS_OPTIONS")
#define DEMO_X_REAL                    ("X_REAL")
#define DEMO_Y_REAL                    ("Y_REAL")
#define DEMO_Z_REAL                    ("Z_REAL")
#define DEMO_SCROLLED_WINDOW_END       ("SCROLLED_WINDOW_END")
#define DEMO_DIALOG_OBJECT_COUNT       ( 18 )
 

/*---------------- UIStyler Callback Prototypes --------------- */
/* The following function prototypes define the callbacks       */
/* specified in your UIStyler built dialog.  You are REQUIRED to*/
/* create the associated function for each prototype.  You must */
/* use the same function name and parameter list when creating  */
/* your callback function.                                      */
/************************************************************** */

int DEMO_constructor_cb ( int dialog_id,
             void * client_data,
             UF_STYLER_item_value_type_p_t callback_data);

int DEMO_destructor_cb ( int dialog_id,
             void * client_data,
             UF_STYLER_item_value_type_p_t callback_data);

int DEMO_ok_callback ( int dialog_id,
             void * client_data,
             UF_STYLER_item_value_type_p_t callback_data);

int DEMO_apply_cb ( int dialog_id,
             void * client_data,
             UF_STYLER_item_value_type_p_t callback_data);

int DEMO_filter_toggle_callback ( int dialog_id,
             void * client_data,
             UF_STYLER_item_value_type_p_t callback_data);

int DEMO_add_activate_cb ( int dialog_id,
             void * client_data,
             UF_STYLER_item_value_type_p_t callback_data);

int DEMO_next_cb ( int dialog_id,
             void * client_data,
             UF_STYLER_item_value_type_p_t callback_data);

int DEMO_blo_6_act_cb ( int dialog_id,
             void * client_data,
             UF_STYLER_item_value_type_p_t callback_data);

int DEMO_edges_radio_vc_cb ( int dialog_id,
             void * client_data,
             UF_STYLER_item_value_type_p_t callback_data);

int DEMO_fields_options_act_cb ( int dialog_id,
             void * client_data,
             UF_STYLER_item_value_type_p_t callback_data);





#endif /* UFSTYLER_SAMPLE_H_INCLUDED */
