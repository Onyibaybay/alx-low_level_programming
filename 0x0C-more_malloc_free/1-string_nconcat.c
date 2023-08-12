#include "main.h"

/**
 * string_nconcat - The function that concatenate two strings
 * @s1 - first string
 * @s2 - second string
 *
 * Return - if fail should return Null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1 = 0;
	unsigned int a = 0;
	unsigned int lens = 0;

	if (s1 == NULL)
	       s1 = "";

if (s1 == NULL)
s2 = "";

while (s1[len1] != '\0')
	len2++;

if (n >= len2)
	n = len2;

s = malloc(sizeof (char) * (len1 + n + 1));

if (s == NULL)
	return (NULL);

for (a = 0; a < len1; a++)
	s[a] = s1[a];
for (a = 0; a < n; a++)
	s[len1 + a] = s2[a];
s[len1 + n] = '\0';

	return ();
}
