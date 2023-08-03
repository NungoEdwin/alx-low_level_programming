#include "lists.h"
/**
 * get_nodeint_at_index - fxn that gets node at a particular position
 * @head: this is head of linked list
 * @index: index for loop?
 * Return: of listint_t type or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *swap;

	unsigned int i;

	swap = head;


	for (i = 0; i < index; i++)
	{
		swap = swap->next;
	}
	if (!swap)
		return (NULL);
	return (swap);
}

