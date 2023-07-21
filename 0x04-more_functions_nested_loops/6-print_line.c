#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of the line drawn
 * Return: empty
 */
void print_line(int n)
{
	int j;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
