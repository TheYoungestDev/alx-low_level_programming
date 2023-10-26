#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This function assigns a random number to the variable 'n' and
 * each time it is executed. Complete the source code in order to
 * print the last digit of the number stored in the variable 'n'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand();

    int lastDigit = n % 10;

    printf("Last digit of %d is %d and is ", n, lastDigit);

    if (lastDigit > 5) {
        printf("greater than 5\n");
    } else if (lastDigit == 0) {
        printf("0\n");
    } else {
        printf("less than 6 and not 0\n");
    }

    return (0);
}

