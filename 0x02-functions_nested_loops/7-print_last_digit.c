#include "main.h"
/**
 * mp - function converting negative numbers to positive
 * @last: last digit of n
 * Return: returns positive last num
 */
int mp(int last)
{
	return (last * -1);
}
/**
 * print_last_digit - prints the last digit of a number.
 * @n: The number to be treated
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last >= 0)
	{
	_putchar(last + '0');
	}

	else
	{
	last = mp(last);
	_putchar(last + '0');
	}
	return (last);
}
