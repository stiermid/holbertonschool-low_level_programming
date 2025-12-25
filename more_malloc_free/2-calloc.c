#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: a pointer to newly allocated space, NULL on any failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *ptr;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = size * nmemb;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (ptr);
}

