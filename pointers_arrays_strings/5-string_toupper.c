#include "main.h"

/**
 * string_toupper - changes all lowercase chars to uppercase
 * @s: string
 *
 * Return: void
 */
char *string_toupper(char *s)
{
	char *sp;

	sp = s;
	while (*sp)
	{
		if (*sp >= 'a' && *sp <= 'z')
			*sp = *sp - 'a' + 'A';

		sp++;
	}

	return (s);
}

