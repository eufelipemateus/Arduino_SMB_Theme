
#ifndef PLAY_H

#define PLAY_H

#include <stddef.h>
#ifdef _WIN32
#include <Windows.h>
#define sleep(x) Sleep(x)
#else
#include <unistd.h>
#define sleep(x) usleep(x)
#endif


void sheet_music(int notes[], int times[], size_t arr_size);

#endif