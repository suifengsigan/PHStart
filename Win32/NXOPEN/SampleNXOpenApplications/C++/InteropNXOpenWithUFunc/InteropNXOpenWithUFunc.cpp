/*=============================================================================
                       Copyright (c) 2004 UGS
                   Unpublished - All rights reserved
===============================================================================
File description: Interoperability example : Uses Open C API and NX Open C++ API


=============================================================================*/

#include <iostream>

//NX Open C++ header files
#include <NXOpen/Session.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Point.hxx>
#include <NXOpen/Line.hxx>
#include <NXOpen/UI.hxx>
#include <NXOpen/NXMessageBox.hxx>
#include <NXOpen/CurveCollection.hxx>
#include <NXOpen/Arc.hxx>
#include <NXOpen/NXObjectManager.hxx>
#include <NXOpen/NXException.hxx>

//Open C Headers
#include <uf_curve.h>
#include <uf.h>
#include <uf_csys.h>
#include <uf_part.h>
#include "CLRCPPTest.h"
#include <atlstr.h>	//CString的实现，无需使用MFC对象

typedef char*(*fnShow)();

extern "C" DllExport int ufusr_ask_unload()
{
	//return (int)Session::LibraryUnloadOptionExplicitly;
	return (int)NXOpen::Session::LibraryUnloadOptionImmediately;
	//return (int)Session::LibraryUnloadOptionAtTermination;
}

extern "C" DllExport void  ufusr(char *param, int *retcod, int param_len)
{
	try
	{
		/* Initialize the Open C API environment */
		int errorCode = UF_initialize();

		if (0 != errorCode)
			throw NXOpen::NXException::Create(errorCode);


		CString   m_lpszInteface = "C:\\Users\\PENGHUI\\Desktop\\debug\\CLRCPPTest.dll";
		HMODULE  m_hInterface = LoadLibrary(m_lpszInteface);
		if (m_hInterface)
		{
			fnShow fn = (fnShow)GetProcAddress(m_hInterface, "Show");
			NXOpen::UI::GetUI()->NXMessageBox()->Show("test", NXOpen::NXMessageBox::DialogTypeWarning, fn());
		}
		else
		{
			NXOpen::UI::GetUI()->NXMessageBox()->Show("test", NXOpen::NXMessageBox::DialogTypeWarning, "未找到对象");
		}

		/* Initialize the NX Open C++ API environment */
		NXOpen::Session *theSession = NXOpen::Session::GetSession();


		NXOpen::Part *part1;
		/* To get the part from the part tag */
		part1 = part1 = theSession->Parts()->Work();
		/* To create new part using NX Open C++ API.
		NXOpen::NXString partName = "InteropNXOpenWithUFunc.prt";
		part1 = theSession->Parts()->NewDisplay(partName, NXOpen::Part::UnitsInches);
		*/

		/* Set Undo mark */
		NXOpen::Session::UndoMarkId session_UndoMarkId1;
		session_UndoMarkId1 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, "InteropNXOpenWithUFunc");

		/* Create a line using NX Open C++ API*/
		NXOpen::Point3d point3d1(-2.17019791346668, 1.13935390457001, 0);
		NXOpen::Point3d point3d2(-0.714356813182783, 1.13935390457001, 0);
		NXOpen::Line *line1;
		line1 = part1->Curves()->CreateLine(point3d1, point3d2);

		UF_CURVE_line_t line_coords;
		UF_CURVE_ask_line_data(line1->Tag(), &line_coords);

		/* Create an arc using Open C API */
		tag_t arcTag, wcsTag;
		UF_CURVE_arc_t arc_coords;
		// Fill out the data structure 
		arc_coords.start_angle = 0.0;
		arc_coords.end_angle = 3.0;
		arc_coords.arc_center[0] = 0.0;
		arc_coords.arc_center[1] = 0.0;
		arc_coords.arc_center[2] = 1.0;
		arc_coords.radius = 2.0;

		UF_CSYS_ask_wcs(&wcsTag);
		UF_CSYS_ask_matrix_of_object(wcsTag, &arc_coords.matrix_tag);
		UF_CURVE_create_arc(&arc_coords, &arcTag);

		// Create NX Open C++ Arc object using arc tag returned by Open C API
		NXOpen::Arc* nxArc = (NXOpen::Arc*)NXOpen::NXObjectManager::Get(arcTag);

		//Get the Arc parameters using NX Open C++ APIs
		double start_angle = nxArc->StartAngle();
		double end_angle = nxArc->EndAngle();
		NXOpen::Point3d arc_center = nxArc->CenterPoint();
		double radius = nxArc->Radius();

		/* Save this work part.
		To save this work part one can use Open C API as well as NX Open C++ API.
		*/
		/* To save work part using Open C APIs.
		UF_PART_save();
		*/

		/* To save work part using NX Open C++ APIs */
		NXOpen::PartSaveStatus *partSaveStatus = part1->Save(NXOpen::Part::SaveComponentsTrue, NXOpen::Part::CloseAfterSaveTrue);
		/* To close all parts using NX Open C++ APIs */
		theSession->Parts()->CloseAll(NXOpen::BasePart::CloseModifiedCloseModified, NULL);

		/* Terminate the Open C API environment */
		errorCode = UF_terminate();

		std::cout << "Created a new part" << std::endl;
	}
	catch (const NXOpen::NXException& ex)
	{
		std::cerr << "Caught exception " << ex.Message() << std::endl;
	}

}


