/**
 * array_range - arr
 * @max: maximum
 * @min: minimum
 * Return: i
 */
#include "main.h"
#include <stdlib.h>
int *array_range(int min, int max)
{
	int *i, j;

	if (max < min)
	{
		return (NULL);
	}
	i = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (i == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		i[j] = min;
		j++;
		min++;
	}
	return (i);
}
