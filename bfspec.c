/*
  Brainfuck frontend for GCC

  Copyright (C) 2002-2009 Free Software Foundation, Inc.
  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/* Written by Giuseppe Scrivano <gscrivano@gnu.org>  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "debug.h"
#include "tm.h"
#include "tree.h"
#include "c-tree.h"
#include "c-common.h"
#include "ggc.h"
#include "langhooks.h"
#include "langhooks-def.h"
#include "diagnostic.h"

void
lang_specific_driver (int *in_argc ATTRIBUTE_UNUSED,
                      const char *const **in_argv ATTRIBUTE_UNUSED,
		      int *in_added_libraries ATTRIBUTE_UNUSED)
{

}


int lang_specific_pre_link (void)
{
  return 0;
}

int lang_specific_extra_outfiles = 0;
