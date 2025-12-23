#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy
 * @str: str to dup
 *
 * Return: NULL if str = NULL or insufficient memory was available, otherwise
 * pointer to to a newly allocated space
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *res;

	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;


	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		res[i] = str[i];

	res[i] = '\0';

	return (res);
}

