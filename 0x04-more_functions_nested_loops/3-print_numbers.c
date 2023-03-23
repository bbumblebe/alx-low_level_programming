 #include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * @c: the char value
 * Return: returns 1 or 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
