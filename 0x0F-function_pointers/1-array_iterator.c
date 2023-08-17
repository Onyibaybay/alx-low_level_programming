#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: element of array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (action == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
