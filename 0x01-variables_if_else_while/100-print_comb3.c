#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers
 * Return: 0
*/
int main(void)
{
int c = 48, d = 49, i = 0;
for ( ; c < 58; c++, i++)
{
d = 49 + i;
for ( ; d < 58; d++)
{
putchar(c), putchar(d);
if (c != 56 || d != 57)
putchar(44), putchar(32);
}
}
putchar('\n');
return (0);
}
