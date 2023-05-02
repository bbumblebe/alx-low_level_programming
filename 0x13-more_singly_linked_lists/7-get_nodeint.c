#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - node at index
 * @head: head pointer
 * @index: index p
 * Return: int
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; head != NULL && j < index; j++)
	{
		head = head->next;
	}
	return (head);
}
