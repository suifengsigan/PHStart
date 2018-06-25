#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Runtime::InteropServices;
using namespace System::Reflection;
using namespace System::Collections;

public ref class ProxyObject{
public:
	static void ExecuteMothod(String^ actionName,String^ baseDirectory)
	{
		AppDomainSetup^ setup = gcnew AppDomainSetup;
		setup->ApplicationBase = baseDirectory;
		AppDomain^ _appDomain = AppDomain::CreateDomain(Path::Combine(actionName, ".dll"), nullptr, setup);
		try
		{
			auto args = gcnew array<String^, 1>{actionName};
			_appDomain->ExecuteAssembly(Path::Combine(baseDirectory, "CSharpEntry.exe"), args);
		}
		catch (Exception^ ex)
		{
			throw ex;
		}
		finally
		{
			AppDomain::Unload(_appDomain);
		}
	}
};