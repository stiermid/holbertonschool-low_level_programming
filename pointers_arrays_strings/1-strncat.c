#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: str to copy
 * @dest: to
 * @n: n bytes from src
 *
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_p;
	char *src_p;

	dest_p = dest;
	src_p = src;

	while (*dest_p)
	{
		dest_p++;
	}

	while (*src_p && n > 0)
	{
		*dest_p = *src_p;
		src_p++;
		dest_p++;
		n--;
	}
	dest_p = '\0';

	return (dest);
}

