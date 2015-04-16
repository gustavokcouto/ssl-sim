/*
 * This file is part of the ssl-sim project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef UTILS_ANGLE_HH_
#define UTILS_ANGLE_HH_

template <typename T> constexpr T RAD(T D) { return M_PI * D / 180.; }
template <typename T> constexpr T DEG(T R) { return 180. * R / M_PI; }

#endif
