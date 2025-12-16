#include "main.h"

int check_sqrt(int n, int i);

/**
 * _sqrt_recursion - sqrt
 * @n: int
 *
 * Return: -1 if n does not have a natural square root, otherwise sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (check_sqrt(n, 2));
}

/**
 * check_sqrt - checks for sq
 * @n: int
 * @i: current number being checked
 *
 * Return: -1 if n does not have a natural square root, otherwise sqrt
 */
int check_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (check_sqrt(n, i + 1));
}


