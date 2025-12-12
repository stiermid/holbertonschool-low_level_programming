#include "main.h"
#include <stddef.h>

/**
 * _strchr - strchr
 * @s: str
 * @c: char
 *
 * Return: pointer to the first occurence of the character c in the string c
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
	{
		s++;
	}
	if (*s == '\0')
		return (NULL);

	return (s);
}

