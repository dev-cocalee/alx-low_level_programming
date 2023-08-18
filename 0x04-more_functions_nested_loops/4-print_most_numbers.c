#include "main.h"

/**
 * print_most_numbers - prints all digits execpt 2 and 4
*/
void print_most_numbers(void)
{
int i = 48;
for ( ; i < 58; i++)
{
if (i != 50 && i != 52)
_putchar(i);
}
_putchar('\n');
}
