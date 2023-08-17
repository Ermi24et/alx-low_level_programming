#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes a node at index
 *@head: head pointer
 *@index: index of a node
 *Return: 1 if succeeded, -1 if not
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		if (curr->next != NULL)
		{
			curr->next->prev = NULL;

		}
		free(curr);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (curr->next == NULL)
			return (-1);
		curr = curr->next;
	}
	curr->prev->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	free(curr);
	return (1);
}
