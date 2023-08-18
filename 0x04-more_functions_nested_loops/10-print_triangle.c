#include "main.h"

/**
*print_triangle - prints a triangle made up of #'s on the terminal
*@size: number #'s to make up triangle to be printed
*/
void print_triangle(int size)
{
int spa, sza;

if (size > 0)
{
for (spa = 1; spa <= size; spa++)
{
for ((sza = size - spa); sza > 0; sza--)
_putchar(32);

for (sza = 0; sza < spa; sza++)
_putchar(35);

if (spa == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
