#include "main.h"
/**
 * puts_half  - prints half of a string, followed by a new line.
 * Return: void
 * @str: string char
 */

void puts_half(char *str)
{
	int i;

	for (i = str[0]; str[i] > (strlen(str)/2);i++)
	{
		_putchar(str[i]);
	}
}
