#include "hash_tables.h"

/**
 * hash_table_print - prinsts a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, size;
	int first;

	if (!ht)
		return;

	size = ht->size;
	i = 0;
	first = 1;

	printf("{");
	while (i < size)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (!first)
					printf(", ");

				first = 0;
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
		i++;
	}

	printf("}\n");
}

