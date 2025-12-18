#include <stdio.h>
#include <stdlib.h>

/**
 * main - run
 * @argc: arg count
 * @argv: args
 *
 * Return: number of coins to make change for an amount of money
 */
int main(int argc, char **argv)
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	cents = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", num_coins);

	return (0);
}

