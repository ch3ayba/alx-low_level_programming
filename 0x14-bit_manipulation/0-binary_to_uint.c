#include "main.h"

/**
 * binary_to_uint - convert
 *
 * @b: the binary number
 *
 * Return: value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int deci;
	int i;

	i = 0;
	deci = 0;
	if (!b)
	{
		return (0);
	}
	for (; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 49)
		{
			return (0);
		}
		deci = 2 * deci + (b[i] - '0');
	}
	return (deci);
}
