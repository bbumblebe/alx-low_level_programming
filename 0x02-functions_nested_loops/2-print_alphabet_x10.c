#include "main.h"
/**
 * print_alphabet_x10 - making alphabrt 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;
	int z = 1;

	while (z <= 10)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	z++;
	_putchar('\n');
	}
}

