#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: size of hash table
 * Return: mem location of table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *array = malloc(sizeof(hash_node_t) * size);
	hash_table_t *hash = malloc(sizeof(hash_table_t));

	if (!hash || !array)
		return (NULL);

	hash->size = size;
	hash->array = &array;

	return (hash);
}
