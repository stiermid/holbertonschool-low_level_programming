#include <stdio.h>

/**
 * main - runs the program
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	long int a, b, t;

	a = 0;
	b = 1;
	for (i = 0; i < 50; i++)
	{
		t = a + b;
		a = b;
		b = t;

		printf("%ld", t);

		if (i != 49)
			printf(", ");
	}

	printf("\n");

	return (0);
}

