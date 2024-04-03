/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define STATUS_LOGO_WIDTH 24

const unsigned char status_logo_bmp[] PROGMEM = {
  0x00,0x0C,0x00, // ............##..........
  0x00,0x7F,0x00, // .........#######........
  0x01,0xBF,0xA0, // .......##.#######.#.....
  0x07,0xCF,0xB0, // .....#####..#####.##....
  0x0F,0xF7,0xB8, // ....########.####.###...
  0x1F,0xFB,0xB8, // ...##########.###.###...
  0x3C,0x00,0xBC, // ..####..........#.####..
  0x23,0x00,0x3E, // ..#...##..........#####.
  0x1E,0x00,0x3E, // ...####...........#####.
  0x7C,0x00,0x3D, // .#####............####.#
  0x7C,0x00,0x1B, // .#####.............##.##
  0x78,0x00,0x1B, // .####..............##.##
  0xF4,0x00,0x17, // ####.#.............#.###
  0xEC,0x00,0x0F, // ###.##..............####
  0x6C,0x00,0x0F, // .##.##..............####
  0x5C,0x00,0x1F, // .#.###.............#####
  0x3C,0x00,0x1E, // ..####.............####.
  0x3D,0x00,0x30, // ..####.#..........##....
  0x1D,0x80,0x0C, // ...###.##...........##..
  0x1D,0xCF,0xF8, // ...###.###..#########...
  0x0E,0xF3,0xF8, // ....###.####..#######...
  0x02,0xFD,0xE0, // ......#.######.####.....
  0x02,0xFE,0xC0, // ......#.#######.##......
  0x00,0x7E,0x00  // .........######.........
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
