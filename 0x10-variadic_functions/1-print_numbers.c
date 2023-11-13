#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print num
 * @separator:  a seperator
 * @n: interger
 * Return: void
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list(num);

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
