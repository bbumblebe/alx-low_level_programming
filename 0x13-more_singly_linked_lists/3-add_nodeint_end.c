#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adding node at the end
 * @head: head pointer
 * @n: n int
 * Return: nodened
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeend;

	nodeend = malloc(sizeof(listint_t));
	if (nodeend == NULL)
		return (NULL);
	nodeend->n = n;
	nodeend->next = NULL;
	if (*head == NULL)
		*head = nodeend;
	else
	{
		listint_t *lastnode = *head;

		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = nodeend;
	}
	return (nodeend);
}
