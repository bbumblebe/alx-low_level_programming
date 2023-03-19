#include <stdio.h>
/**
 * main - program that prints all possible combinations
 * Return: the return value is 0
 */
int main(void)
{
	char a[] = "0123456789abcdef";
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
