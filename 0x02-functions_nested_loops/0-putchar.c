#include <stdio.h>
/**
 * main - this program print 0-putchar.c
 * Return: the return value is 0
 */
int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
