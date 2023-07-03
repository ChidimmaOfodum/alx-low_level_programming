#include "lists.h"
/**
 * size_t- a function that returns the length of a list
 * @h: head node
 * Return: length of list
 *
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
