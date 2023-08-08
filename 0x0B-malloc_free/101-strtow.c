#include <stdlib.h>
#include "main.h"
/**
 * count_word - function that count the number of words
 * @s: input string
 *
 * Return: word number
 */
int count_word(char *s)
{
	int flag, c, q;

	flag = 0;
	q = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
	if (s[c] == ' ')
	flag = 0;
	else if (flag == 0)
	{
	flag = 1;
	q++;
	}
	}

	return (q);
}

/**
 * **strtow - function that splits a string into words
 * @str: splitting
 * Return: array pointer (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, b = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
	len++;
	words = count_word(str);
	if (words == 0)
	return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
	return (NULL);

	for (a = 0; a <= len; a++)
	{
	if (str[a] == ' ' || str[a] == '\0')
	{
	if (c)
	{
	end = a;
	tmp = (char *) malloc(sizeof(char) * (c + 1));
	if (tmp == NULL)
	return (NULL);
	while (start < end)

	*tmp++ = str[start++];
	*tmp = '\0';
	matrix[b] = tmp - c;
	b++;
	c = 0;
	}
	}
	else if (c++ == 0)
	start = a;
	}

	matrix[b] = NULL;

	return (matrix);
}
