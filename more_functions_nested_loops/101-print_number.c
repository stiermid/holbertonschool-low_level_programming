#include "main.h"

/**
 * print_numbers - prints numbers
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int temp, divisor;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = n;
	divisor = 1;
	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor >= 1)
	{
		_putchar(n / divisor % 10 + '0');
		divisor /= 10;
	}
}

