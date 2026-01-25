#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds and element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	char *val;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val = strdup(value);
	if (val == NULL)
		return (0);


	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = val;
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(val);
		return (1);
	}

	new_node->value = val;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

