#include "main.h"

/**
 * print_times_table - prints times table
 * @n: number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			print_int(i * j);

			if (j != n)
			{
				_putchar(',');

				if ((j + 1) * i >= 100)
				{
					_putchar(' ');
				}
				else if ((j + 1) * i >= 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
}

/**
 * print_int - prints integers
 * @n: number
 *
 * Return: void
 */
void print_int(int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}

