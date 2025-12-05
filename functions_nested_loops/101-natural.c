#include "main.h"

/**
 * main - runs the program
 *
 * Return: always 0
 */
int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	print_int(sum);

	_putchar('\n');

	return (0);
}


/**
 * print_int - prints integers
 * @n: integer to print
 *
 * Return: void
 */
void print_int(int n)
{
	int temp, divisor;

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

