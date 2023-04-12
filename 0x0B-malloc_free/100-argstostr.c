#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - convert the params passed to the program to string
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: a pointer to the resulting string
 */
char *argstostr(int ac, char **av)
{
int i, j, k, ch;
char *s;

if (ac == 0 || av == NULL)
return (NULL);

ch = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
{
ch++;
j++;
}
}
s = malloc((sizeof(char) * ch) + ac + 1);
if (s == NULL)
return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
{
s[k] = av[i][j];
k++;
j++;
}
s[k] = '\n';
k++;
}

s[k] = '\0';
return (s);
}

