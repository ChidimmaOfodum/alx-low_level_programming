#include "lists.h"

/**
 * print_dlistint - prints list elements
 * @h: pointer to head node
 * Return: length of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
