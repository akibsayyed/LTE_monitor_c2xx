/* dfilter_expr_dlg.h
 * Definitions for dialog boxes for display filter expression construction
 *
 * $Id: dfilter_expr_dlg.h 43536 2012-06-28 22:56:06Z darkjames $
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
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

#ifndef __DFILTER_EXPR_DLG_H__
#define __DFILTER_EXPR_DLG_H__

/** @file
 *  "Add Expression" dialog box.
 *  @ingroup dialog_group
 */

/** User requested the "Add Expression" dialog box by menu or toolbar.
 *
 * @param widget corresponding text entry widget
 * @return the newly created dialog widget
 */
GtkWidget *dfilter_expr_dlg_new(GtkWidget *widget);

#endif /* dfilter_expr_dlg.h */