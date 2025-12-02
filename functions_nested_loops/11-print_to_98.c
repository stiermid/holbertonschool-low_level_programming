#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		print_int(n);
		_putchar(',');
		_putchar(' ');

		if (n > 98)
			n--;
		else
			n++;

	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

/**
 * print_int - prints given input n
 * @n: integer to print
 *
 * Return: void
 */
void print_int(int n)
{
	int temp;
	int divisor;


	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		temp = n;
		divisor = 1;
		while (temp > 9)
		{
			divisor *= 10;
			temp /= 10;
		}

		while (divisor >= 1)
		{
			_putchar((n / divisor) % 10 + '0');
			divisor /= 10;
		}
	}
}
