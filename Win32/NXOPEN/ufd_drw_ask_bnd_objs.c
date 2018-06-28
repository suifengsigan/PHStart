/*===========================================================================

        Copyright (c) 1998 Unigraphics Solutions Corporation
                     Unpublished - All rights reserved

===========================================================================*/
/***************************************************************************/
/*
 *  Description
 *    This function is a small sample program that demonstrates
 *    the invocation of UF_DRAW_ask_bound_by_objects().  It is placed
 *    directly in our UFUN documentation starting with the
 *    include statements.
 *
 
 *
 ****************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <uf.h>
#include <uf_defs.h>
#include <uf_draw.h>
#include <uf_obj.h>
#include <uf_part.h>
#include <uf_view.h>

void ufusr(char *param, int *retcod, int param_len)
{
  int         ifail = 0;
  tag_t       view_tag = NULL_TAG;
  tag_t       part_tag = NULL_TAG;
  tag_t       *object_tags = NULL;
  int         num_objects = 0;
  char        *view_name = "TOP@1";
  char        error_message[133];
    
  ifail = UF_initialize();
    
  if( !ifail )
      part_tag = UF_PART_ask_display_part();
    
  if( !ifail && part_tag != NULL_TAG )
      ifail = UF_VIEW_ask_tag_of_view_name( view_name, 
                                           &view_tag );
    
  if( !ifail && part_tag != NULL_TAG && 
       view_tag != NULL_TAG )
      ifail = UF_DRAW_ask_bound_by_objects( view_tag, 
                                           &num_objects,
                                           &object_tags );
  /* Code could be inserted here to use some of the objects *
   * to redefine the view boundary.                         */
   
  printf( "UF_DRAW_ask_bound_by_objects " );
  if( ifail )
  {
      ifail = UF_get_fail_message( ifail, error_message );
      printf( "fails. \nError is:%s\n", error_message );
  }
  else if( part_tag == NULL_TAG )
      printf( "fails.\nError is: no active part.\n" );
  else if ( view_tag == NULL_TAG )
      printf( "fails.\nError is: view not found.\n" );
  else   
      printf( "is successful.\n" );
    
  UF_free( object_tags ); 
  ifail = UF_terminate();
}

