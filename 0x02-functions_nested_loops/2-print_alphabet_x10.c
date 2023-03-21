#include "main.h"
/**
 * print_alphabet_x10 - making alphabrt 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (i = 1; i <= 10; i++)
		{
			_putchar(i);
		}
	}
_putchar('\n');
}

