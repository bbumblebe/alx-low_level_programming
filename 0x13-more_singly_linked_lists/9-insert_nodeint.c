#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert at index
 * @head: pointer
 * @idx: int
 * @n: int
 * Return: new
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx ==  0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	prev = *head;
	while (--idx && prev->next)
		prev = prev->next;
	if (idx != 0)
	{
		free(new);
		return (NULL);
	}
	new->next = prev->next;
	prev->next = new;
	return (new);
}
