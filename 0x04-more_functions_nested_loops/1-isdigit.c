#include "main.h"
/*
 * _isdigit - checks for a digit (0 through 9)
 * @c: char is value
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if ( c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
