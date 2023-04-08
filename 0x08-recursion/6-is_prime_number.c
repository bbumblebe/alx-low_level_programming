#include "main.h"
int check(int n, int i);
/**
 * is_prime_number - checks for prime number
 * @n: interger
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return(check(n, 1));
}
/**
 * check - look for whether its prime
 * @n: interger
 * @i: int
 * Return: int
 */
int check(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i > 1 && n % i == 0)
	{
		return (0);
	}
	if ((n/i) < i)
	{
		return (1);
	}
	return (check(n, i + 1));
}
