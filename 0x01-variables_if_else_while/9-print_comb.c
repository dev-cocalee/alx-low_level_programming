#include <stdio.h>

/**
 * main - prints all possible combinations of single digit-numbers
 * Return: 0
*/
int main(void)
{
int c = 48;
while (c < 58)
{
putchar(c);
if (c != 57)
putchar(44), putchar(32);
c++;
}
putchar('\n');
return (0);
}
