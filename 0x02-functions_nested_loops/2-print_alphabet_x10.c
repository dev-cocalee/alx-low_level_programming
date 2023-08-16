#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
*/
void print_alphabet_x10(void)
{
int c = 97, i = 0;
while (i < 10)
{
while (c < 123)
_putchar(c), c++;
c = 97, i++;
_putchar('\n');
}
}
