#include "main.h"
/**
 * _islower - will vheck for llower case c
 * @c: will be checked
 * Return: the return value is 1 for lower case and 0 for amything else
 */
int _islower(int c)

{
	if ( c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
