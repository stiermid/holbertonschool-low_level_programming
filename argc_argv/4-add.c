#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - run
 * @argc: arg count
 * @argv: args
 *
 * Return: 1 if one of numbers contains symbols that are not digit, otherwise 0
 */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

