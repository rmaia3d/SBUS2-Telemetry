/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#if !defined(_SBUS2_H)
#define _SBUS2_H

#include <avr/io.h>

void SBUS2_Setup();        
void send_RPM(uint8_t port, uint16_t RPM);
void send_temp125(uint8_t port, int16_t temp);
void send_alarm_as_temp125(uint8_t port, int16_t alarm);
void send_s1678_current(uint8_t port, uint16_t current, uint16_t capacity, uint16_t voltage);
void send_f1675_gps(uint8_t port, uint16_t speed, int16_t hight, int16_t vario, int32_t latitude, int32_t longitude);

#endif  //_SBUS2_H
