#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @' ': space character
 * @a: array variabe
 * Return: a
 */

char *cap_string(char *a)
{
	int i;

	int capNext = 1;

	for (i = 0; a[i] != '\0'; i++)
	{
	if (a[i] == ' ' || a[i] == '\n' || a[i] == '\t' || a[i] == '.')
	{
	capNext = 1;
	}
	else
	{
	if (capNext && a[i] >= 'a' && a[i] <= 'z')
	{
	a[i] -= ('a' - 'A');
	}
	capNext = 0;
	}
	}
	return (a);
}
