#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be detnirp, got that? hahahahahaha
*/
void print_rev(char *s)
{
int i = 0;

if (s == NULL)
{
_putchar(0);
return;
}

while (s[i])
i++;
for ( ; i >= 0; i--)
_putchar(s[i]);
}
