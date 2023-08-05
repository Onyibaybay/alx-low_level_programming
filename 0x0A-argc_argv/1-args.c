#include <stdio.h>
/**
* main - program that prints out all the arguments passed to it.
* @argc: argument number
* @argv: array of argument
* Return: 0 Always success
*/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
	printf("%s\n", argv[x]);
	}
	return (0);
}
