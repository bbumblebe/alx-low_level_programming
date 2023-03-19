#include <stdio.h>
/**
 * main - program that prints all single digit number
 * Return: the return value is 0
 */
int main(void)
{
	int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;

	for (i = 0; array[i] <= 10; i++)
	{
		putchar(array[i] + '0');
	}
	putchar('\n');
	return (0);
}
