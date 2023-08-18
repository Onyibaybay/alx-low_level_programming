#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @n: number of integers
 * @separator: separator of string
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list arg;

	va_start(arg, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(arg, int));
		if (a < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
