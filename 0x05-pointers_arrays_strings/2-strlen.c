#include "main.h"

/**
 * _strlen - loves to measure how long strings are
 * @s: pointer to the fine loong string to be measured
 * Return: length to whatev s points us to, ugh.
*/
int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;
return (len);
}
