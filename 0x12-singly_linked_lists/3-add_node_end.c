#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - add node
 * @head: head
 * @str: string
 * Return: return value
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		list_t *cur = *head;

		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = node;
	}
	return (node);
}
