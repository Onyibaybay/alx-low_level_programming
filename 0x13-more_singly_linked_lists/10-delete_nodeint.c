#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted.
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *previous = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);
	previous->next = current->next;
	free(current);

	return (1);
}
