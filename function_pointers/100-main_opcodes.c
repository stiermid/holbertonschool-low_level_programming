#include <stdio.h>
#include <string.h>

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
	size_t i;

	while (p[i])
	{
		if (i != 0)
			printf(" ");
		printf("%02x", p[i]);
		i++;
	}

	printf("\n");
	return (0);
}

