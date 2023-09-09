#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 * Return: void
 **/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int j = 1;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (!j)
			{
				printf(", ");
			}
			printf("'%s': '%s'", temp->key, temp->value);
			j = 0;
			temp = temp->next;
		}
	}

	printf("}\n");
}
