#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: The number of bytes from src to be appended to dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
