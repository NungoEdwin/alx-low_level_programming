#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -fxn that  frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *swap = head->next;


	while (head)
	{
		free(head);
		head = swap;
	}
}

