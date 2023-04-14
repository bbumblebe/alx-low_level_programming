#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: destination
 * @src: source string
 * Return: pointer to dest
 * @s: also pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return s;
}
