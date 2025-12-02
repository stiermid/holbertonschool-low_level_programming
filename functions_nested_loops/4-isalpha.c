#include "main.h"

/**
 * _isalpha - checks for beign letter
 * @c: char to check
 *
 * Return: if char is letter 1, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

