#include "main.h"

/**
 * time_table - prints the 9 times table starting with zero
*/
void times_table(void)
{
int a, b, rem;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
if ((a * b) > 9)
{
rem = (a * b) / 10;
_putchar(rem + 48), _putchar(((a * b) %  10) + 48);
}
else
_putchar(48 + (a * b));

if (b != 9)
_putchar(44);

_putchar(32);

if ((a * b) > 9)
_putchar(32);
}
 _putchar('\n');
}
_putchar('\n');
}
