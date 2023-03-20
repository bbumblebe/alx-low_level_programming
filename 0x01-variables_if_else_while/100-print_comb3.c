#include <stdio.h>
/**
 * main - the program prints two values
 * Return: 0
 */
int main(void)
{
	int j, k;

	for (j = 0; j < 9; j++)
	{
		for (k = 0; k < 9; k++)
		{
			putchar(j + '0');
			putchar(k + '0');
			if (j < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
