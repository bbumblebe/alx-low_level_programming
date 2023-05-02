#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete
 * @head: head
 * @index: the index of the list where the node is deleted
 * Return: we return 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (!index)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; current && i < index - 1; i++)
		current = current->next;
	if (!current || !current->next)
		return (-1);
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
