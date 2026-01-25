#include "hash_tables.h"

/**
 * key_index - convert key to index
 * @key: key
 * @size: size of the array of the hash function
 *
 * Return: the index at which key/value pair should be stored in the array of
 * the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}

