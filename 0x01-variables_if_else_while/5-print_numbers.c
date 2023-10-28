#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the alphabet in lowercase,
 * then in uppercase followed by a new line.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
