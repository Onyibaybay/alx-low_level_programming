#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: point to a string
 * Return: converted number or 0
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int z = 0;

	if (b == NULL)
		return (0);
	while (b[z] != '\0')
	{
		if (b[z] == '0')
		{
			result = result << 1;
		}
		else if (b[z] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
		z++;
	}
	return (result);
}
