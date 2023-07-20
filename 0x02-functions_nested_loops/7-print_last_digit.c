#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: the number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)

{

	int Last;

	Last = n % 10;
	if (Last < 0)
	{
	Last = Last * -1;
	}
	_putchar(Last + '0');
	return (Last);
}
