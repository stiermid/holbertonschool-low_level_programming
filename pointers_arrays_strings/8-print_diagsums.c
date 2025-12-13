#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print_diagsums
 * @a: array
 * @size: size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			int index = i * size + j;

			if (i == j)
				diag1 += a[index];

			if (i + j == size - 1)
				diag2 += a[index];
		}
	}

	printf("%d, %d\n", diag1, diag2);
}

