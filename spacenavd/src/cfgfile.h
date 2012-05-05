/*
spnavcfg - an interactive GUI configurator for the spacenavd daemon.
Copyright (C) 2007-2012 John Tsiombikas <nuclear@member.fsf.org>

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

#ifndef CFGFILE_H_
#define CFGFILE_H_

#include <limits.h>

#define MAX_BUTTONS		64

struct cfg {
	float sensitivity, sens_trans[3], sens_rot[3];
	int dead_threshold[6];
	int invert[6];
	int map_axis[6];
	int map_button[MAX_BUTTONS];
	int kbmap[MAX_BUTTONS];
	char *kbmap_str[MAX_BUTTONS];
	int led, grab_device;
	char serial_dev[PATH_MAX];
	int repeat_msec;
};

void default_cfg(struct cfg *cfg);
int read_cfg(const char *fname, struct cfg *cfg);
int write_cfg(const char *fname, struct cfg *cfg);

#endif	/* CFGFILE_H_ */
