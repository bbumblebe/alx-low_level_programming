/**
 * main - the program prints all arguments
 * @argc: the argument c
 * @argz: the pointer
 * Return: 0
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i ++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
