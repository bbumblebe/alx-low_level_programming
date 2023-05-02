#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
void free_listint(listint_t *head)
{
	listint_t *ptf;

	ptf = head;
	while (head != NULL)
	{
		head = head->next;
		free(ptf);
	}
}
