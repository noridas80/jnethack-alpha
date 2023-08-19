#include "hack.h"
#include "wav.h"

#ifdef USER_SOUNDS

void
play_usersound(filename, volume)
const char *filename;
int volume;
{
    playWavFile(filename);
}

#endif /*USER_SOUNDS*/
/* curssound.c */
