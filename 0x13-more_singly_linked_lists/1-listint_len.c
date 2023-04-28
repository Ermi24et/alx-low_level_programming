#include "lists.h"

/**
 *listint_len - a function returns number of elements in a list
 *@h: list of elements
 *Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
