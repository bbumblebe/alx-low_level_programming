#include "main.h"
/**
 * len_chec - checks *s length
 * @s: string *s
 * Return: 0 and *s length
 */
int len_chec(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + len_chec(s + 1));
	}
}
/**
 * comparison - compares characters from opposite ends
 * @index1: the left hand side pointer/character in *s
 * @indexlast: the right hand side pointer/char in *s
 * @s: a pointer
 * Return: 0 or 1
 */
int comparison(char *s, int index1, int indexlast)
{
	if (*(s + index1) == *(s + indexlast))
	{
	if (index1 == indexlast || index1 == indexlast + 1)
		return (1);
	else
		return (0 + comparison(s, index1 + 1, indexlast - 1));
	}
	return (0);
}
/**
 * is_palindrome - we check if is palindrome
 * @s: the pointer
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (comparison(s, 0, len_chec(s) - 1));
	}
}
