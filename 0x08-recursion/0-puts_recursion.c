#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - recuraive
 * @s: pointer
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar (*s);
	_puts_recursion(s + 1);
	}
	_putchar ('\n');

}