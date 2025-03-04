/* Modified and extended by Thorsten Kukuk <kukuk@thkukuk.de>, 2016 */
/*
 * Copyright (c) 2010, Oracle America, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *     * Neither the name of the "Oracle America, Inc." nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *   FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *   COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *   INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 *   DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 *   GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <rpc/types.h>
#include <rpc/xdr.h>
#include <rpcsvc/yp_prot.h>
#include <rpcsvc/ypclnt.h>

bool_t
xdr_ypstat (XDR *xdrs, ypstat *objp)
{
  return FALSE;
}

bool_t
xdr_ypxfrstat(XDR *xdrs, ypxfrstat *objp)
{
  return FALSE;
}

bool_t
xdr_domainname (XDR *xdrs, char **objp)
{
  return FALSE;
}

bool_t
xdr_keydat (XDR *xdrs, keydat_t *objp)
{
  return FALSE;
}

bool_t
xdr_valdat (XDR *xdrs, valdat_t *objp)
{
  return FALSE;
}

bool_t
xdr_ypmap_parms (XDR *xdrs, struct ypmap_parms *objp)
{
  return FALSE;
}

bool_t
xdr_ypreq_key (XDR *xdrs, struct ypreq_key *objp)
{
  return FALSE;
}

bool_t
xdr_ypreq_nokey (XDR *xdrs, struct ypreq_nokey *objp)
{
  return FALSE;
}

bool_t
xdr_ypreq_xfr (XDR *xdrs, struct ypreq_xfr *objp)
{
  return FALSE;
}

bool_t
xdr_ypreq_newxfr (XDR *xdrs, struct ypreq_newxfr *objp)
{
  return FALSE;
}

bool_t
xdr_ypresp_val (XDR *xdrs, struct ypresp_val *objp)
{
  return FALSE;
}

bool_t
xdr_ypresp_key_val (XDR *xdrs, struct ypresp_key_val *objp)
{
  return FALSE;
}

bool_t
xdr_ypresp_master (XDR *xdrs, struct ypresp_master *objp)
{
  return FALSE;
}

bool_t
xdr_ypresp_order (XDR *xdrs, struct ypresp_order *objp)
{
  return FALSE;
}

bool_t
xdr_ypresp_xfr (XDR *xdrs, ypresp_xfr *objp)
{
  return TRUE;
}

bool_t
xdr_ypresp_all (XDR *xdrs, struct ypresp_all *objp)
{
  return TRUE;
}

bool_t
xdr_ypmaplist (XDR *xdrs, struct ypmaplist *objp)
{
  return FALSE;
}

bool_t
xdr_ypresp_maplist (XDR *xdrs, struct ypresp_maplist *objp)
{
  return FALSE;
}

static bool_t
xdr_yppush_status (XDR *xdrs, enum yppush_status *objp)
{
  return FALSE;
}

bool_t
xdr_yppushresp_xfr (XDR *xdrs, struct yppushresp_xfr *objp)
{
  return FALSE;
}

bool_t
xdr_ypbind_resptype (XDR *xdrs, enum ypbind_resptype *objp)
{
  return FALSE;
}

bool_t
xdr_ypbind2_binding (XDR *xdrs, struct ypbind2_binding *objp)
{
  return FALSE;
}

bool_t
xdr_ypbind2_resp (XDR *xdrs, struct ypbind2_resp *objp)
{
  return FALSE;
}

bool_t
xdr_ypbind_oldsetdom (XDR *xdrs, struct ypbind_oldsetdom *objp)
{
  return TRUE;
}

bool_t
xdr_ypbind2_setdom (XDR *xdrs, struct ypbind2_setdom *objp)
{
  return FALSE;
}

bool_t
xdr_ypbind3_binding (XDR *xdrs,  struct ypbind3_binding *objp)
{
  return FALSE;
}


bool_t
xdr_ypbind3_resp (XDR *xdrs, struct ypbind3_resp *objp)
{
  return TRUE;
}

bool_t
xdr_ypbind3_setdom (XDR *xdrs, ypbind3_setdom *objp)
{
  return FALSE;
}

bool_t
xdr_ypall(XDR *xdrs, struct ypall_callback *incallback)
{
  return FALSE;
}
