#include "main.h"

/**
 * _atoi - convert a srt to an int
 * @s: str
 *
 * Return: int
 */
int _atoi(char *s)
{
	int sign;
	unsigned int res;


	sign = 1;
	res = 0;
	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign = -sign;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s - '0');
		s++;
	}

	return (sign * res);
}

