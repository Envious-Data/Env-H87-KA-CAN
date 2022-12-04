/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_all( \
	k0A, k0B, k0C, k0D, k0E, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N, k0O, k0P, k0Q, k0R, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1O, k1P, k1Q, k1R, k2A, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k2N, k3O, k2P, k2Q, k2R, k3A, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k3N, k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I, k4J, k4K, k4L, k4N, k4O, k4Q, k5A, k5C, k5D, k5H, k5L, k5N, k5O, k5P, k5Q, k5R \
) { \
	{k0A, k0B, k0C, k0D, k0E, XXX, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N, k0O, k0P, k0Q, k0R}, \
	{k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, XXX, k1O, k1P, k1Q, k1R}, \
	{k2A, XXX, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k2N, XXX, k2P, k2Q, k2R}, \
	{k3A, XXX, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k3N, k3O, XXX, XXX, XXX}, \
	{k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I, k4J, k4K, k4L, XXX, k4N, k4O, XXX, k4Q, XXX}, \
	{k5A, XXX, k5C, k5D, XXX, XXX, XXX, k5H, XXX, XXX, XXX, k5L, XXX, k5N, k5O, k5P, k5Q, k5R} \
}
