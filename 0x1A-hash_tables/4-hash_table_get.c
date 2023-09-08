#include "hash_tables.h"

/**
 *hash_table_get - a function that retrieves a value associated with a key
 *@ht: hash table
 *@key: key
 *Return: a value associated with the element, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int i, index;

	if ((strcmp(key, "") == 0) || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	for (i = 0; tmp; i++)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}
	return (NULL);
}
