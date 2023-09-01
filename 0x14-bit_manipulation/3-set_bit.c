#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index starting from 0
 *
 * Return: 1 if it works and -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n |= mask;

	return (1);
}
