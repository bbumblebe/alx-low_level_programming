#include "main.h"
int _sqrt(int n, int j);

/**
 * _sqrt_recursion - natural square root of a number.
 * @n: int
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural square root of a number.
 * @n: int
 * @j: int
 * Return: natural square root or -1
 */
int _sqrt(int n, int j)
{
	int square = j * j;

	if (square == n)
	{
		return (j);
	}
	else if (square > n)
	{
		return (-1);
	}
	return (_sqrt(n, j + 1));
}
