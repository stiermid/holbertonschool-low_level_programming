#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts number of words in str
 * @str: string
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int i = 0;
	int words = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
		i++;
	}

	return (words);
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: a pointer to array of strings
 */
char **strtow(char *str)
{
	char **array;
	int words, w = 0, i = 0, j, len, start;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	array = malloc((words + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	while (str[i] && w < words)
	{
		while (str[i] == ' ')
			i++;
		start = i;
		len = 0;
		while (str[i] && str[i] != ' ')
		{
			len++;
			i++;
		}
		array[w] = malloc((len + 1) * sizeof(char));
		if (array[w] == NULL)
		{
			for (j = 0; j < w; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			array[w][j] = str[start + j];
		array[w][j] = '\0';
		w++;
	}
	array[w] = NULL;
	return (array);
}


