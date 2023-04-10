#include "main.h"
/**
 * _strcat - Concatenates two strings
 * char *_strcat(char *dest, char *src) - string cat
 * @dest: pointer to the destination string
 * @src: pointer to souce
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int l = 0, i;

	while (dest[l])
	{
		l++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[l] = src[i];
		l++;


	}
	dest[l] = '\0';
	return (dest);
}

