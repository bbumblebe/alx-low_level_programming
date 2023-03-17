#include<stdio.h>
#include<stdint.h>
/**
 * main - this program prints various sizes of data types
 * Return: its return value is 0
 */

int main(void)
{
	char a;
	int  b;
	long int  c;
	long long int d;
	float e;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));





	return (0);
}
