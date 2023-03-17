#include<stdio.h>
/**
 * main - our program will use a string
 * Return: the return value is 0
 */
int main(void)
{
	char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	while (a[i] != '\0')
	{
	putchar(a[i]);
	i++;
	}
	return (0);
}
