#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list_t
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%lu] %s\n", count, h->str);
		}
		else
		{
			printf("[%lu] (nil)\n", count);
		}
		h = h->next;
		count++;
	}
	return (count);
}
