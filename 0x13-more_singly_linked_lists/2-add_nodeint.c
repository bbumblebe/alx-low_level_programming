#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - defnine
 * @head: head pointer
 * @n: n
 * Return: newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
}
