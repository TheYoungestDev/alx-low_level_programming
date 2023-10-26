#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * This function assigns a random number to the variable 'n' each time it is executed,
 * print the last digit of the number stored in the variable 'n'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("Last digit of %d is %d and is ", n, lastDigit);
	if (last_digit > 5)
	{
		printf(%d is greater than 5\n)
	} else if (last_digit == 0)
	{printf(%d is equal to 0\n)
	}
	return (0);
}
