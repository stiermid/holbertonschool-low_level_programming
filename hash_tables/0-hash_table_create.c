#include "hash_tables.h"

/**
 * hash_table_create - creates has table
 * @size: size of table
 *
 * Return: the address of created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	/* allocate memory for table structure */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);


	/* allocate memory for the array of pointers */
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	/* init the size and set all array elements to NULL */
	table->size = size;
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}

