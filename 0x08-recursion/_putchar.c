#include <unistd.h>
/**
 * _putchar - writes to the stdout
 * @c: the character to pribt
 * Return: on succes 1.
 * On error, -1.
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
