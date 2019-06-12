#include "stdafx.h"
#include "Unload.h"


Unload::Unload()
{
}

void Unload::Main()
{
	EactCommand::Entry::ExcuteCommand((int)EactCommand::CommandType::Test, "");
}

int Unload::GetUnloadOption(String ^ arg)
{
	return 1;
}