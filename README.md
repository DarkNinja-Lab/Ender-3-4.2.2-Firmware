<a name="readme-top"></a>

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]


<p align="center">
  <img src="https://mma.prnewswire.com/media/1609256/Logo.jpg?p=facebook" width="350">


# Marlin 2.1.2.2 Firmware
Marlin Firmware for **Ender 3**, Board Version **4.2.2**, Chip **GD32F303 RET6**

## Installation
Download the finished `Ender3_4.2.2-HappyNET_Firmware.bin` file [Here](https://github.com/DarkNinja-Lab/Marlin-2.1.2.2/releases/tag/Release) and copy it to a micro SD card, then plug it into the printer and start it. The firmware update is done automatically!
```
Your own changes can be made, the firmware must then be created using Auto Build Marlin.

This requires things:
- Visual Code Studio
- PlatformIO (Visual Code Studio Extension)
- Auto Build Marlin (Visual Code Studio Extension)
```

## Features
- BL-Touch for mesh, homing, endstop Z pin
- LED control via relay (old Buzzer Pin)
- Z-OffSet Wizard in the LCD menu
- Custom PID Settings (Creality Ender 3)
- Menu language: German
- ADVANCED PAUSE FEATURE
- Nozzle Max Temp 275
- S CURVE ACCELERATION

## Current Values
### PID values
**Config : Marlin-2.1.2.2/Marlin/Configurartion.h**
```
#define DEFAULT_Kp  22.84 
#define DEFAULT_Ki   2.04 
#define DEFAULT_Kd  63.9
```
### BL-Touch Offset
**Config : Marlin-2.1.2.2/Marlin/Configurartion.h**

```
#define NOZZLE_TO_PROBE_OFFSET { -41, -10, -1.58 }
```
## Boot/Status Screen

### Status
```
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
```

### Boot
```
const unsigned char custom_start_bmp[] PROGMEM = {
  0x01,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .......#######..........................................................................
  0x02,0xFE,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ......#.#######.#.......................................................................
  0x0F,0x7E,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....####.######.##......................................................................
  0x1F,0x9E,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...######..####.###.....................................................................
  0x3F,0xCE,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..########..###.####....................................................................
  0x3F,0x86,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..#######....##.#####...................................................................
  0x70,0x02,0x79,0x0F,0xC7,0xF3,0xE3,0xFB,0x18,0xF8,0xFE, // .###..........#..####..#....######...#######..#####...#######.##...##...#####...#######.
  0x0E,0x00,0x73,0x0F,0xE7,0xE3,0xF7,0xF3,0x18,0xFC,0xFC, // ....###..........###..##....#######..######...######.#######..##...##...######..######..
  0xFC,0x00,0x67,0x8C,0x66,0x03,0x31,0x83,0x18,0xCC,0xC0, // ######...........##..####...##...##..##.......##..##...##.....##...##...##..##..##......
  0xFC,0x00,0x4D,0x9F,0xCF,0xE7,0xF1,0x86,0x31,0xFD,0xFC, // ######...........#..##.##..#######..#######..#######...##....##...##...#######.#######..
  0xF8,0x00,0x19,0x9F,0xCF,0xC7,0xE1,0x86,0x31,0xF9,0xF8, // #####..............##..##..#######..######...######....##....##...##...######..######...
  0xF0,0x00,0x19,0x98,0x0C,0x06,0x61,0x86,0x31,0x99,0x80, // ####...............##..##..##.......##.......##..##....##....##...##...##..##..##.......
  0xEC,0x00,0x3F,0x98,0x0C,0x06,0x61,0x86,0x31,0x99,0x80, // ###.##............#######..##.......##.......##..##....##....##...##...##..##..##.......
  0x6C,0x00,0x61,0xB0,0x1F,0xCC,0x63,0x07,0xF3,0x33,0xF8, // .##.##...........##....##.##.......#######..##...##...##.....#######..##..##..#######...
  0x5C,0x00,0xC1,0xB0,0x1F,0x8C,0x63,0x03,0xC3,0x33,0xF0, // .#.###..........##.....##.##.......######...##...##...##......####....##..##..######....
  0x3D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..####.#................................................................................
  0x3D,0x9F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..####.##..##########...................................................................
  0x3C,0xEF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..####..###.########....................................................................
  0x1E,0xF7,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...####.####.######.....................................................................
  0x0E,0xF9,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....###.#####..###......................................................................
  0x02,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ......#.#######.........................................................................
  0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00  // .........#####..........................................................................
};
```
## Original Marlin Download 2.1.2.2

### Config Files:
https://github.com/MarlinFirmware/Configurations/archive/release-2.1.2.2.zip

### Marlin: 
https://github.com/MarlinFirmware/Marlin/archive/2.1.2.2.zip



<!--## Written in

[![Next][Next.js]][Next-url] -->



<!-- MARKDOWN LINKS & IMAGES -->

[contributors-shield]: https://img.shields.io/github/contributors/DarkNinja-Lab/Marlin-2.1.2.2.svg?style=for-the-badge

[contributors-url]: https://github.com/DarkNinja-Lab/Marlin-2.1.2.2/graphs/contributors



[forks-shield]: https://img.shields.io/github/forks/DarkNinja-Lab/Marlin-2.1.2.2.svg?style=for-the-badge

[forks-url]: https://github.com/DarkNinja-Lab/Marlin-2.1.2.2/network/members



[stars-shield]: https://img.shields.io/github/stars/DarkNinja-Lab/Marlin-2.1.2.2.svg?style=for-the-badge
[stars-url]: https://github.com/DarkNinja-Lab/Marlin-2.1.2.2/stargazers
[issues-shield]: https://img.shields.io/github/issues/DarkNinja-Lab/Marlin-2.1.2.2.svg?style=for-the-badge
[issues-url]: https://github.com/DarkNinja-Lab/Marlin-2.1.2.2/issues
[license-shield]: https://img.shields.io/github/license/DarkNinja-Lab/Marlin-2.1.2.2.svg?style=for-the-badge
[license-url]: https://github.com/DarkNinja-Lab/Marlin-2.1.2.2/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/DarkNinja-Lab
[product-screenshot]: images/screenshot.png
[Next.js]: https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
[Next-url]: https://nextjs.org/
[React.js]: https://img.shields.io/badge/React-20232A?style=for-the-badge&logo=react&logoColor=61DAFB
[React-url]: https://reactjs.org/
[Vue.js]: https://img.shields.io/badge/Vue.js-35495E?style=for-the-badge&logo=vuedotjs&logoColor=4FC08D
[Vue-url]: https://vuejs.org/
[Angular.io]: https://img.shields.io/badge/Angular-DD0031?style=for-the-badge&logo=angular&logoColor=white
[Angular-url]: https://angular.io/
[Svelte.dev]: https://img.shields.io/badge/Svelte-4A4A55?style=for-the-badge&logo=svelte&logoColor=FF3E00
[Svelte-url]: https://svelte.dev/
[Laravel.com]: https://img.shields.io/badge/Laravel-FF2D20?style=for-the-badge&logo=laravel&logoColor=white
[Laravel-url]: https://laravel.com
[Bootstrap.com]: https://img.shields.io/badge/Bootstrap-563D7C?style=for-the-badge&logo=bootstrap&logoColor=white
[Bootstrap-url]: https://getbootstrap.com
[JQuery.com]: https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white
[JQuery-url]: https://jquery.com 
