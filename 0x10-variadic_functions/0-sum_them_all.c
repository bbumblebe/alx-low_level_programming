#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum
 * @n: interget
 * Return: return int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;

	va_list num;

	va_start(num, n);


	for (; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
