#include "lists.h"
/**
 * sum_listint - returns sum of data in a list
 * @head: head node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;

	if (current == NULL)
		return (sum);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
