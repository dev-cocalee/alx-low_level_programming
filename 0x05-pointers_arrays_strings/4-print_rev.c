#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be detnirp, got that? hahahahahaha
*/
void print_rev(char *s)
{
int i = 0;
char *err_msg = "(null)";

if (s == NULL)
{
while (err_msg[i])
_putchar(err_msg[i]), i++;
_putchar(10);
return;
}

while (s[i])
i++;
for ( ; i >= 0; i--)
_putchar(s[i]);
_putchar(10);
}
