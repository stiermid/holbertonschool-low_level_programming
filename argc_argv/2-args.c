#include "main.h"
#include <stdio.h>

/**
 * main - run
 * @argc: arg count
 * @argv: args
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}

