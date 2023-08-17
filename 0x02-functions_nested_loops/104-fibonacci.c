#include "main.h"

/**
 * main - prints the first fifty fibonacci numbers
 * Return: 0
*/
int main(void)
{
size_t a = 1, b = 2, fib, i = 0;
printf("1, 2, ");
for ( ; i < 97; i++)
{
fib = a + b;
a = b, b = fib;
printf("%ld", fib);
if (i != 96)
printf(", ");
}
putchar('\n');
return (0);
}
