#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - adding node
 * @newnode: this is a new node
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (head != NULL && str != NULL)
	{
		newnode = malloc(sizeof(list_t));
		if (newnode != NULL)
		{
			newnode->str = strdup(str);
			newnode->len = strlen(str);
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
	}
	return (0);
}
