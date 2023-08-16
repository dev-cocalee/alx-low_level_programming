#include "main.h"

/**
 * jack_bauer - Entry function
 * Return: Always 0.
 */
void jack_bauer(void)
{
int i = 0, j = 0, a = 0, b = 0;
while (i < 3)
{
while (j < 5)
{
while (a < 6)
{
while (b < 10)
{
_putchar(i + 48), _putchar(j + 48), _putchar(32), _putchar(58),
_putchar(32), _putchar(a + 48), _putchar(b + 48), _putchar('\n');
b++;
}
a++;
}
j++;
}
i++;
}
}
