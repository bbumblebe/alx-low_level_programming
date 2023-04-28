#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free the entire list
 * @head: head value
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
	free(head);
}
