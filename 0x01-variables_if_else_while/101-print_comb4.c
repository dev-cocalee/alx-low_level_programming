#include <stdio.h>

/**
 * main - prints all possible combinations of three-digit numbers
 * Return: 0
*/
int main(void)
{
int c = 48, d = 49, e = 49;
for ( ; c < 56; c++)
{
for (d = c + 1; d < 57; d++)
{
for (e = d + 1; e < 58; e++)
{
putchar(c), putchar(d), putchar(e);
if (c != 55 || d != 56 || e != 57)
putchar(44), putchar(32);
}
}
}
putchar('\n');
return (0);
}
