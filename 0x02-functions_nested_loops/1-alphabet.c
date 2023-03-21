#include "main.h"

/**
 * main - prints alphabet
 * Return: the return value is 0
 */
int main(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
