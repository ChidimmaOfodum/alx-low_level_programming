#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to head node
 * @idx: index to insert node
 * @n: member of list
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	while (current != NULL)
	{
		if (idx == 0)
		{
			new_node->next = current;
			new_node->prev = NULL;
			*h = new_node;
			return (new_node);
		}
		if (count == idx - 1 && current->next)
		{
			new_node->next = current->next;
			current->next = new_node;
			new_node->prev = current;

			return (new_node);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
