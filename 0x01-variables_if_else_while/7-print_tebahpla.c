#include <stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 * Return: return value 0;
 */
int main(void)
{
	char a[] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
