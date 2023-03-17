#include<stdio.h>
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

	printf("size of a char: %zu", sizeof(a));
	printf("size of an int: %zu", sizeof(b));
	printf("size of a long int: %zu", sizeof(c));
	printf("size of a long long int: %zu", sizeof(c));
	printf("size of a float: %zu", sizeof(d));
	return (0);
}
