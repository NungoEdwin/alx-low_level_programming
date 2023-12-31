#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sums up all thenodes in  listint_t list
 * @head: first node in the linked list
 * Return: resulting summation, type int
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *swap;

	swap = head;

	while (swap)
	{
		total += swap->n;
		swap = swap->next;
	}

	return (total);
}

