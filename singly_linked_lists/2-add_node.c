#include "lists.h"

/**
 * add_node - prints all the elements of a list
 * @head: pointer to the start of the list
 * @str: string
 *
 * Return: address of the new element, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *node;

	while (str && str[len])
		len++;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	node->next = *head;
	node->len = len;

	*head = node;

	return (node);
}
