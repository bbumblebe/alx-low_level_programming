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

printf("size of a char: %u", (uint32_t)sizeof(a));
printf("size of an int: %u", (uint32_t)sizeof(b));
printf("size of a long int: %u", (uint32_t)sizeof(c));
printf("size of a long long int: %u", (uint32_t)sizeof(c));
printf("size of a float: %u", (uint32_t)sizeof(d));





	return (0);
}
