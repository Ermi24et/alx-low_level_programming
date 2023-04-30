#include "lists.h"

/**
 *insert_nodeint_at_index - function inserts a new node at a given position
 *@head: double pointer carries address
 *@idx: index of the node
 *@n: a data to insert
 *Return: address of a new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insptr, *ptr1;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		ptr1 = *head;
		for (i = 0; i < idx - 1 && ptr1 != NULL; i++)
		{
			ptr1 = ptr1->next;
		}
		if (ptr1 == NULL)
			return (NULL);
	}
	insptr = malloc(sizeof(listint_t));
	if (insptr == NULL)
		return (NULL);
	insptr->n = n;
	if (idx == 0)
	{
		insptr->next = *head;
		*head = insptr;
		return (insptr);
	}
	insptr->next = ptr1->next;
	ptr1->next = insptr;
	return (insptr);
}
