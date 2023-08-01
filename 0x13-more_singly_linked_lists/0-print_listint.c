#include <stdio.h>
#include "lists.h"
/**
 * print_listint - fcn that prints nodes in listint
 * @h: seems like the nodes?
 * Return: returns type listint of size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t sum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		++sum;
		h = h->next;
	}
	return (sum);


}
