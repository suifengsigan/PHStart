// CSharpStart.h

#pragma once

extern "C" __declspec(dllexport) char* Show(char* actionName);

extern "C" __declspec(dllexport) char* GetSYSSHAREVar(char* key);

extern "C" __declspec(dllexport) char* EACT_COMMAND(int type,char* command);