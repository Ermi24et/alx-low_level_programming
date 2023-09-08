#include "hash_tables.h"

/**
 *hash_table_print - a function that prints a hash table
 *@ht: hash table
 *Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *res;
	char _data = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		res = ht->array[i];
		while (res != NULL)
		{
			if (_data == 1)
				printf(", ");
			printf("'%s': '%s'", res->key, res->value);
			_data = 1;
			res = res->next;
		}
	}
	printf("}\n");
}
