#include "lists.h"
/**
 * add_nodeint - adds a new node at beginning
 * @head: head node
 * @n: node memeber
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		temp = *head;
		*head = newnode;
		newnode->next = temp;
	}
	newnode->n = n;

	return (newnode);
}
