#include "hash_tables.h"

/**
 * key_index - use hash djb2
 * @key: variable
 * @size: an aray
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
