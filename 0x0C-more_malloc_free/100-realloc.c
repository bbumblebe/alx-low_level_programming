/**
 * _realloc - im so tired, hope it works
 * @new_size: size
 * @old_size: old size
 * @ptr: pinter
 * Return: null or new_ptr
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
void *new_ptr;

	if (new_size == old_size)
	return (ptr);

	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	return (NULL);

	if (ptr != NULL)
	{
	size_t copy_size = (old_size < new_size) ? old_size : new_size;

	memcpy(new_ptr, ptr, copy_size);
	free(ptr);
	}
	return (new_ptr);
}

