#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: you get....
*/
void print_to_98(int n)
{
for ( ; n < 99; n++)
{
if (n != 98) printf("%d, ", n);
else printf("%d", n);
}
putchar('\n');
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(89);
    return (0);
}
