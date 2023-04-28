/**
 * list_len - list number of nodes
 * @h: h pointer
 * Return: num
 */
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			h = h->next;
			num++;
		}
	}
	return (num);
}
