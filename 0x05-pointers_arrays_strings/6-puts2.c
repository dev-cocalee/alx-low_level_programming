#include "main.h"

/**
 * puts2 - prints every other character of of a string
 * @str: a pointer to some string
*/
void puts2(char *str)
{
int i = 0;
while (str[i])
_putchar(str[i]), i += 2;
_putchar(10);
}

