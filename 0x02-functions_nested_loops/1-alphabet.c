#include "main.h"

/**
 * main - prints alphabet
 * Return: the return value is 0
 */
void print_alphabet(void);
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
