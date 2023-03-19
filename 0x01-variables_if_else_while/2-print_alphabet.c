#include <stdio.h>
/**
 * main - This program prints the alphabet
 * Return: the return value is 0
 */
int main(void)
{
	char l[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; l[i] != '\0'; i++)
	{
		putchar(l[i]);
	}
	putchar('\n');
return (0);
}
