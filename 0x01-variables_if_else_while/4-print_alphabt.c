#include <stdio.h>
/**
 * main - the program prints the alphabet in lowercase
 * Return: the return value is 0
 */
int main(void)
{
	char a[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
}
