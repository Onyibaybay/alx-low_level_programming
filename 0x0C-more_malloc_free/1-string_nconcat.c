#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - The function that concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: n element of s2
 * Return: if fail should return Null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1 = 0;
	unsigned int a = 0;
	unsigned int lens = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[lens] != '\0')
		lens++;
	if (n >= lens)
	n = lens;

	s = malloc(sizeof(char) * (len1 + n + 1));

	if (s == NULL)
	return (NULL);

	for (a = 0; a < len1; a++)
	s[a] = s1[a];

	for (a = 0; a < n; a++)
	s[len1 + a] = s2[a];
	s[len1 + n] = '\0';

	return (s);
}
