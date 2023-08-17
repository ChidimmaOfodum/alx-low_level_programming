#include "lists.h"

/**
 * dlistint_len - a function that returns length of a list
 * @h: pointer to head node
 * Return: Lenght of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t length = 0;

	while (temp)
	{
		length++;
		temp = temp->next;
	}
	return (length);
}
