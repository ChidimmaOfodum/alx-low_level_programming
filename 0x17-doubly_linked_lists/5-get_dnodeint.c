#include "lists.h"

/**
 * get_dnodeint_at_index- returns node at an index
 * @head: pointer to the head node
 * @index: index of node
 * Return: address of node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
