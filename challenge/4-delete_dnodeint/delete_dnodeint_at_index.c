#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	/* Move to the node at the given index */
	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	/* If deleting the head node */
	if (current->prev == NULL)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
	}
	else
	{
		current->prev->next = current->next;
		if (current->next)
			current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
