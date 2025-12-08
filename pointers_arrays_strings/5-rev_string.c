#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, l;
	char tmp;

	l = 0;
	while (s[l] != '\0')
		l++;

	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}

