#include "main.h"

/**
 * _strspn - strspn
 * @s: str
 * @accept: char
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int i, found;

	while (*s)
	{
		found = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}


		if (!found)
			break;


		res++;
		s++;

	}

	return (res);
}

