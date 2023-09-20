#include "main.h"

/**
 * _abs - Computers the absolute value of an integer.
 * @c: The number to be computer
 * Return: Absolute value if number or zero 0
 */

int _abs(int c)
{

	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
