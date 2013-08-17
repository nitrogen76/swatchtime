#include <stdio.h>
#include <time.h>
int main ()
{
    float swatch;
    time_t sec;
    sec = time (NULL);
    swatch = (float)(((sec + 3600) % 86400) * 1000) / 86400;
    printf ("@%.3f\n", swatch);
    return 0;
}
