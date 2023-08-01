#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - fxn that adds node at beggining
 * @head: the head pointer
 * @n: int n guess age?
 * Return: return pointer of type listint or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (!add || head == NULL)
		return (NULL);
	add->next = *head;
	add->n = n;
	*head = add;
	return (add);


}
