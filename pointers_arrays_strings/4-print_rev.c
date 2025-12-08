#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	while (*s)
	{
		s++;
	}

	s--;
	do {
		s--;
		_putchar(*s);
	} while (*s);

	_putchar('\n');
}

