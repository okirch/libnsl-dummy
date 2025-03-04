/* Copyright (C) 2014 Thorsten Kukuk
   Author: Thorsten Kukuk <kukuk@suse.de>

   This library is free software: you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public License
   in version 2.1 as published by the Free Software Foundation.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <string.h>
#include <rpc/clnt.h>
#include <rpcsvc/ypclnt.h>
#include <rpcsvc/yp_prot.h>

#include "internal.h"

int
yp_first (const char *indomain, const char *inmap, char **outkey,
          int *outkeylen, char **outval, int *outvallen)
{
  return YPERR_YPERR;
}
