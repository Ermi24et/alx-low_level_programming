#include "lists.h"

/**
 *_strlen - a function returns length of a string
 *@str: a string to count
 *Return: length of a string
 */

int _strlen(const char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 *add_node - a function that adds a new node at the beginning of a list_t list
 *@head: list of elements
 *@str: string to add
 *Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *addNode;

	addNode = malloc(sizeof(list_t));
	if (addNode == NULL)
		return (NULL);
	addNode->str = strdup(str);
	addNode->len = _strlen(str);
	addNode->next = *head;
	*head = addNode;

	return (addNode);
}
