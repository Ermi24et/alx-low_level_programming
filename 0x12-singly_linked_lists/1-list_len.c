#include "lists.h"

/**
 *list_len - a function returns number of elements in a linked list
 *@h: name of the list
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
