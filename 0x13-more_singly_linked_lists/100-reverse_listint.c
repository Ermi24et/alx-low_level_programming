#include "lists.h"

/**
 *reverse_listint - a function that reverses a listint_t linked list
 *@head: double pointer
 *Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv, *nxt;

	prv = NULL;
	nxt = NULL;
	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}
	*head = prv;
	return (*head);
}
