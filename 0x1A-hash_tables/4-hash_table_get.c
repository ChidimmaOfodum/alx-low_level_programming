#include "hash_tables.h"

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

