#include "main.h"

/**
 * set_bit - sets bit
 *
 * @n: variable
 * @index: the index
 *
 * Return: value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
	{
		return (-1);
	}
	bit = 1 << index;
	*n = (*n | bit);
	return (1);
}
