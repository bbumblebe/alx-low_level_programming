/**
 * main - we have argc and arg and are ptinting the doc name
 * @argv: pointer
 *
 * @argc: program name and null
 * Return: our return valuis defined
 */

#include <stdio.h>
int  main(int argc, char *argv[])
{
	if  (argc > 0)
	printf("%s\n", argv[0]);
	return (0);
}
