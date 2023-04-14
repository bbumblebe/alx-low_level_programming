#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int is_valid_input(char *num_str)

int i;
for (i = 0; num_str[i] != 0; i++)
{
if (!isdigit(num_str[i]))
{
return (0);
}
}
return (1);
}

int multiply(char *num1, char *num2)
{
return atoi(num1) * atoi(num2);
}

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
exit(98);
}
iff (!is_valid_input(argv[1]) || !is_valid_input(argv[2]))
{
printf("Error\n");
exit(98);
}
int result = multiply(argv[1], argv[2]);
printf("%d\n", result);
return (0);
}
