#include "main.h"

/**
 * get_endianness - check
 *
 * Return: value
 */
int get_endianness(void)
{
	unsigned int ui;
	char *s;

	ui = 1;
	s = (char *) &ui;
	return ((int)*s);
}
