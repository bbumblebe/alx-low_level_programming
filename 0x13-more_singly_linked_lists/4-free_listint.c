#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - list int
 * @head: head
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptf;

	while ((ptf = head) != NULL)
	{
		head = head->next;
		free(ptf);
	}
}
