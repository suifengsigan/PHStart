// 这是主 DLL 文件。

#include "stdafx.h"

#include "CSharpStart.h"
#include "AssemblyDynamicLoader.h"


using namespace System;
using namespace System::IO;
using namespace System::Runtime::InteropServices;
using namespace System::Reflection;
using namespace System::Collections;

char* EACT_COMMAND(int type, char* command)
{
	return "";
}

char* Show(char* actionName)
{
	char* result = "";
	try
	{
		String ^ actionNameStr = Marshal::PtrToStringAnsi((IntPtr)actionName);
		auto path = Path::GetDirectoryName(Assembly::GetExecutingAssembly()->Location);
		//获取上级目录
		path = path->Substring(0, path->LastIndexOf("\\"));
		path = Path::Combine(path,"Application");
		ProxyObject::ExecuteMothod(actionNameStr, path);
	}
	catch (Exception^ ex)
	{
		result = (char*)Marshal::StringToHGlobalAnsi(ex->Message).ToPointer();
	}
	return result;
}

char* GetSYSSHAREVar(char* key)
{
	if (key == "IV")
	{
		return "1234";
	}
	if (key == "KEY")
	{
		return "1234567sdfsfsfdljlsfdkja^9999999999999";
	}
	if (key == "email")
	{
		return "577104206@qq.com";
	}
	if (key == "uuid")
	{
		return "91420100781995775H-20181030";
	}
	if (key == "sn")
	{
		return "c090381767efea67545d70e6f5cf12b2";
	}
	return "";
}