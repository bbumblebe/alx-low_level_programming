#include <stdio.h>
/** main - This program prints the alphabet
 * Return: the return value is 0
 */

int main(void)
{
	int letters[26];

	for(int i = 0; i < 26; i++)
		letters[i] = 'a' + i;
	
	for(int i =0; i < 26; i++)
		printf("%c ", letters[i]);

printf("\n");
return (0);
}

