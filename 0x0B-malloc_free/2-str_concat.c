#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string one to concatenate
 * @s2: string two to concatenate
 *
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = ci = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (a + ci + 1));

	if (conct == NULL)
		return (NULL);
	a = ci = 0;
	while (s1[a] != '\0')
	{
		conct[a] = s1[a];
		a++;
	}

	while (s2[ci] != '\0')
	{
		conct[a] = s2[ci];
		a++, ci++;
	}
	conct[a] = '\0';
	return (conct);
}
