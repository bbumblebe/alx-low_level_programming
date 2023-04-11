#include <stdio.h>
#include <stdlib.h>
/**
 * times - i decided to use times function to multiply
 * @arg1: argument 1
 * @arg2: argument 2
 * Return: the return value
 */
int times(int arg1, int arg2)
{
	int a;

	a = arg1 * arg2;
	return (a);
}
/**
 * main - here we are calulating product
 * @argc: argument p
 * @argv: argumen v
 * Return: we return 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{	
	result = times(atoi(argv[1]), atoi(argv[2]));
	printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
