// 这是主 DLL 文件。

#include "stdafx.h"

#include "CSharpStart.h"


using namespace System;
using namespace System::IO;
using namespace System::Runtime::InteropServices;
using namespace System::Reflection;
using namespace System::Collections;

char* EACT_COMMAND(int type, char* command)
{
	String ^ commandStr = Marshal::PtrToStringAnsi((IntPtr)command);
	return (char*)Marshal::StringToHGlobalAnsi(EactCommand::Entry::ExcuteCommand(type, commandStr)).ToPointer();
}