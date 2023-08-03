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

	unsigned int i;

	new = malloc(sizeof(listint_t));

	swap = *head;

	if (idx == 0)
        {
                new->next = swap;
                new->n = n;
                swap = new;
                return (new);
        }
	for (i = 0; i < (idx - 1); i++)
	{
		swap = swap->next;
	}
	if (!swap || !new || !head)
		return (NULL);
	new->next = swap->next;
	new->n = n;
	swap->next = new;
	return (new);
}
