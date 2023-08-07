#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: duplicate string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *xxx;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	xxx = malloc(sizeof(char) * (a + 1));

	if (xxx == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		xxx[b] = str[b];

	return (xxx);
}
