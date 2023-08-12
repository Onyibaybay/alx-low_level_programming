#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: allocation of array
 * @size: allocation of bytes size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		s[a] = 0;
	return (s);
}
