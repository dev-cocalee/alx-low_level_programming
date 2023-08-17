#include "main.h"

/**
 * main - prints the first fifty fibonacci numbers
 * Return: 0
*/
int main(void)
{
size_t a = 1, b = 2, fib;
printf("1, 2, ");
while (fib < 4000000)
{
fib = a + b;
a = b, b = fib;
if ((fib % 2) == 0)
printf("%ld", fib);
if (i != 47)
printf(", ");
}
putchar('\n');
return (0);
}
