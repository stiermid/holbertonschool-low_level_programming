/**
 * _strlen - the length of a string
 * @s: the string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s)
	{
		l += 1;
		s++;
	}

	return (l);
}

