#include "main.h"

/**
 * _strcpy - strcpy
 * @src: str to copy
 * @dest: to
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start;

	start = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (start);
}

