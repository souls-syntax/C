// File: myutils.c
#include <sys/time.h>
#include "myutils.h"
#include <stdio.h>
void spin(int seconds) {
    struct timeval start, current;
    gettimeofday(&start, NULL);

    do {
	    gettimeofday(&current, NULL);
    } while ((current.tv_sec - start.tv_sec) < seconds);
}
