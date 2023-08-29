#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Returns the sum of all the data (n) in a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of the data (n) of the nodes, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
