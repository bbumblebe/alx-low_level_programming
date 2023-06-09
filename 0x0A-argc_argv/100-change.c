#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
int coins, cents;

coins = 0;
cents = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
cents = atoi(argv[1]);
while (cents > 0)
{
coins++;
if ((cents - 25) >= 0)
{
cents -= 25;
continue;
}
if ((cents - 10) >= 0)
{
cents -= 10;
continue;
}
if ((cents - 5) >= 0)
{
cents -= 5;
continue;
}
if ((cents - 2) >= 0)
{
cents -= 2;
continue;
}
cents--;
}
}
printf("%d\n", coins);
return (0);
}
