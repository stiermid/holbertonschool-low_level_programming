#include <stdio.h>

/**
 * main - run
 *
 * Return: 0
 */
int main(void)
{
	long n, i;

	n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
			if (n == 1)
			{
				printf("%ld\n", i);
				return (0);
			}
		}
	}

	return (0);
}

