#include <unistd.h>
/**
 * _putchar - writes c char to stdout
 * @c: the char to print
 * Return: on succes 1 or -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
