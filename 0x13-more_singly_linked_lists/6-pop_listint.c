#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - Deletes the head node listint_t list and returns its data.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
