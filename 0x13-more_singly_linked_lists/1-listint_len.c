#include <stdio.h>
#include "lists.h"
/**
 * listint_len - fcn that prints nodes in listint
 * @h: seems like the nodes?
 * Return: returns type listint of size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t sum = 0;

	while (h)
	{
		++sum;
	}
	return (sum);


}
