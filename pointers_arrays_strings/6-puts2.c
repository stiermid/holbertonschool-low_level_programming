#include "main.h"

/**
 * puts2 - prints every other char of a str
 * @s: a string
 *
 * Return: void
 */
void puts2(char *s)
{
	int i, l;

	l = 0;
	while (s[l] != '\0')
		l++;

	for (i = 0; i < l; i += 2)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

