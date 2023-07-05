#include "lists.h"
/**
 * get_nodeint_at_index - gets node of given index
 * @head: head node
 * @index: index
 * Return: node of given index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	current = head;

	if (current == NULL)
		return (NULL);
	while (current->next != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}

