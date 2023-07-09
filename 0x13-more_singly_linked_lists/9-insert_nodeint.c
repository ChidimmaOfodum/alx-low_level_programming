#include "lists.h"

/**
 * Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current1, *current, *newnode, *temp;
	unsigned int i = 0;
	unsigned int j = 0;

	newnode = malloc(sizeof(listint_t));
	current = current1 = *head;
	
	if (!newnode || idx < i || (head == NULL))
		return (NULL);
	if (idx == 0)
	{
		newnode->n = n;
		newnode->next = current;
		*head = newnode;
		return (newnode);
	}
	
	while (current1 != NULL)
	{
		if (current1->next == NULL)
			break;
		current1 = current1->next;
		j++;
	}
	
	if (j + 1 == idx)
	{
		current1->next = newnode;
		newnode->next = NULL;
		newnode->n = n;
		return (newnode);
	}

	while (current != NULL)
	{
		if (i == idx)
		{
			temp->next = newnode;
			newnode->next = current;
			newnode->n = n;
			return (newnode);
		}
		else
		{
			i++;
			temp = current;
			current = current->next;
		}
	}


	return (NULL);
}
