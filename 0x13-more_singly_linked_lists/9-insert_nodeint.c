#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - fxn that gets node at a particular position
 * @head: this is head of linked list
 * @idx: index for loop?
 * @n: this is the node n value
 * Return: of listint_t type or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *swap, *new;

	new = malloc(sizeof(listint_t));

	unsigned int i, b = 1;

	swap = *head;


	for (i = 0; i < (idx - b); i++)
	{
		swap = swap->next;
	}
	if (!swap)
		return (NULL);
	new->next = swap->next;
	new->n = n;
	swap->next = new;
	return (new);
}
