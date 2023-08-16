#include "main.h"

/**
 * print_last_digit - prints the last diit of a number
 * @n: number to be worked on
 * Return: last digit of n
 */
int print_last_digit(int n)
{
int a = 0;
if (n >= 0)
{
a = (n % 10);
}
else if (n < 0)
{
a = (- 1 * (n % 10));
}
else a = 0;    
_putchar(a + 48);
return (a);
}
