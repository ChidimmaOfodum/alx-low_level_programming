#include "lists.h"
/**
 * pop_listint - deletes a head list
 * @head: head node
 * Return: deleted node
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	current = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(current);

	return (n);

}
