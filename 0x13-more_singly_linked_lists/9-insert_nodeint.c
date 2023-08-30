#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - function that inserts a new node.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer value to be added as the data of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (j = 0; temp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
