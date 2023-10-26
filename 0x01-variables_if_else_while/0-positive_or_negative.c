#!/bin/bash

#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	 if (n > 0) {
        printf("%d is positive\n", n);  // Print the result.
    } else if (n == 0) {
        printf("%d is zero\n", n);  // Print the result.
    } else {
        printf("%d is negative\n", n);  // Print the result.
    }
	return (0);
}
