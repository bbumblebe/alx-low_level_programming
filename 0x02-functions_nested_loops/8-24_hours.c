#include "main.h"
/**
 * 8-24_hours - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
				while (p < 2)
				{
					_putchar(l);
					_putchar('\n');
				}
				p++;
				}
				_putchar(k);
				_putchar('58');
				_putchar('\n');
			}
			_putchar(j);
			_putchar('\n');
		}
		_putchar(i);
		_putchar('\n');
	}
}
