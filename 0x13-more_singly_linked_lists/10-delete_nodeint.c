#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - fxn that dels node at a particular position
 * @head: this is head of linked list
 * @index: index for loop to delete at
 * Return: of listint_t type or NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *swap, *delete;

	unsigned int i;

	swap = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(swap);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		swap = swap->next;
	}
	delete = swap->next;
	if (!swap || swap->next == NULL || !delete)
		return (-1);
	swap->next = delete->next;
	free(delete);
	return (1);
}
