#include "hash_tables.h"

/**
 * hash_table_set - a function that sets an item on the table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **array = ht->array;
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	hash_node_t *new_item = malloc(sizeof(hash_node_t));

	if (!new_item || value == NULL || ht == NULL)
		return (0);

	new_item->key = strdup(key);
	new_item->value = strdup(value);

	if (new_item->key == NULL || new_item->value == NULL)
		return (0);

	/**setting the item on the table **/

	if (array[index] == NULL)
	{
		new_item->next = NULL;
		array[index] = new_item;
	}

	else
	{
		new_item->next = array[index];
		array[index] = new_item;
	}

	return (1);


}
