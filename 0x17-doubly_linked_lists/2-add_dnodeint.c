#include "lists.h"

/**
 * add_dnodeint - adds a node in a beggining
 * @head: head pointer
 * @n: data to enter
 * Return: address of elemnt, otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = (*head);
	temp->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = temp;
	(*head) = temp;
	return (*head);
}
