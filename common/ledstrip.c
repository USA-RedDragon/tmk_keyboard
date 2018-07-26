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

#include "ledstrip.h"

ledstrip_config_t ledstrip_config;

void ledstrip_init(void)
{
    ledstrip_config.color = (rgb_color){0, 0, 0};
    ledstrip_set(ledstrip_config.color);
}

void ledstrip_red_up(void) {
    if(ledstrip_config.color.red >= 238)
        ledstrip_config.color.red = 255;
    else
        ledstrip_config.color.red += 17;
    ledstrip_set(ledstrip_config.color);
}

void ledstrip_red_down(void) {
    if(ledstrip_config.color.red <= 17)
        ledstrip_config.color.red = 0;
    else
        ledstrip_config.color.red -= 17;
    ledstrip_set(ledstrip_config.color);
}

void ledstrip_blue_up(void) {
    if(ledstrip_config.color.blue >= 238)
        ledstrip_config.color.blue = 255;
    else
        ledstrip_config.color.blue += 17;
    ledstrip_set(ledstrip_config.color);
}

void ledstrip_blue_down(void) {
    if(ledstrip_config.color.blue <= 17)
        ledstrip_config.color.blue = 0;
    else
        ledstrip_config.color.blue -= 17;
    ledstrip_set(ledstrip_config.color);
}

void ledstrip_green_up(void) {
    if(ledstrip_config.color.green >= 238)
        ledstrip_config.color.green = 255;
    else
        ledstrip_config.color.green += 17;
    ledstrip_set(ledstrip_config.color);
}

void ledstrip_green_down(void) {
    if(ledstrip_config.color.green <= 17)
        ledstrip_config.color.green = 0;
    else
        ledstrip_config.color.green -= 17;
    ledstrip_set(ledstrip_config.color);
}
