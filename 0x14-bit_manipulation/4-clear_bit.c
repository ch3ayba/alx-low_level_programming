#include "main.h"

/**
 * clear_bit - value to 0
 *
 * @n: pointer
 * @index: index
 *
 * Return: value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
	{
		return (-1);
	}
	bit = 1 << index;
	if (*n & bit)
	{
		*n ^= bit;
	}
	return (1);
}
