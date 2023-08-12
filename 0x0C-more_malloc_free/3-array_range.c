#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0;
	int size = 0;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
