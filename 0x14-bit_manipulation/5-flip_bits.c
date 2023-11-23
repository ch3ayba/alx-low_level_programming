#include "main.h"

/**
 * flip_bits - return number of bits
 *
 * @n: variable
 * @m: second variable
 *
 * Return: value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	i = 0;
	for (; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}
	return (i);
}
