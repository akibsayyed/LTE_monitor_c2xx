/* packet-scsi-osd.h
 * Ronnie sahlberg 2006
 *
 * $Id: packet-scsi-osd.h 47992 2013-03-01 23:53:11Z rbalint $
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 2002 Gerald Combs
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

#ifndef __PACKET_SCSI_OSD_H_
#define __PACKET_SCSI_OSD_H_

#include "ws_symbol_export.h"

#define SCSI_OSD_OPCODE			0x7f

extern int hf_scsi_osd_opcode;
extern scsi_cdb_table_t scsi_osd_table[256];
WS_DLL_PUBLIC const value_string scsi_osd_vals[];

#endif
