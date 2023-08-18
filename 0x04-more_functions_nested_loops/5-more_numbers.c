#include "main.h"
/**
 * more_numbers - a function that prints 0 to 14 ten times
*/
void more_numbers(void)
{
int i = 0, j = 0;
for ( ; i < 10; i++, j = 0)
{
for ( ; j < 15; j++)
{
if  (j > 9)
_putchar((j / 10) + 48);
_putchar((j % 10) + 48);
}
_putchar('\n');
}
}
