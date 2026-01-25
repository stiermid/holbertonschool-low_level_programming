#include "hash_tables.h"

/**
 * hash_table_print - prinsts a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size;
	char *val;
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
			if (!first)
			{
				printf(", ");
			}

			first = 0;
			val = hash_table_get(ht,  ht->array[i]->key);
			printf("'%s': '%s'", ht->array[i]->key, val);
		}
		i++;
	}

	printf("}\n");
}

