#include<stdio.h>
/**
 * main - program that prints all possible combinatioms
 * Return: the return value is 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)

	{
		putchar((i % 10) + '0');
		if (i < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
