#include<stdio.h>
/**
 * main - program that prints all possible combinatioms
 * Return: the return value is 0
 */
int main(void)
{
	int a[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int i;

	for (i = 0; a[i] != '\0'; i++)

	{
		putchar(a[i]);
	}
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
