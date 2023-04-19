/**
 * array_iterator - array iterator
 * @size: size of array
 * @array: the array we iterating
 * @action: the action we taking
 * Return: null
 */
#include <stdio.h>
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size != 0 && action != NULL)

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
