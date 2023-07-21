#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: is the number of times the character should be printed
 * Return: empty
 */
void print_diagonal(int n)
{
	int j;

	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{	
				_putchar(32);
			}
		}
}
