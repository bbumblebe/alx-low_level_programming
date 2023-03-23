#include "main.h"
/**
 * _isdigit - checks for uppercase character.
 * Return: 0 or 1
 * @c: The character to print
 * On error, -1 is returned.
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}

