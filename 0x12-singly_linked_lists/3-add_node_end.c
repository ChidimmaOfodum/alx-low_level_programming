#include "lists.h"
/**
 * add_node_end - a function that adds element to end of node list
 * @head: head node
 * @str: element member
 * Return: element added
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
	temp->next = newnode;
	}
	newnode->next = NULL;
	newnode->str = strdup(str);
	newnode->len = strlen(str);

	return (newnode);
}
