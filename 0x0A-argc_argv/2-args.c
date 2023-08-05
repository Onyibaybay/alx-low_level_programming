#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program that prints the arguments recieved
* @argc: argument count numbers
* @argv: argument vector
* Return: 0 Always success
*/
int main(int argc, char *argv[])
{
	int v;

	for (v = 0; v < argc; v++)
	{
		printf("%s\n", argv[v]);
	}
	return (0);
}
