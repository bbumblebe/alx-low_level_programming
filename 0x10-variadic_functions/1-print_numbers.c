#include <stdarg.h>

#include <stdio.h>

#include <stdlib.h>

#include "variadic_functions.h"

/**

 * print_numbers - Prints numbers, separated by a string.

 * @separator: The separator string.

 * @n: The number of arguments to print.

 * @...: The integers to print.

 *

 * Return: void.

 */

void print_numbers(const char *separator, const unsigned int n, ...)

{

	va_list args;	unsigned int i;

	if (n == 0)

		return;

	va_start(args, n);

	for (i = 0; i < n; i++)

	{

		printf("%d", va_arg(args, int));

		if (i != n - 1 && separator != NULL)

			printf("%s", separator);

	}

	va_end(args);

	printf("\n");

}
