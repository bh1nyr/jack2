/*
Copyright (C) 2001 Paul Davis
Copyright (C) 2004-2008 Grame

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

*/

#ifndef __JackShmMem_WIN32__
#define __JackShmMem_WIN32__

#include <windows.h>

#define CHECK_MLOCK(ptr, size) (VirtualLock((ptr), (size)) != 0)
#define CHECK_MUNLOCK(ptr, size) (VirtualUnlock((ptr), (size)) != 0)
#define CHECK_MLOCKALL()(false)
#define CHECK_MUNLOCKALL()(false)

#endif