#pragma once

#ifndef __WAVHEADER_H__
#define __WAVHEADER_H__

#define WAVH_CHANNELS_MONO 1
#define WAVH_CHANNELS_STEREO 2

#ifdef USER_SOUNDS && CURSES_GRAPHICS

int convInt(unsigned char *header, int start);
short convShort(unsigned char *header, int start);
int parseWavHeader(char *data, int *channels, int *bits, int *size, int *samplingrate);
void playWavFile(char* path);
void playWav(char* data);

#endif /* USER_SOUNDS && CURSES_GRAPHICS */

#endif /* WAVHEADER_H */
