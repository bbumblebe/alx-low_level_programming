#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: a pointer to a
 * @b: a pointer to b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
