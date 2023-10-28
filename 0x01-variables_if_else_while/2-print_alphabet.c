#include <stdio.h>


/*This program that prints the alphabet in lowercase, followed by a new line.*/
int main(void)
	{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');

	return (0);
}
