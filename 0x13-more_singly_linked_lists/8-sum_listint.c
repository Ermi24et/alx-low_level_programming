#include "lists.h"

/**
 *sum_listint - a function that returns the sum of all the data (n)
 *@head: list of elements
 *Return: sum of all data in the list,if empty 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
