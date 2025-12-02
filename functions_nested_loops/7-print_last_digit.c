#include "main.h"

/**
 * print_last_digit - returns last digit
 * @n: given integer
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}

