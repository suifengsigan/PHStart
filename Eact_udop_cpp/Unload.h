#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Runtime::InteropServices;
using namespace System::Reflection;
using namespace System::Collections;

ref class Unload
{
public:
	Unload();
	static void Main();
	static int GetUnloadOption(String ^ arg);
};

