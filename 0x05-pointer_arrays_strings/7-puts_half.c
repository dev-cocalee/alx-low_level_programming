#include "main.h"
#include <unistd.h>

/**
 * puts_half - prints the second half of a string
 * @str: you should know what this does at this point
*/
void puts_half(char *str)
{
int i = 0, j = 0;

while (str[i])
i++;

/*according to to the mighty Mr Barbier*/
if (!(i % 2))
j = (i - 1) / 2;
else
j = i / 2;

for (++j; str[j]; j++)
_putchar(str[j]);

_putchar(10);
}
