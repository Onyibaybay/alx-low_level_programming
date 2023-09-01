#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big and 1 if little
 */
int get_endianness(void)
{
	unsigned int value = 1;
	unsigned char *byte_pointer = (unsigned char *)&value;

	if (*byte_pointer == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
