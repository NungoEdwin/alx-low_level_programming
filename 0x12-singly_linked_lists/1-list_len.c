#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns no. of elements in alinked list
 * @h: pointer to the list_t list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t abs = 0;


	while (h)
	{
		abs++;
		h = h->next;
	}
		return (abs);
}

