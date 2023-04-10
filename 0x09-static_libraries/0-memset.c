#include "main.h"
/**
 * _memset - a function  pointer
 * @s: a char pointer  s
 * @b: a char b
 * @n: the n value
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	s[i]  = b;
return (s);
}
