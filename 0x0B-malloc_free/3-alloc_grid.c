#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate a 2D array of integers with given dimensions
 *
 * @width: the width of the 2D array
 * @height: the height of the 2D array
 *
 * Return: a pointer to the allocated 2D array, or NULL if allocation fails
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

/* Check for invalid dimensions */
if (width <= 0 || height <= 0)
{
return (NULL);
}

/* Allocate memory for the 2D array of integers */
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}

/* Allocate memory for each row in the 2D array */
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
