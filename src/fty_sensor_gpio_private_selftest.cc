/*  =========================================================================
    fty_sensor_gpio_private_selftest.c - run private classes selftests

    Runs all private classes selftests.

    -------------------------------------------------------------------------
    Copyright (C) 2014 - 2021 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

    =========================================================================
*/

#include "fty_sensor_gpio_classes.h"


//  -------------------------------------------------------------------------
//  Run all private classes tests.
//

void
fty_sensor_gpio_private_selftest (bool verbose, const char *subtest)
{
// Tests for stable private classes:
    if (streq (subtest, "$ALL") || streq (subtest, "libgpio"))
        libgpio_test (verbose);
    if (streq (subtest, "$ALL") || streq (subtest, "fty_sensor_gpio_assets"))
        fty_sensor_gpio_assets_test (verbose);
    if (streq (subtest, "$ALL") || streq (subtest, "fty_sensor_gpio_server"))
        fty_sensor_gpio_server_test (verbose);
}