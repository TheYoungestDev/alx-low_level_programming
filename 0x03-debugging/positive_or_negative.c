#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"  /** Include the header file to declare the function*/

/**
 * positive_or_negative - Prints whether a number is positive, zero, or negative.
 * @i: The number to be checked.
 */
void positive_or_negative(int i)
{
    if (i > 0)
    {
        printf("%d is positive\n", i);
    }
    else if (i == 0)
    {
        printf("%d is zero\n", i);
    }
    else
    {
        printf("%d is negative\n", i);
    }
}

