#include "main.h"
/**
 * 1-swap.c - a function that swaps the values of two integers.
 * @a: a pointer to a
 * @b: a pointer to b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
