#include <ctype.h>

/**
 * _isdigit - is a function that checks digits
 * @c: The character checked
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
