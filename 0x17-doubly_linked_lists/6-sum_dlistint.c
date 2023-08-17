#include "lists.h"

/**
 *sum_dlistint - returns sum of a list
 *@head: head pointer
 *Return: sum of a linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += (head->n);
		head = head->next;
	}
	return (sum);
}
