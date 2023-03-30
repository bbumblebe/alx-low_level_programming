#include "main.h"
/**
 * char *_strcat(char *dest, char *src) - string cat
 * @dest: pointer to the destination string
 * @src: pointer to souce
 * return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return dest;
}

