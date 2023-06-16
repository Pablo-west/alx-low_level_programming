#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
int j = '0';
int i = '0';

while (i <= '9')
{
while (j <= '9')
{
if (!(i > j) || i == j)
{
putchar(i);
putchar(j);
if (i == '0' && j == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
j++;
}
j = '0';
i++;
}
return (0);
}
