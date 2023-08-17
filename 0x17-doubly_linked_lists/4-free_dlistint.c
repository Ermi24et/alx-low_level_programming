#include "lists.h"

/**
 *free_dlistint - a function tat frees a list
 *@head: head pointer
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
