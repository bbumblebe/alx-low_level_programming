#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - calloc. so tired rn
 * @nmemb: numb of members
 * @size: size
 * Return: l
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	int j = 0;
	char *l;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	l = malloc(j);
	if (l == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		l[i] = 0;
		i++;
	}
	return (l);
}
