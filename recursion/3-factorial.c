#include "main.h"

/**
 * factorial - factorial
 * @n: number
 *
 * Return: fact
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

