#include<stdio.h>

/**
 * main - Entry point
 *
 *This program prints the alphabet in lowercase
 *excluding 'e' and 'q', followed by a new line.
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');
	return (0);
}
