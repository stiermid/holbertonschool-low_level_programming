#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: args count
 * @av: arguments
 *
 * Return: a pointer to a new stirng or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	char *res;
	int i, j, len;

	len = 1;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	str = malloc(len);
	if (str == NULL)
		return (NULL);
	res = str;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str = av[i][j];
			str++;
		}
		*str = '\n';
		str++;
	}

	return (res);
}

