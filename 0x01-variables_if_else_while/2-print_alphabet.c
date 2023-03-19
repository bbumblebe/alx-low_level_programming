#include <stdio.h>
/** 
 * main - This program prints the alphabet
 * Return: the return value is 0
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; letters[i] != '\0'; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n')
return (0);
}
