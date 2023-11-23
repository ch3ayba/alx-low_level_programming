#include "main.h"

/**
 * get_bit - return at given index
 *
 * @n: variable
 * @index: the index
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (n == 0 && index < 64)
	{
		return (0);
	}
	for (bit = 0; bit <= 63; n >>= 1, bit++)
	{
		if (index == bit)
			return (n & 1);
	}
	return (-1);
}
