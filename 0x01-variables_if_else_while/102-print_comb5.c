#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0
*/
int main(void)
{
int c, d, e, f, i = 0, k = 0;
for (c = 48; c < 58; c++, i++)
{
d = 48 + i;
for( ; d < 58; d++)
{
for (e = 48; e < 58; e++, k++)
{
f = 48 + k;
for ( ; f < 58; f++)
{
putchar(c), putchar(d), putchar(32), putchar(e), putchar(f);
if (c != 55 || d != 56 || e != 57 || f != 57)
putchar(44), putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
