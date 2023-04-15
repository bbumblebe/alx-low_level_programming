#include <stdlib.h>
/**
 * string_nconcat - string ncat
 * ncon - str concatation
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: point to concat string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ncon;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
		n = len2;
	ncon = (char *)malloc((len1 + n + 1) * sizeof(char));
		if (ncon == NULL)
			return (NULL);

	for (i = 0; i < len1; i++)
		ncon[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++)
		ncon[i + j] = s2[j];
	ncon[i + j] = '\0';
	return (ncon);
}
