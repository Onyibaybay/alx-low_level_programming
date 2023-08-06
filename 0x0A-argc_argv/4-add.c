#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - program that adds positive numbers
* @argc: number count line arguments.
* @argv: array command line arguments.
* Return: 0 - success.
*/

int main(int argc, char *argv[])
{
	int y, z, add = 0;

	for (y = 1; y < argc; y++)
	{
		for (z = 0; argv[y][z] != '\0'; z++)
		{
			if (!isdigit(argv[y][z]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[y]);
	}
	printf("%d\n", add);
	return (0);
}
