#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - fxn that pops the head node
 * @head: pointer to the listint_t list to be popped
 * Return: the head or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *swap;

	if (head == NULL)
		return (0);

	swap = (*head)->next;
	free(*head);
	*head = swap;
	return (head);
}
