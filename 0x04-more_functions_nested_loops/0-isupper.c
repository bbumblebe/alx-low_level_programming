#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 * @c: the character to check
 *
 * Return: returns 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{

	if (('c' > 'a') && ('c' < 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
