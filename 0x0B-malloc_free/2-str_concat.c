/**
 * str_concat - strn concat prog
 * @s1: string 1
 * @s2: string 2
 * Return: null or strcon
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{
	char *strcont;
	unsigned int i;

	if ((s1 == NULL) && (s2 == NULL))
	{
		return (NULL);
	}
	else
	{
	strcont = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (strcont == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		strcont[i] = s1[i];
	}
	for (i = 0; i < strlen(s2); i++)
	{
		strcont[i + strlen(s1)] = s2[i];
	}
		strcont[strlen(s1) + strlen(s2)] = '\0';
		return (strcont);
		free(strcont);
	}
}
