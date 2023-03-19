#include <stdio.h>
/**
 * main - program that prints all single digit numbers
 * Return: the return value is 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
