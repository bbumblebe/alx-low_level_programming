#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: charscter
 */

void print_diagonal(int n)
{
	int j, k;

	for (j = 0; j <= n; j++)
	{
		for (k = 0; k <= n; k++)
		{
			if (k == j)
			{
				_putchar ('/');
				_putchar ('\n');
			}
			else 
			{
				_putchar (' ');
			}
		}
	}
}
