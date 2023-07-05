#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end
 * @head: head node
 * @n: list member
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *current;

	newnode = malloc(sizeof(listint_t));
	current = *head;

	if (!newnode)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
		newnode->next = NULL;
	}
	newnode->n = n;

	return (newnode);
}

