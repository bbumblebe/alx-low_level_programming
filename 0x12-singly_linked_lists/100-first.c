#include <stdlib.h>
#include <stdio.h>
/**
 * here - our funcitin
 * Return: nothin
 */
void here(void) __attribute__ ((constructor));
void here(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
