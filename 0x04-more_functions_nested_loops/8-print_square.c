include "main.h"

/**
 * print_square - unction that prints a square
 * @size: the size of the square
 * Return: empty
 */
void print_square(int size)
{
	int j;

	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
		}
}
