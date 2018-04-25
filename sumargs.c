/*
 * Filename: sumargs.c
 * Purpose: Takes a bunch of floating point numbers
 * and outputs their sum.
 */
#include <stdio.h>
#include <stdlib.h>

#define NUM(x) atof(argv[x])

int main(int argc, char *argv[])
{
    int i = 1;
    double sum = 0;

    while(i < argc) {
	sum = sum + NUM(i);
	i = i + 1;
    }

    printf("%.2lf\n", sum);
    return 0;
}
