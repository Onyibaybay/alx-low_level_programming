#include "main.h"
/**
 * _puts_recursion - recursion function to print a string followed by new line
 * @s: string to print
 *
 * Return: Nothing
 *
 */
void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
