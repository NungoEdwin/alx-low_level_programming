#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end -adds new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return:address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *mpya;
	list_t *swap = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	mpya = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	mpya->str = strdup(str);
	mpya->len = len;
	mpya->next = NULL;

	if (*head == NULL)
	{
		*head = mpya;
		return (mpya);
	}

	while (swap->next)
		swap = swap->next;
	swap->next = mpya;
	return (new);
}
