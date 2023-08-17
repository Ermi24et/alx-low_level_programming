#include "lists.h"

/**
 *get_dnodeint_at_index - returns nth node of a list
 *@head: head pointer
 *@index: an index of list
 *Return: NULL, if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
