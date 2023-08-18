#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @n: number of string
 * @separator: string to be printed between the strings
 *
 * Return: Always (0)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		char *str = va_arg(args, char *);

	if (str != NULL)
	{
		printf("%s", str);
	}

	else
	{
		printf("(nil)");
	}

	if (a < (n - 1) && separator != NULL)
	{
		printf("%s", separator);
	}
	}
	va_end(args);
	printf("\n");
}
