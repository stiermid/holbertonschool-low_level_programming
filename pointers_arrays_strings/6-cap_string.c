#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: char
 */
char *cap_string(char *s)
{
	char *sp;
	int cap;

	sp = s;
	cap = 1;

	while (*sp)
	{
		if (cap && (*sp >= 'A' && *sp <= 'Z'))
		{
			cap = 0;
		}
		if (cap && (*sp >= 'a' && *sp <= 'z'))
		{
			*sp = *sp - 'a' + 'A';
			cap = 0;
		}
		if (*sp == ' ' || *sp == '\t' ||  *sp == '\n' ||
			 *sp == ',' || *sp == ';' || *sp == '.' || *sp == '!' ||
			 *sp == '?' || *sp == '"' || *sp == '(' || *sp == ')' ||
			 *sp == '{' || *sp == '}')
		{
			cap = 1;
		}
		else
		{
			cap = 0;
		}


		sp++;
	}

	return (s);
}

