#include <stdio.h>

/**
 * main - run
 *
 * Return: 0
 */
int main(void)
{
	long n, i;
	long primest;

	n = 612852475143;
	i = 1;

	printf("%ld\n", n);


	while (i < n)
	{
		if (n % i == 0)
		{
			n /= i;
			primest = i;
		}

		i++;
	}

	printf("%ld\n", primest);
	return (0);
}

