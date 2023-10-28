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
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last Digit of %i is %i and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last Digit of %i is %i and is equal to 0\n", n, lastDigit);
	}
	else if (lastDigit < 6)
	{
		printf("Last Digit of %i is %i and less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}

