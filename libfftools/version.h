/*
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef LIBFFTOOLS_VERSION_H
#define LIBFFTOOLS_VERSION_H

/**
 * @file
 * @ingroup lavr
 * LIBFFTOOLS version macros.
 */

#include "libavutil/version.h"

#define LIBFFTOOLS_VERSION_MAJOR  4
#define LIBFFTOOLS_VERSION_MINOR  3
#define LIBFFTOOLS_VERSION_MICRO  0

#define LIBFFTOOLS_VERSION_INT  AV_VERSION_INT(LIBFFTOOLS_VERSION_MAJOR, \
                                               LIBFFTOOLS_VERSION_MINOR, \
                                               LIBFFTOOLS_VERSION_MICRO)
#define LIBFFTOOLS_VERSION          AV_VERSION(LIBFFTOOLS_VERSION_MAJOR, \
                                               LIBFFTOOLS_VERSION_MINOR, \
                                               LIBFFTOOLS_VERSION_MICRO)
#define LIBFFTOOLS_BUILD        LIBFFTOOLS_VERSION_INT

#define LIBFFTOOLS_IDENT        "Lfpr" AV_STRINGIFY(LIBFFTOOLS_VERSION)

/**
 * FF_API_* defines may be placed below to indicate public API that will be
 * dropped at a future version bump. The defines themselves are not part of
 * the public API and may change, break or disappear at any time.
 */

#endif /* LIBFFTOOLS_VERSION_H */
