#include <stdio.h>
/**
* main - program that prints out all the arguments passed to it.
* @argc: argument number
* @argv: array of argument
* Return: 0 Always success
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
