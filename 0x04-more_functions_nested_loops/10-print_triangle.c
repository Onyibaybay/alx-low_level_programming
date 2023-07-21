#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: The size of the square triangle
 * Return: empty
 */
void print_triangle(int size)
{
	int i;

	int j;

	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(3);
			}
		}
	}
}
