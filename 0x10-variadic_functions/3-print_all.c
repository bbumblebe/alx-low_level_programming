#include "variadic_functions.h"

#include <stdlib.h>

#include <stdio.h>

/**

  * print_all - Prints anything

  * @format: The conversion specifier to prints

  *

  * Return: Nothing

  */

void print_all(const char * const format, ...)

{

	va_list args;	f_dt form_types[] = {

		{ "c", print_a_char },

		{ "i", print_an_integer },

		{ "f", print_a_float },

		{ "s", print_a_string }

	};

	unsigned int i, j;

	char *separator = "";

	va_start(args, format);

	for (i = 0; format != NULL && format[i]; i++)

	{

		for (j = 0; j < 4; j++)

		{

			if (format[i] == *(form_types[j].identifier))

			{

				form_types[j].f(separator, args);

				separator = ", ";

			}

		}

	}

	va_end(args);

	printf("\n");

}

/**

  * print_a_char - Prints a character of char type

  * @separator: The separator of the character

  * @args: A list of variadic arguments

  *

  * Return: Nothing

  */

void print_a_char(char *separator, va_list args)

{

	printf("%s%c", separator, va_arg(args, int));

}

/**

  * print_an_integer - Prints a character of integer type

  * @separator: The separator of the character

  * @args: A list of variadic arguments

  *

  * Return: Nothing

  */

void print_an_integer(char *separator, va_list args)

{

	printf("%s%d", separator, va_arg(args, int));

}

/**

  * print_a_float - Prints a character of float type

  * @separator: The separator of the character

  * @args: A list of variadic arguments

  *

  * Return: Nothing

  */

void print_a_float(char *separator, va_list args)

{

	printf("%s%f", separator, va_arg(args, double));

}

/**

  * print_a_string - Prints the content of pointer to char type

  * @separator: The separator of the character

  * @args: A list of variadic arguments

  *

  * Return: Nothing

  */

void print_a_string(char *separator, va_list args)

{

	char *arg = va_arg(args, char *);

	if (arg == NULL)

	{

		printf("%s(nil)", separator);

	}

	else

	{

		printf("%s%s", separator, arg);

	}

}
