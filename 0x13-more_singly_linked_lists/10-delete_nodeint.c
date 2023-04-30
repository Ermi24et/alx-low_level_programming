#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at given index
 *@head: double pointer carries address
 *@index: index of the node
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *insptr, *next;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	insptr = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (insptr->next == NULL)
			return (-1);
		insptr = insptr->next;
	}
	next = insptr->next;
	insptr->next = next->next;
	free(next);
	return (1);
}
