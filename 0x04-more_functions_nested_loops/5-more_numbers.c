#include "main.h"
/**
 * more_numbers - numbers, from 0 to 14
 * @c: character value
 * Reurn: 0 or 1
 * err, set to -1
 */
void more_numbers(void)
{
	int i;
	int j = 1;

	while (j <= 10)
	{
	for (i = 0; i <= 14; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
	j++;
	}
}

