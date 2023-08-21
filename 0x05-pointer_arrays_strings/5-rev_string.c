#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
*/
void rev_string(char *s)
{
char c;
int i = 0, j = 0;

if (s == NULL) /*we can't be too sure now, can we?*/
return;

while (s[i])
i++;

for (i -= 1; j < i; i--, j++)
c = s[j], s[j] = s[i], s[i] = c;
}
