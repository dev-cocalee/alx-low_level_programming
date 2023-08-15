#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
*/
int main(void)
{
char c = 48;
while (c < 58)
putchar(c), c++;
c = 97;
while (c < 103)
putchar(c), c++;
putchar('\n');
return (0);
}
