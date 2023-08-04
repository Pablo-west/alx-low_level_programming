#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number...
 * @n: number to print in binary.....
 */
void print_binary(unsigned long int n)
{
	int i, count_i = 0;
	unsigned long int current_num;

	for (i = 63; i >= 0; i--)
	{
		current_num = n >> i;

		if (current_num & 1)
		{
			_putchar('1');
			count_i++;
		}
		else if (count_i)
			_putchar('0');
	}
	if (!count_i)
		_putchar('0');
}
