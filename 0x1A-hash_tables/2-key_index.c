#include "hash_tables.h"

/**
 * key_index - retrives the index of a key
 * @size: size of the array
 * @key: key
 * Return: index of array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

}
