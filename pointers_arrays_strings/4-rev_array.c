#include "main.h"

/**
 * reverse_array - reverses the content of an array of int
 * @a: array
 * @n: the length of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

