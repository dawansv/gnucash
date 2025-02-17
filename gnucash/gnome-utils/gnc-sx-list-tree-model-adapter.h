/********************************************************************\
 * gnc-sx-list-tree-model-adapter.h                                 *
 *                                                                  *
 * Copyright (C) 2006 Joshua Sled <jsled@asynchronous.org>          *
 *                                                                  *
 * This program is free software; you can redistribute it and/or    *
 * modify it under the terms of version 2 and/or version 3 of the   *
 * GNU General Public License as published by the Free Software     *
 * Foundation.                                                      *
 *                                                                  *
 * As a special exception, permission is granted to link the binary *
 * module resultant from this code with the OpenSSL project's       *
 * "OpenSSL" library (or modified versions of it that use the same  *
 * license as the "OpenSSL" library), and distribute the linked     *
 * executable.  You must obey the GNU General Public License in all *
 * respects for all of the code used other than "OpenSSL". If you   *
 * modify this file, you may extend this exception to your version  *
 * of the file, but you are not obligated to do so. If you do not   *
 * wish to do so, delete this exception statement from your version *
 * of this file.                                                    *
 *                                                                  *
 * This program is distributed in the hope that it will be useful,  *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of   *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    *
 * GNU General Public License for more details.                     *
 *                                                                  *
 * You should have received a copy of the GNU General Public License*
 * along with this program; if not, contact:                        *
 *                                                                  *
 * Free Software Foundation           Voice:  +1-617-542-5942       *
 * 51 Franklin Street, Fifth Floor    Fax:    +1-617-542-2652       *
 * Boston, MA  02110-1301,  USA       gnu@gnu.org                   *
\********************************************************************/

#ifndef _GNC_SX_LIST_TREE_MODEL_ADAPTER_H
#define _GNC_SX_LIST_TREE_MODEL_ADAPTER_H

#include <config.h>
#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include "gnc-sx-instance-model.h"

G_BEGIN_DECLS

#define GNC_TYPE_SX_LIST_TREE_MODEL_ADAPTER            (gnc_sx_list_tree_model_adapter_get_type ())
G_DECLARE_FINAL_TYPE (GncSxListTreeModelAdapter, gnc_sx_list_tree_model_adapter, GNC, SX_LIST_TREE_MODEL_ADAPTER, GObject)

// model columns
enum
{
    SXLTMA_COL_NAME = 0,
    SXLTMA_COL_ENABLED,
    SXLTMA_COL_FREQUENCY,
    SXLTMA_COL_LAST_OCCUR,
    SXLTMA_COL_NEXT_OCCUR
};

GncSxListTreeModelAdapter* gnc_sx_list_tree_model_adapter_new (GncSxInstanceModel *instances);

GncSxInstances* gnc_sx_list_tree_model_adapter_get_sx_instances (GncSxListTreeModelAdapter *model, GtkTreeIter *iter);

G_END_DECLS

#endif // _GNC_SX_LIST_TREE_MODEL_ADAPTER_H
