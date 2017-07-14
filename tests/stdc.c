/*
 * Keycode Map Generator C Tests
 *
 * Copyright 2017 Pierre Ossman for Cendio AB
 *
 * This file is dual license under the terms of the GPLv2 or later
 * and 3-clause BSD licenses.
 */

#include <assert.h>
#include "osx2win32.h"

int main(int argc, char** argv)
{
	assert(code_map_osx_to_win32[0x1d] == 0x30);

	return 0;
}
