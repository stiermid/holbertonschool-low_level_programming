#include "main.h"


/**
 * _memcpy - memcpy
 * @dest: dest
 * @src: src
 * @n: n bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destp = dest;
	char *srcp = src;

	while (n > 0)
	{
		*destp = *srcp;
		destp++;
		srcp++;
		n--;
	}

	return (dest);
}

