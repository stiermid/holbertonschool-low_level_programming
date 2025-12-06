#include <stdio.h>

/**
 * main - runs the program
 *
 * Return: always 0
 */
int main(void)
{
	long int a, b, t;
	long int sum;

	a = 0;
	b = 1;
	t = 1;
	while (a + b < 4000000)
	{
		t = a + b;
		a = b;
		b = t;

		if (t % 2 == 0)
			sum += t;
	}

	printf("%ld\n", sum);

	return (0);
}

