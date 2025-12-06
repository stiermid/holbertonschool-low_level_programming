#include "main.h"

/**
 * print_number - prints number
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int temp, divisor, int_min;

	int_min = 0;

	if (n < 0)
	{
		_putchar('-');

		if (n == -2147483648)
		{
			int_min = 1;
			n++;
		}

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
		if (int_min && divisor == 1)
		{
			_putchar('8');
			return;
		}
		_putchar(n / divisor % 10 + '0');
		divisor /= 10;
	}
}

