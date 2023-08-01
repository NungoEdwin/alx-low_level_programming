#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - fxn that adds node at end
 * @head: the head pointer
 * @n: int n guess age?
 * Return: return pointer of type listint or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (!add)
		return (NULL);
	while (*head == NULL)
	{
		*head = add
			add->next = NULL;
		add->n = n;

	}
	return (add)


}
