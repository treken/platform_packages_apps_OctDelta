/*
 * Copyright (C) 2014 David "PhaseBurn" Bauman
 * Copyright (C) 2014 CarbonROM
 * Copyright (C) 2014 Team OctOS 
 * Based on Chainfire's OpenDelta for Omni Rom, work by Myself5, and code changes by Treken
 */
/*
 * This file is part of OctDelta.
 *
 * OctDelta is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OctDelta is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OctDelta. If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <string.h>
#include "zipadjust.h"

int main(int argc, char *argv[]) {
	if (argc >= 3) {
		if ((argc >= 4) && (strcmp(argv[1], "--decompress") == 0)) {
			zipadjust(argv[2], argv[3], 1);
			return 0;
		} else {
			zipadjust(argv[1], argv[2], 0);
			return 0;
		}
	}
	
	printf("Usage: zipadjust [--decompress] input.zip output.zip\n");
	printf("\n");
	printf("Rewrites a zipfile removing all extra fields and comments (this includes the signapk whole-file signature), and synchronizing local headers with the central directory so no data descriptors are needed anymore. Optionally, the output zip is converted to only use STORE.\n");
	printf("\n");
	printf("Written to work specifically with Android OTA zip files, and does not cope with all possible zip file features and formats.\n");
	return 0;
}
