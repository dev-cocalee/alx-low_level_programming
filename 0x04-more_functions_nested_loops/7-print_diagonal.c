#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: you get...
*/
void print_diagonal(int n)
{
int i, space = 0;
if (n <= 0)
{
_putchar('\n');
return;
}
else
{
for (i = 0; i < n; i++)
{
for (space = 0; space < i; space++)
_putchar(32);
_putchar(92);
_putchar('\n');
}
}
}
