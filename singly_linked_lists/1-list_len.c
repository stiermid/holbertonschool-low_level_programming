#include "lists.h"

/**
 * list_len - prints all the elements of a list
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}

