#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates
 * @array: array
 * @size: size of the array
 * @action: action function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

