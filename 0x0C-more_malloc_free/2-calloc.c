/**
 * _calloc - calloc funtiom
 * @nmemb: numbr of mem
 * @size: int
 * Return: return value
 */
#include <stdio.h>
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	void *calloc = malloc(nmemb * size);

	if (nmemb == 0 || calloc == 0)
	{
		return (NULL);
	}
	if (calloc == NULL)
	{
		return (NULL);

	}
	p = (char *)calloc;

	if (p == NULL)
		return (NULL);
	if ((nmemb == 0) || calloc == 0)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(p + i) = 0;
	return (calloc);
}
