#include "main.h"


/**
 * _memset - memset
 * @s: str to fill
 * @b: the byte
 * @n: n bytes
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *sp = s;

	while (n > 0)
	{
		*sp = b;
		sp++;
		n--;
	}

	return (s);
}

