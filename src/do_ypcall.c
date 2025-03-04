/* Copyright (C) 2014, 2017, 2018 Thorsten Kukuk
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

#include <rpcsvc/yp_prot.h>

int
yp_bind (const char *indomain)
{
  return YPERR_YPBIND;
}

void
yp_unbind (const char *indomain)
{
  return;
}

/* This is just an internal function that could probably go away, too */
int
do_ypcall (const char *domain, u_long prog, xdrproc_t xargs,
	   caddr_t req, xdrproc_t xres, caddr_t resp)
{
  return YPERR_YPERR;
}

/* This is just an internal function that could probably go away, too */
int
do_ypcall_tr (const char *domain, u_long prog, xdrproc_t xargs,
	      caddr_t req, xdrproc_t xres, ypresp_val *resp)
{
  return YPERR_YPERR;
}

int
yp_all (const char *indomain, const char *inmap,
        const struct ypall_callback *incallback)
{
  return YPERR_YPERR;
}
