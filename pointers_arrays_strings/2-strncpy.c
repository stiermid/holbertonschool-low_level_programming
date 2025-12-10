#include "main.h"

/**
 * _strncpy - copies two strings
 * @src: str to copy
 * @dest: to
 * @n: n bytes from src
 *
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_p;

	dest_p = dest;

	while (n > 0 && *src)
	{
		*dest_p++ = *src++;
		n--;
	}

	while (n > 0)
	{
		*dest_p++ = '\0';
		n--;
	}

	return (dest);
}

