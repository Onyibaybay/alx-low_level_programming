#include "main.h"

/**
 * print_numbers -  a function that prints the numbers, from 0 to 9
 * _putchar - prints the numbers
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
