/*
Exploring Arduino - Code Listing 5-1: Arduino Music Player
http://www.exploringarduino.com/content/ch5
Copyright 2013 Jeremy Blum ( http://www.jeremyblum.com )
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License v3 as published by
the Free Software Foundation.
Modified by Michael Howard for the Super Mario Bros. theme Arduino sketch
*/

//Plays a song on a speaker
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#ifdef _WIN32
#include <Windows.h>
#define sleep(x) Sleep(x)
#else
#include <unistd.h>
#define sleep(x) usleep(x)
#endif

#include "lib/notes.h"
#include "lib/times.h"


void sheet_music(int notes[], int times[], size_t arr_size){
    int i;
	for ( i = 0; i < arr_size; i++){
		Beep(notes[i], times[i]);
		sleep(times[i]);
	}
}

int main(){
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
	return 0;
}