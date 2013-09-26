/* packet-ax25-kiss.h
 *
 * Routines for AX.25 KISS protocol dissection
 * Copyright 2010,2012 R.W. Stearn <richard@rns-stearn.demon.co.uk>
 *
 * $Id: packet-ax25-kiss.h 48848 2013-04-14 18:55:28Z eapache $
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __PACKET_AX25_KISS_H__
#define __PACKET_AX25_KISS_H__

#include "ws_symbol_export.h"

WS_DLL_PUBLIC
void capture_ax25_kiss(const guchar *, int, int, packet_counts *);

#endif