/**
 * print_name - print namr
 * @name: name to print
 * @f: pointer
 * Return: nothing
 */
#include "function_pointers.h"


void print_name(char *name, void (*f)(char *))
{
	while (name != NULL && f != NULL)
	{
	f(name);
	break;
	}
}
