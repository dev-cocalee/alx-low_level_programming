#include "main.h"

/**
* _atoi - coverts a string to an integer
* @s: the string to converted
* Return: an integer ver of s
*/
int _atoi(char *s)
{
int i = 1;
unsigned int val = 0;
do {
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
val = val * 10 + (*s - '0');
else if (val > 0)
break;
} while (*s++);
return (val *i);
}
