/**
 * malloc_checked - the main function
 * @b: unsigned int
 * Return: void
 */
#include <stdio.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
	void *checked = malloc(b);

	if (checked == NULL)
	{
		exit(98);
	}
	else
		return (checked);
}
