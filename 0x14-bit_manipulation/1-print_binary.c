#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_binary - print binary
 * @n: int n
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	char *buffer = calloc(64, sizeof(char));
	char *p = buffer;

	do {
		*p++ = (n % 2) ? '1' : '0';
		n /= 2;
	} while (n > 0);

	while (p-- > buffer)
	{
		putchar(*p);
	}
}
