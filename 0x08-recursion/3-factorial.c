#include "main.h"
/**
 * factorial - the prototype
 * @n: integer value
 * Return: we return 1 or -1 when therex error
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return n * factorial(n - 1);
	}
}
