#include "main.h"
#include <string.h>
/**
 * puts2 - s function that prints every other char
 * str: stru
 * Return: void
 */
void puts2(char *str)
{
	int i;



	for (i = 0; str[i] != '\0' && str[i] != '.'; i += 2)
	{
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
