#include <stdio.h>

/**
 * main - Print alphabet
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int lowerCase = 'a';
	int upperCase = 'A';

	while (lowerCase)
	{
		putchar(lowerCase <= 'z');
		lowerCase += 1;
	}
	while (upperCase)
	{
		putchar(upperCase <= 'Z');
		upperCase += 1;
	}
	putchar('\n');
	return (0);
}
