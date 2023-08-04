#include "main.h"

/**
 * flip_bits - counts the number of bits to change......
 * to get from one number to another......
 * @n: first number......
 * @m: second number......
 *
 * Return: number of bits to change......
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count_i = 0;
	unsigned long int current_num;
	unsigned long int exclusive_num = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current_num = exclusive_num >> i;
		if (current_num & 1)
			count_i++;
	}

	return (count_i);
}
