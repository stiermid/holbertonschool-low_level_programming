#include "lists.h"

/**
 * add_node_end - add node to the end
 * @head: pointer to the start of the list
 * @str: string
 *
 * Return: address of the new element, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *temp = *head;
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


	node->next = NULL;
	node->len = len;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = node;

	return (node);
}

