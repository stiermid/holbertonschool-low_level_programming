#include "main.h"

/**
 * puts_half - prints half of a str
 * @str: a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int l, s;

	l = 0;
	while (str[l] != '\0')
		l++;


	if (l % 2 == 0)
	{
		s = l / 2;
	}
	else
	{
		s = (l + 1) / 2;
	}

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}

