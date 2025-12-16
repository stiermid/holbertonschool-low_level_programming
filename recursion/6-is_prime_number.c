#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - primeness
 * @n: int
 *
 * Return: 1 if the input int is prime, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}

/**
 * check_prime - checks for prime
 * @n: int
 * @i: current number being checked
 *
 * Return: 1 if prime 0 if not
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_prime(n, i + 1));
}


