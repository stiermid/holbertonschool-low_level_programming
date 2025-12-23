#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first str
 * @s2: second str
 *
 * Return: a pointer to concatenated str, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i;
	char *concat;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (i = len1; i < len1 + len2; i++)
		concat[i] = s2[i - len1];

	concat[i] = '\0';

	return (concat);
}

