/**
 * create_array - creating an array with specific char
 * Return: null or aray
 * @size: the size
 * @c: char c (special)
 */
#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
	char *array = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
		return (array);
	}
}
