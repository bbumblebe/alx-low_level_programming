/**
 * main - the program count args
 * @argc: argument
 * @argv: pointer argument
 * Return: 0
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
