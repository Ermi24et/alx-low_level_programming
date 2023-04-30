#include "lists.h"

/**
 *get_nodeint_at_index - a function that returns the nth node of a list
 *@head: carries address of head
 *@index: index of the node
 *Return: returns the nth node,otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
