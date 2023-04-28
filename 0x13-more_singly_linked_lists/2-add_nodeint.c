#include "lists.h"

/**
 *add_nodeint - a function that adds a new node at the beginning of a list
 *@head: address of each element
 *@n: value of the node
 *Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newp;

	if (head == NULL)
		return (NULL);
	newp = malloc(sizeof(listint_t));
	if (newp == NULL)
		return (NULL);
	newp->n = n;
	newp->next = *head;
	*head = newp;

	return (newp);
}
