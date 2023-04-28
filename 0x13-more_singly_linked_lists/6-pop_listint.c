#include "lists.h"

/**
 *pop_listint - a function that deletes the head node
 *@head: double pointer
 *Return: the head node’s data (n) if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *init;
	int n;

	if (*head == NULL || head == NULL)
		return (0);
	init = *head;
	*head = init->next;
	n = init->n;
	free(init);
	return (n);

}
