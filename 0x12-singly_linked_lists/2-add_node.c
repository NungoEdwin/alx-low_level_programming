#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node -adds new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return:the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *mpya;
	unsigned int len = 0;

	while (str[len])
		len++;

	mpya = malloc(sizeof(list_t));
	if (!mpya)
		return (NULL);

	mpya->str = strdup(str);
	mpya->len = len;
	mpya->next = (*head);
	(*head) = mpya;
	return (*head);
}

