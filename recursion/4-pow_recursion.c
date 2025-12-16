#include "main.h"

/**
 * _pow_recursion - x rasied to the power of y
 * @x: int
 * @y: int
 *
 * Return: -1 if y < 0, otherwise power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

