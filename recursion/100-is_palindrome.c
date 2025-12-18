#include "main.h"

int _strlen_recursion(char *s);
int check_palindrome(char *s, int start, int end);

/**
 * _strlen_recursion - length
 * @s: str
 *
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks for palindrom
 * @s: string to check
 * @start: start
 * @end: end
 *
 * Return: 1 or 0
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks for palindrome
 * @s: string
 *
 * Return: 1 if a string is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}

	return (check_palindrome(s, 0, len - 1));
}

