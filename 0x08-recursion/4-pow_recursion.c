#include "main.h"
/**
 * _pow_recursion - recursive func
 * @x: int x
 * @y: int y
 * Return: all return val
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
	result = _pow_recursion(x, y / 2);
	return (result * result);
	}
	else
	{
		result = _pow_recursion(x, (y - 1) / 2);
		return (x * result * result);
	}

}
