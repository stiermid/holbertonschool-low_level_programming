#include "3-calc.h"

/**
 * op_add - add
 * @a: first int
 * @b: second int
 *
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub
 * @a: first int
 * @b: second int
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul
 * @a: first int
 * @b: second int
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: first int
 * @b: second int
 *
 * Return: int
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	exit(100);
}

/**
 * op_mod - mod
 * @a: first int
 * @b: second int
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	exit(100);
}

