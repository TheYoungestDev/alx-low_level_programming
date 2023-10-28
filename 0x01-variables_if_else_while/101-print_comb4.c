#include <stdio.h>

/**
 * main - Entry point
 *
 *This program  all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int digit1 = 0; digit1 <= 7; digit1++)
	{
		for (int digit2 = digit1 + 1; digit2 <= 8; digit2++)
		{
			for (int digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');

				if (digit1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
