/*
 * Copyright (C) 2014 David "PhaseBurn" Bauman
 * Copyright (C) 2014 CarbonROM
 * Based on Chainfire's OpenDelta for Omni Rom, and work by Myself5
 */
/*
 * This file is part of CarbonDelta.
 *
 * CarbonDelta is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * CarbonDelta is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with CarbonDelta. If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "delta.h"

int main(int argc, char *argv[]) {
	if (argc >= 4) {
		dedelta(argv[1], argv[2], argv[3]);
		return 0;
	}
	
	printf("Usage: dedelta source delta output\n");
	return 0;
}
