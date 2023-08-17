#include "lists.h"
/**
 * sum_dlistint- sums all members of a list
 * @head: pointer to head node
 * Return: sum of list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
