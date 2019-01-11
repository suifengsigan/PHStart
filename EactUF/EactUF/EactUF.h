// EactUF.h

#pragma once

using namespace System;

#include <stdio.h> 
#include <uf.h>
#include <uf_defs.h>
#include <uf_exit.h>
#include <uf_ui.h>
#include <uf_styler.h>
#include <uf_mb.h> 
#include <uf_cut_levels.h>

extern "C" __declspec(dllexport) int EACT_UF_CUT_LEVELS_load(tag_t operation_tag, UF_CUT_LEVELS_t **cut_levels_ptr_addr)
{
	return UF_CUT_LEVELS_load(operation_tag, cut_levels_ptr_addr);
}
