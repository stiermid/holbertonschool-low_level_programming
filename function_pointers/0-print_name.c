#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to print
 * @f: print function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

