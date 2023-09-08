#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value of key or NULL when key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t **array, *tmp = NULL;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	array =  ht->array;
	index = key_index((unsigned char *) key, ht->size);
	tmp = array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

