#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - pop list int
 * @head: heaf pointer
 * Return: i or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		i = tmp->n;
		free(tmp);
		return (i);
	}
	else
		return (0);
}
