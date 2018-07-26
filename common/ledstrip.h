/*
Copyright 2013 Mathias Andersson <wraul@dbox.se>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef LEDSTRIP_H
#define LEDSTRIP_H

#include <stdint.h>
#include <stdbool.h>

/** The rgb_color struct represents the color for an 8-bit RGB LED.
    Examples:
      Black:      (rgb_color){ 0, 0, 0 }
      Pure red:   (rgb_color){ 255, 0, 0 }
      Pure green: (rgb_color){ 0, 255, 0 }
      Pure blue:  (rgb_color){ 0, 0, 255 }
      White:      (rgb_color){ 255, 255, 255} */
typedef struct rgb_color
{
  unsigned char red, green, blue;
} rgb_color;

typedef union {
    rgb_color color;
} ledstrip_config_t;

void ledstrip_init(void);

void ledstrip_set(rgb_color color);

void ledstrip_red_up(void);
void ledstrip_red_down(void);
void ledstrip_green_up(void);
void ledstrip_green_down(void);
void ledstrip_blue_up(void);
void ledstrip_blue_down(void);

#endif
