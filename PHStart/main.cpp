/*=============================================================================
Copyright (c) 2004 UGS
Unpublished - All rights reserved
===============================================================================
File description: Interoperability example : Uses Open C API and NX Open C++ API


=============================================================================*/
#include <stdio.h>
#include <iostream>

#include <uf.h>
#include <uf_ui.h>
#include <uf_exit.h>
#include <uf_mb.h>
#include  <direct.h> 
#include <fstream>  
#include <iostream>  
#include <windows.h>  
#ifdef _WIN64
#pragma comment(lib,"CSharpStartX64.lib")
#else
#pragma comment(lib,"CSharpStart.lib")
#endif
using namespace std;



extern "C" __declspec(dllimport) char* Show(char* actionName);

#define EActActionName "EACT_UG_Start"

#define UF_CALL(X) (report_error( __FILE__, __LINE__, #X, (X)))
static int report_error(char *file, int line, char *call, int irc)
{
	if (irc)
	{
		char err[133],
			msg[133];

		sprintf_s(msg, "*** ERROR code %d at line %d in %s:\n+++ ",
			irc, line, file);
		UF_get_fail_message(irc, err);

		UF_print_syslog(msg, FALSE);
		UF_print_syslog(err, FALSE);
		UF_print_syslog("\n", FALSE);
		UF_print_syslog(call, FALSE);
		UF_print_syslog(";\n", FALSE);

		if (!UF_UI_open_listing_window())
		{
			UF_UI_write_listing_window(msg);
			UF_UI_write_listing_window(err);
			UF_UI_write_listing_window("\n");
			UF_UI_write_listing_window(call);
			UF_UI_write_listing_window(";\n");
		}
	}

	return(irc);
}

static UF_MB_cb_status_t EACT_UG_Start(
	UF_MB_widget_t             widget,
	UF_MB_data_t               client_data,
	UF_MB_activated_button_p_t call_button)
{
	if (0x0 != UF_initialize())
	{
		uc1601("NX接口初始化失败", 1);
		return UF_MB_CB_OVERRIDE_STANDARD;
	}
	char* result = Show(call_button->name);
	if (result != "")
	{
		uc1601(result, 1);
	}

	if (0x0 != UF_terminate())
	{
		uc1601("NX用户接口释放失败", 1);
		return UF_MB_CB_OVERRIDE_STANDARD;
	}
	return UF_MB_CB_OVERRIDE_STANDARD;
}

static UF_MB_action_t actionTable[] = { { EActActionName, EACT_UG_Start, NULL }, { NULL, NULL, NULL } };


extern "C" __declspec(dllexport) int ufusr_ask_unload()
{
	//return (int)Session::LibraryUnloadOptionExplicitly;
	//return (int)Session::LibraryUnloadOptionImmediately;
	return(UF_UNLOAD_UG_TERMINATE);
	//return (int)Session::LibraryUnloadOptionAtTermination;
}


extern "C" __declspec(dllexport) void  ufsta(char *param, int *returnCode, int rlen)
{
	if (UF_CALL(UF_initialize()))
	{
		return;
	}
	//用于注册菜单
	UF_CALL(UF_MB_add_actions(actionTable));

	UF_CALL(UF_terminate());
}



