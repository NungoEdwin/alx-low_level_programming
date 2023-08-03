#include "lists.h"

/**
 * delete_nodeint_at_index - fxn that dels node at a particular position
 * @head: this is head of linked list
 * @index: index for loop to delete at
 * Return: of listint_t type or NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *swap;

	unsigned int i;

	swap = *head;


	for (i = 0; i < (index - 1); i++)
	{
		swap = swap->next;
	}
	if (!swap || swap->next == NULL)
		return (-1);
	swap->next = swap->next->next;
	return (1);
}
