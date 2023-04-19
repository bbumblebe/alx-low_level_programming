/**
 * int_index - index
 * @array: array
 * @size: size of array
 * @cmp: compare
 * Return: -1 or Null
 */
#include <stdio.h>
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	}

	return (-1);
}
