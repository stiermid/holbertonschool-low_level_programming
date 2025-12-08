#include "main.h"

/**
 * puts_half - prints half of a str
 * @str: a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, l;

	l = 0;
	while (str[l] != '\0')
		l++;

	for (i = l / 2; i < l; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

