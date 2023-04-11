/**
 * main - we adding baby
 * Return: 1 or 0
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{

	if (argc >= 2)
	{
		int i, j;
		int sum = 0;

		for  (i = 1; i < argc; i++)
		{
		char *arg = argv[i];
		int is_valid = 1;
		for (j = 0; arg[j] != '\0'; j++)
		{
		if (arg[j] < '0' || arg[j] > '9')
		{
			is_valid = 0;
			break;
		}
		}
		if (is_valid)
		{
		sum += atoi(arg);
		}
		}	
		printf("%d\n", sum);
		return (0);
	}
	else if (argc == 1 )
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}	
