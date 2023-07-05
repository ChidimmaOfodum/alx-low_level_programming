#include "lists.h"
/**
 * print_listint - prints a elements of a list
 * @h: head node
 * Return: number of elements
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current;

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
