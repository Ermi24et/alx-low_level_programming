#include "hash_tables.h"

/**
 *hash_table_set - a function that adds an element to the hash table
 *@ht: hash table that wanna add or update the key/value to
 *@key: key
 *@value: value associated with key
 *Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	int node_return = 0;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node_return = add_node(&ht->array[index], (char *)key, (char *)value);

	if (node_return == 1)
		return (1);
	return (0);
}

/**
 *add_node - a function taht adds new node at the beggining of hash_node_t
 *@head: pointer to the head of the hash_node_t
 *@key: key
 *@value: value associated with the key
 *Return: 1 if successed, otherwise 0
 */

int add_node(hash_node_t **head, char *key, char *value)
{
	hash_node_t *n_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	hash_node_t *temp = (*head);

	if (n_node == NULL)
		return (0);

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			free(n_node);
			return (1);
		}
		temp = temp->next;
	}
	n_node->key = strdup(key);
	n_node->value = strdup(value);
	n_node->next = (*head);
	(*head) = n_node;
	return (1);
}
