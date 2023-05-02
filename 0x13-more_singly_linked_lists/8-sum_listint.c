#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - sum list
 * @head: pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
	sum = sum + head->n;
	head = head->next;
	}
	return (sum);
	if (head == NULL)
		return (0);
}
