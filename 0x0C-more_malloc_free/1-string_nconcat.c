/**
 * string_nconcat - contaca s
 * @s1: string 1
 * @s2: string 2
 * Return: null or sncon
 * @n: n int
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sncon;
	unsigned int s1_len = 0, total_len = 0, s2_len = 0, i = 0, j = 0;

	while (s1[i] != '\0')
	{
		s1_len++;
		i++;
	}
	while (s2[j] != '\0')
	{
		s2_len++;
		j++;
	}
	total_len = s1_len + n;

	if (n >= s2_len)
		total_len = s1_len + s2_len;
	sncon = malloc(sizeof(char) * (total_len + 1));
	if (sncon == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		sncon[i] = s1[i];
		i++;
	}
	j = 0;
	if (n >= s2_len)
		while (s2[j] != 0)
		{
			sncon[i] = s2[j];
			i++;
			j++;
		}
sncon[total_len] = '\0';
return (sncon);
}
