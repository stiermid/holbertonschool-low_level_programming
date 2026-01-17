#include "lists.h"

/**
 * dlistint_len - counts the length of the list
 * @h: pointer to the head of the list
 *
 * Return: the length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}

