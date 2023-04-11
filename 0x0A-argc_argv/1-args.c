/**
 * main - the program count args
 * @count: represents number of arguments
 * @argc: argument
 * @argv: pointer argument
 * Return: 0
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		(void) argv;
			printf("%d\n",argc - 1);
	}
	return (0);
}
