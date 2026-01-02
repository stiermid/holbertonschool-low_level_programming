#include <stdio.h>
#include <stdlib.h>

/**
 * main - runs
 * @argc: count of arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	unsigned char *p = (unsigned char *) &main;
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < n)
	{
		if (i != 0)
			printf(" ");
		printf("%02x", p[i]);
		i++;
	}

	printf("\n");
	return (0);
}

