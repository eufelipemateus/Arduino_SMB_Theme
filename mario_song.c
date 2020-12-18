/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License v3 as published by
the Free Software Foundation.
Modified by Michael Howard for the Super Mario Bros. theme Arduino sketch
*/
#include <stdio.h>
#include "lib/notes.h"
#include "lib/times.h"
#include "lib/play.h"

int main(){
	printf("Executing super mario theme... \n");
	
	sheet_music(notes_start, times_start, sizeof(notes_start) / sizeof(notes_start[0]));
	sheet_music(notes_tune1, times_tune1, sizeof(notes_tune1) / sizeof(notes_tune1[0]));
	sheet_music(notes_tune1, times_tune1, sizeof(notes_tune1) / sizeof(notes_tune1[0]));
	sheet_music(notes_tune2, times_tune2, sizeof(notes_tune2) / sizeof(notes_tune2[0]));
	sheet_music(notes_tune2, times_tune2, sizeof(notes_tune2) / sizeof(notes_tune2[0]));
	sheet_music(bridge, times_bridge, sizeof(bridge) / sizeof(times_bridge[0]));
	sheet_music(notes_tune1, times_tune1, sizeof(notes_tune1) / sizeof(notes_tune1[0]));
	sheet_music(notes_tune1, times_tune1, sizeof(notes_tune1) / sizeof(notes_tune1[0]));
	sheet_music(switchup, times_switch_up, sizeof(switchup) / sizeof(switchup[0]));
	sheet_music(switchup, times_switch_up, sizeof(switchup) / sizeof(switchup[0]));
	sheet_music(bridge, times_bridge, sizeof(bridge) / sizeof(times_bridge[0]));
	sheet_music(switchup, times_switch_up, sizeof(switchup) / sizeof(switchup[0]));
	sheet_music(fanfare, times_fanfare, sizeof(fanfare) / sizeof(times_fanfare[0]));
	
	printf("Finished...\n");
	return 0;
}