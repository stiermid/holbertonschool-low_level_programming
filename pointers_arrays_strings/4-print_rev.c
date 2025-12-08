#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l;

	l = 0;

	while (*s)
	{
		s++;
		l++;
	}

	s--;

	while (l > 0)
	{
		_putchar(*s);
		s--;
		l--;
	}

	_putchar('\n');
}

