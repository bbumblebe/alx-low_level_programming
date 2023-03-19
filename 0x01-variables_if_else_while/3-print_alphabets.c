#include <stdio.h>
/**
 * main - this program prints letters minus q and e
 * Return: the return value is 0
 */

int main(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
