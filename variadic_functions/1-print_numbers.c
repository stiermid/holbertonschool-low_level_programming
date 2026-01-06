#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: str to be printed between numbers
 * @n: number of elements
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i != 0)
				printf("%s", separator);
		}

		printf("%d", va_arg(args, int));
	}

	va_end(args);
	printf("\n");
}

