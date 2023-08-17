#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function to search for an integer
 * @array: array of pointer
 * @size: array size
 * @cmp: function of the pointer
 * Return: Always 0(Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || !(array) || !(cmp))
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}
