#include "lists.h"
/**
 * print_list - a function that prints elements of a list
 * @h: head node
 * Return: node counnt
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] nill\n");

		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;

	}
	return (i);
}
