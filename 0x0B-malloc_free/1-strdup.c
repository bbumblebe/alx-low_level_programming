/**
 * _strdup -duplicating string
 * @str: the string dup
 * Return: strdup or null
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *_strdup(char *str)
{
	int i;
	char *strdup = malloc(sizeof(char) * (strlen(str) + 1));

	if (strdup == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			strdup[i] = str[i];
		}
		strdup[i] = '\0';
		return (strdup);
		free(strdup);
	}
}
