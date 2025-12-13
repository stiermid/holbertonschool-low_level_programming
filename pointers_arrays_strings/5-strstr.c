#include <stddef.h>
#include "main.h"

/**
 * _strstr - strstr
 * @haystack: char
 * @needle: char
 *
 * Return: pointer to the beginning of the located substr
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && *h == *n)
		{
			n++;
			h++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

