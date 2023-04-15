#include <stdio.h>
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	void *calloc = malloc(sizeof(unsigned int) * size);
	if (nmemb == 0 || calloc == 0)
	{
		return (NULL);
	}
	if (calloc == NULL)
	{
		return (NULL);

	}
	for (i = 0; i <= size; i++)
	{
		nmemb++;
	}
	return (calloc);
}
