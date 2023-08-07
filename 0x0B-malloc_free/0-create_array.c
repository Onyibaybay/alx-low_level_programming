#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array and initialise char c
 * @size: size of byte
 * @c: char to initialize
 *
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
