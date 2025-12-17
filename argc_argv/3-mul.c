#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - run
 * @argc: arg count
 * @argv: args
 *
 * Return: 1 if program does not receive two arguments, othwerwise 0
 */
int main(int argc, char **argv)
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);

	return (0);
}

