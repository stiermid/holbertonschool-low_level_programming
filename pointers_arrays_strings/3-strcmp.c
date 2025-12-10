#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first
 * @s2: second
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int res;

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}

		s1++;
		s2++;
	}

	res = *s1 - *s2;
	return (res);
}

