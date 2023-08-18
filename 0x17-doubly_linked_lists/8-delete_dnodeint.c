#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: address of head node
 * @index: index of node to be deleted
 * Return: 1 on success -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	while (current)
	{
		if (index == 0)
		{
			*head = current->next;
			free(current);
			return (1);
		}
		if (count == index)
		{
			current->prev->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);

}
