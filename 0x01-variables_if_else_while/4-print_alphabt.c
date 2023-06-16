#include <stdio.h>

/**
 * main - Print alphabet in lowerCase
 *
 * Return: 0 (Success)
 */

int main(void)
{
int lowerCase = 'a';

while (lowerCase <= 'z')
{
if (lowerCase != 'e' && lowerCase != 'q')
{
putchar(lowerCase);
}
lowerCase += 1;
}
putchar('\n');
return (0);
}
