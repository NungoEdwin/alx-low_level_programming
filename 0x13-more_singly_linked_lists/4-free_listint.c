#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -fxn that  frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *swap;


	while (head)
	{
		swap = head->next;
		free(head);
		head = swap;
	}
}

