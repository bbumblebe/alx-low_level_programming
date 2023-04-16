/**
 * array_range - array range
 * Return: arr or null
 * @min: minimum
 * @max: maximum
 */
#include <stdio.h>
#include <stdlib.h>
int *array_range(int min, int max)
{
	int *arr, i = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
