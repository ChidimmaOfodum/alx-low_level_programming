#include "lists.h"
/**
 * add_node - a function that adds element to the begining of a list
 * @head: pointer to the head node
 * @str: node member
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = malloc(sizeof(list_t));

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
	newnode->str = strdup(str);
	newnode->len = strlen(str);

	return (newnode);
}
