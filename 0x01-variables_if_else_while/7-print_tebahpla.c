#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 0; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
