#include "3-calc.h"

/**
 * main - run the program
 * @argc: count of arguments
 * @argv: arguments
 *
 * Return: void
 */
int main(int argc, char **argv)
{
	int (*op_fun)(int, int);
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	op_fun = get_op_func(op);
	if (op_fun == NULL)
	{
		printf("Error");
		exit(2);
	}

	printf("%d\n", op_fun(a, b));
	return (0);
}

