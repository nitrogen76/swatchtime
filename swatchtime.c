#include <stdio.h>
#include <time.h>
#include <string.h>

//header type shit

char *float_to_str(float num);

//

int main ()
{
    float swatch;
    time_t sec;
    static char beat_text[] = "@";
    sec = time (NULL);
    /* Swatch time is based on CET (Central European Time) which is +1GMT.  NO DST bullshit either. */
    /* hence, the formula is basically epochtime in seconds + one hour in seconds */
    /* I specifically wanted "centibeats" hence the garbage with floats and 3 decimal places. */
    /* As I am a dumbshit at C, I will eventually make a commandline arg for this. */
    swatch = (float)(((sec + 3600) % 86400) * 1000) / 86400;
    printf ("@%06.3f\n", swatch);
    printf ("------\n");

	// Added by hailey in a format simular to that used on 
	// https://github.com/jerith/pebble-beapoch/blob/master/src/beapoch.c
	
    strcat(beat_text,float_to_str(swatch));
    printf(beat_text);


    return 0;
}

char *float_to_str(float num) {
	char *buf;
	sprintf(buf,"%06.3f", num);
	
	return buf;
}
