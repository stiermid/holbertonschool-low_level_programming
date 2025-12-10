#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: str to copy
 * @dest: to
 *
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_p;
	char *src_p;

	dest_p = dest;
	src_p = src;

	while (*dest_p)
	{
		dest_p++;
	}

	while (*src_p)
	{
		*dest_p = *src_p;
		src_p++;
		dest_p++;
	}
	dest_p = '\0';

	return (dest);
}

