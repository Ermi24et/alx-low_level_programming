#include "lists.h"

/**
 * dlistint_len - returns length of a node
 * @h: head pointer
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
