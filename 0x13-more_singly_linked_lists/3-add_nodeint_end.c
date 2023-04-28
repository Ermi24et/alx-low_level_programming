#include "lists.h"

/**
 *add_nodeint_end - a function that adds a new node at the end of a list
 *@head: carries the elements to add to the end
 *@n: a data to be stored
 *Return: address of new element, otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newp, *ptr1;

	if (head == NULL)
		return (NULL);
	newp = *head;
	ptr1 = malloc(sizeof(listint_t));
	if (ptr1 == NULL)
		return (NULL);
	ptr1->n = n;
	ptr1->next = NULL;
	if (*head == NULL)
	{
		*head = ptr1;
		return (ptr1);
	}
	newp = *head;
	while (newp->next != NULL)
	{
		newp = newp->next;
	}
	newp->next = ptr1;

	return (ptr1);
}
